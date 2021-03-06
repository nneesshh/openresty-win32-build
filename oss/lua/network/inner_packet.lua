local ffi = require "ffi"

local sizeof = ffi.sizeof
local offsetof = ffi.offsetof
local C = ffi.C

local setmetatable, getmetatable = setmetatable, getmetatable

local tbl_insert = table.insert
local str_sub = string.sub

local PER_FRAME_PAGE_SIZE_MAX = 4096

ffi.cdef [[
#pragma pack(1)

struct tcp_inner_frame_page_leading_t {
	uint16_t page_start:1;
	uint16_t page_end:1;
	uint16_t data_size:14;
};

struct tcp_inner_packet_leading_t {
	uint32_t inner_name_len:8;
	uint32_t inner_serial_no:8;
	uint32_t _1:16;
  uint32_t _2;
	uint64_t inner_uuid;
};

#pragma pack()
]]

local frame_leading_t = ffi.typeof("struct tcp_inner_frame_page_leading_t")
local packet_leading_t = ffi.typeof("struct tcp_inner_packet_leading_t")

local SIZE_OF_FRAME_PAGE_LEADING = sizeof(frame_leading_t, 0)
local SIZE_OF_TCP_INNER_PACKET_LEADING = sizeof(packet_leading_t, 0)

local _P = {}

--
function _P:read(s)
    -- frame leading
    local fldata, flerr = s:receive(SIZE_OF_FRAME_PAGE_LEADING)
    if not fldata then
        return nil, flerr, "failed to read frame leading"
    end

    ffi.copy(self.frm_l_r, fldata, #fldata)
    if self.frm_l_r.data_size <= 0 then
        return nil, "frame leading data size is zero"
    end

    while true do
        --
        local remain_data_size = self.frm_l_r.data_size

        -- packet leading
        if self.frm_l_r.page_start > 0 then
            local pl_size = self:get_packet_leading_size()
            local pldata, plerr = s:receive(pl_size)
            if not pldata then
                return nil, plerr, "failed to read packet leading"
            end

            ffi.copy(self.pkt_l_r, pldata, #pldata)

            self.pkt_r.sn = self:get_serial_no()

            -- packet name
            local pkt_name, pkt_nameerr = self:read_packet_name(s)
            if not pkt_name then
                return pkt_name, pkt_nameerr, "failed to read packet name"
            end

            --
            remain_data_size = remain_data_size - pl_size - #pkt_name
        end

        -- packet data
        local pddata, pderr = s:receive(remain_data_size)
        if not pddata then
            return nil, pderr, "failed to read packet data"
        end

        tbl_insert(self.pkt_r.data, pddata)

        if self.frm_l_r.page_end > 0 then
            break
        end
    end

    return self.pkt_r
end

-- for buffer reuse
local pkt_w

--
function _P:write(s, msgname, msgdata, msgSn)
    local sent = 0
    local pl_size = self:get_packet_leading_size()
    local name_len = #msgname
    local remain_size = #msgdata
    local send_size_max
    local send_size

    -- first page
    send_size_max = PER_FRAME_PAGE_SIZE_MAX - SIZE_OF_FRAME_PAGE_LEADING - pl_size - name_len

    pkt_w = {}
    send_size = (remain_size <= send_size_max) and remain_size or send_size_max
    remain_size = remain_size - send_size

    -- frame leading init
    self.frm_l_w.page_start = 1
    self.frm_l_w.data_size = pl_size + name_len + send_size
    self.frm_l_w.page_end = (remain_size <= 0) and 1 or 0

    tbl_insert(pkt_w, ffi.string(self.frm_l_w, SIZE_OF_FRAME_PAGE_LEADING))

    -- packet leading init
    self.pkt_l_w.name_len = name_len
    self.pkt_l_w.serial_no = msgSn

    tbl_insert(pkt_w, ffi.string(self.pkt_l_w, pl_size))

    tbl_insert(pkt_w, msgname)
    tbl_insert(pkt_w, str_sub(msgdata, 1, send_size))

    -- send table directly, no need to concat
    s:send(pkt_w)
    sent = sent + send_size

    -- more frame pages?
    send_size_max = PER_FRAME_PAGE_SIZE_MAX - SIZE_OF_FRAME_PAGE_LEADING

    while 0 == self.frm_l_w.page_end do
        pkt_w = {}

        send_size = (remain_size <= send_size_max) and remain_size or send_size_max
        remain_size = remain_size - send_size

        -- frame leading init
        self.frm_l_w.page_start = 0
        self.frm_l_w.data_size = send_size
        self.frm_l_w.page_end = (remain_size <= 0) and 1 or 0

        tbl_insert(pkt_w, ffi.string(self.frm_l_w, SIZE_OF_FRAME_PAGE_LEADING))

        tbl_insert(pkt_w, str_sub(msgdata, sent + 1, sent + send_size))

        -- send table directly, no need to concat
        s:send(pkt_w)
        sent = sent + SIZE_OF_FRAME_PAGE_LEADING + send_size
    end

    return sent
end

-- packet type 2: inner packet
_P.new = function()
    local function _get_packet_leading_size(self)
        return SIZE_OF_TCP_INNER_PACKET_LEADING
    end

    local function _get_serial_no(self)
        return self.pkt_l_r.inner_serial_no
    end

    local function _read_packet_name(self, s)
        if self.pkt_l_r.inner_name_len <= 0 or self.pkt_l_r.inner_name_len > 1024 then
            return nil, "invalid inner_name_len"
        end

        local name, err = s:receive(self.pkt_l_r.inner_name_len)
        if not name then
            return nil, err
        end

        self.pkt_r.name = name
        return self.pkt_r.name
    end

    local _tfl = function(str)
        -- trim first letter
        return str_sub(str, 2)
    end

    --
    local function _send_packet(self, sock, msg, msgsn)
        local meta = getmetatable(msg)
        local msgname = _tfl(meta._descriptor.full_name)
        local msgdata = msg:SerializeToString()

        return self:write(sock, msgname, msgdata, msgsn)
    end

    local self = {
        --
        frm_l_r = frame_leading_t(),
        pkt_l_r = packet_leading_t(),
        pkt_r = {
            sn = 0,
            name = "",
            data = {} -- may has multiple pages
        },
        -- write
        frm_l_w = frame_leading_t(),
        pkt_l_w = packet_leading_t(),
        --
        get_packet_leading_size = _get_packet_leading_size,
        get_serial_no = _get_serial_no,
        read_packet_name = _read_packet_name,
        send_packet = _send_packet
    }

    return setmetatable(
        self,
        {
            __index = _P
        }
    )
end

return _P
