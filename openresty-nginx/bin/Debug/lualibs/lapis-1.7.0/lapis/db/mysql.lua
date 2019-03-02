local type, tostring, pairs, select
do
  local _obj_0 = _G
  type, tostring, pairs, select = _obj_0.type, _obj_0.tostring, _obj_0.pairs, _obj_0.select
end
local concat
concat = table.concat
local FALSE, NULL, TRUE, build_helpers, format_date, is_raw, raw, is_list, list, is_encodable
do
  local _obj_0 = require("lapis.db.base")
  FALSE, NULL, TRUE, build_helpers, format_date, is_raw, raw, is_list, list, is_encodable = _obj_0.FALSE, _obj_0.NULL, _obj_0.TRUE, _obj_0.build_helpers, _obj_0.format_date, _obj_0.is_raw, _obj_0.raw, _obj_0.is_list, _obj_0.list, _obj_0.is_encodable
end
local conn, logger
local BACKENDS, set_backend, set_raw_query, get_raw_query, escape_literal, escape_identifier, init_logger, init_db, raw_query, interpolate_query, encode_values, encode_assigns, encode_clause, append_all, add_cond, query, _select, _insert, _update, _delete, _truncate
BACKENDS = {
  raw = function(fn)
    return fn
  end,
  luasql = function()
    local config = require("lapis.config").get()
    local mysql_config = assert(config.mysql, "missing mysql configuration")
    local luasql = require("resty.mysql").mysql()
    local conn_opts = {
      mysql_config.database,
      mysql_config.user,
      mysql_config.password
    }
    if mysql_config.host then
      table.insert(conn_opts, mysql_config.host)
      if mysql_config.port then
        table.insert(conn_opts, mysql_config.port)
      end
    end
    conn = assert(luasql:connect(unpack(conn_opts)))
    return function(q, options)
      if logger then
        logger.query(q)
      end
      local cur = assert(conn:execute(q))
      local has_rows = type(cur) ~= "number"
      local result = {
        affected_rows = has_rows and cur:numrows() or cur,
        last_auto_id = conn:getlastautoid()
      }
      if has_rows then
        local colnames = cur:getcolnames()
        local coltypes = cur:getcoltypes()
        assert(#colnames == #coltypes)
        local name2type = { }
        for i = 1, #colnames do
          local colname = colnames[i]
          local coltype = coltypes[i]
          name2type[colname] = coltype
        end
        while true do
          do
            local row = cur:fetch({ }, "a")
            if row then
              for colname, value in pairs(row) do
                local coltype = name2type[colname]
                if coltype == 'number(1)' then
                  if value == '1' then
                    value = true
                  else
                    value = false
                  end
                elseif coltype:match('number') then
                  value = tonumber(value)
                end
                row[colname] = value
              end
              table.insert(result, row)
            else
              break
            end
          end
        end
      end
      return result
    end
  end,
  resty_mysql = function()
    local after_dispatch, increment_perf
    do
      local _obj_0 = require("lapis.nginx.context")
      after_dispatch, increment_perf = _obj_0.after_dispatch, _obj_0.increment_perf
    end
    local mysql = require("resty.mysql")
    return function(q, options)
      assert(type(options) == "table", "wrong options type: it must be a table!")
      if logger then
        logger.query(q)
      end
      ngx.ctx.resty_mysql_db = ngx.ctx.resty_mysql_db or {}
      options.pool = options.pool or options.user .. ":" .. options.database .. ":" .. options.host .. ":" .. options.port
      local db = ngx and ngx.ctx.resty_mysql_db[options.pool]
      if not (db) then
        local ok, err, errcode, sqlstate
        db, err = assert(mysql:new())
        db:set_timeout(timeout)
        ok, err, errcode, sqlstate = db:connect(options)
        assert(ok, err)
        if ngx then
          ngx.ctx.resty_mysql_db[options.pool] = db
          after_dispatch(function()
            return db:set_keepalive(max_idle_timeout, pool_size)
          end)
        end
      end
      local res, err, errcode, sqlstate = assert(db:query(q))
      local result
      if err == 'again' then
        result = {
          res
        }
        while err == 'again' do
          res, err, errcode, sqlstate = assert(db:read_result())
          table.insert(result, res)
        end
      else
        result = res
      end
      return result
    end
  end
}
set_backend = function(name, ...)
  local backend = BACKENDS[name]
  if not (backend) then
    error("Failed to find MySQL backend: " .. tostring(name))
  end
  raw_query = backend(...)
end
set_raw_query = function(fn)
  raw_query = fn
end
get_raw_query = function()
  return raw_query
end
escape_literal = function(val)
  local _exp_0 = type(val)
  if "number" == _exp_0 then
    return tostring(val)
  elseif "string" == _exp_0 then
    if conn then
      return "'" .. tostring(conn:escape(val)) .. "'"
    else
      if ngx then
        return ngx.quote_sql_str(val)
      else
        return escape_literal(val)
      end
    end
  elseif "boolean" == _exp_0 then
    return val and "TRUE" or "FALSE"
  elseif "table" == _exp_0 then
    if val == NULL then
      return "NULL"
    end
    if is_list(val) then
      local escaped_items
      do
        local _accum_0 = { }
        local _len_0 = 1
        local _list_0 = val[1]
        for _index_0 = 1, #_list_0 do
          local item = _list_0[_index_0]
          _accum_0[_len_0] = escape_literal(item)
          _len_0 = _len_0 + 1
        end
        escaped_items = _accum_0
      end
      assert(escaped_items[1], "can't flatten empty list")
      return "(" .. tostring(concat(escaped_items, ", ")) .. ")"
    end
    if is_raw(val) then
      return val[1]
    end
    error("unknown table passed to `escape_literal`")
  end
  return error("don't know how to escape value: " .. tostring(val))
end
escape_identifier = function(ident)
  if is_raw(ident) then
    return ident[1]
  end
  ident = tostring(ident)
  return '`' .. (ident:gsub('`', '``')) .. '`'
end
init_logger = function()
  local config = require("lapis.config").get()
  if ngx or os.getenv("LAPIS_SHOW_QUERIES") or config.show_queries then
    logger = require("lapis.logging")
  end
end
init_db = function()
  local config = require("lapis.config").get()
  local backend = config.mysql and config.mysql.backend
  if not (backend) then
    if ngx then
      backend = "resty_mysql"
    else
      backend = "luasql"
    end
  end
  return set_backend(backend)
end
interpolate_query, encode_values, encode_assigns, encode_clause = build_helpers(escape_literal, escape_identifier)
append_all = function(t, ...)
  for i = 1, select("#", ...) do
    t[#t + 1] = select(i, ...)
  end
end
add_cond = function(buffer, cond, ...)
  append_all(buffer, " WHERE ")
  local _exp_0 = type(cond)
  if "table" == _exp_0 then
    return encode_clause(cond, buffer)
  elseif "string" == _exp_0 then
    return append_all(buffer, interpolate_query(cond, ...))
  end
end
query = function(options, str, ...)
  if select("#", ...) > 0 then
    str = interpolate_query(str, ...)
  end
  return raw_query(str, options)
end
_select = function(options, str, ...)
  return query(options, "SELECT " .. str, ...)
end
_insert = function(options, tbl, values, ...)
  local buff = {
    "INSERT INTO ",
    escape_identifier(tbl),
    " "
  }
  encode_values(values, buff)
  return raw_query(concat(buff), options)
end
_update = function(options, table, values, cond, ...)
  local buff = {
    "UPDATE ",
    escape_identifier(table),
    " SET "
  }
  encode_assigns(values, buff)
  if cond then
    add_cond(buff, cond, ...)
  end
  return raw_query(concat(buff), options)
end
_delete = function(options, table, cond, ...)
  local buff = {
    "DELETE FROM ",
    escape_identifier(table)
  }
  if cond then
    add_cond(buff, cond, ...)
  end
  return raw_query(concat(buff), options)
end
_truncate = function(options, table)
  return raw_query("TRUNCATE " .. escape_identifier(table), options)
end

-- init 
local _init = function()
  init_logger()
  return init_db()
end
_init()

return {
  raw = raw,
  is_raw = is_raw,
  NULL = NULL,
  TRUE = TRUE,
  FALSE = FALSE,
  list = list,
  is_list = is_list,
  is_encodable = is_encodable,
  encode_values = encode_values,
  encode_assigns = encode_assigns,
  encode_clause = encode_clause,
  interpolate_query = interpolate_query,
  query = query,
  escape_literal = escape_literal,
  escape_identifier = escape_identifier,
  format_date = format_date,
  init_logger = init_logger,
  set_backend = set_backend,
  set_raw_query = set_raw_query,
  get_raw_query = get_raw_query,
  select = _select,
  insert = _insert,
  update = _update,
  delete = _delete,
  truncate = _truncate,
}
