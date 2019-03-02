-- Generated By protoc-gen-lua Do not Edit
local protobuf = require "protobuf"
local _M = {}
_G.Manual_pb = _M


local localTable = {}
_M.MANUAL_META = protobuf.Descriptor()
localTable.MANUAL_TYPEID_FIELD = protobuf.FieldDescriptor()
localTable.MANUAL_OPTIME_FIELD = protobuf.FieldDescriptor()
_M.USERMANUALSERVICE_META = protobuf.Descriptor()
_M.USERMANUALSERVICE_USERMANUALREQUEST_META = protobuf.Descriptor()
localTable.USERMANUALSERVICE_USERMANUALREQUEST_CMD_FIELD = protobuf.FieldDescriptor()
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPE_FIELD = protobuf.FieldDescriptor()
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPEID_FIELD = protobuf.FieldDescriptor()
_M.USERMANUALSERVICE_USERMANUALRESPONSE_META = protobuf.Descriptor()
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_RESULT_FIELD = protobuf.FieldDescriptor()
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_CUSTOMER_FIELD = protobuf.FieldDescriptor()
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_FACILITY_FIELD = protobuf.FieldDescriptor()
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_EQUIP_FIELD = protobuf.FieldDescriptor()
localTable.USERMANUALSERVICE_MANUAL_CMD = protobuf.EnumDescriptor()
localTable.USERMANUALSERVICE_MANUAL_CMD_QUERY_ENUM = protobuf.EnumValueDescriptor()
_M.E_USERMANUALSERVICE_MANUAL_CMD_QUERY = 1
localTable.USERMANUALSERVICE_MANUAL_CMD_ADD_ENUM = protobuf.EnumValueDescriptor()
_M.E_USERMANUALSERVICE_MANUAL_CMD_ADD = 2
_M.E_USERMANUALSERVICE_MANUAL_CMD_MAX = 2

localTable.USERMANUALSERVICE_REQ_FIELD = protobuf.FieldDescriptor()
localTable.USERMANUALSERVICE_RESP_FIELD = protobuf.FieldDescriptor()


localTable.MANUAL_TYPEID_FIELD.name = "typeid"
localTable.MANUAL_TYPEID_FIELD.full_name = ".sg.Manual.typeid"
localTable.MANUAL_TYPEID_FIELD.number = 2
localTable.MANUAL_TYPEID_FIELD.index = 0
localTable.MANUAL_TYPEID_FIELD.label = 2
localTable.MANUAL_TYPEID_FIELD.has_default_value = false
localTable.MANUAL_TYPEID_FIELD.default_value = 0
localTable.MANUAL_TYPEID_FIELD.type = 5
localTable.MANUAL_TYPEID_FIELD.cpp_type = 1

localTable.MANUAL_OPTIME_FIELD.name = "optime"
localTable.MANUAL_OPTIME_FIELD.full_name = ".sg.Manual.optime"
localTable.MANUAL_OPTIME_FIELD.number = 3
localTable.MANUAL_OPTIME_FIELD.index = 1
localTable.MANUAL_OPTIME_FIELD.label = 2
localTable.MANUAL_OPTIME_FIELD.has_default_value = false
localTable.MANUAL_OPTIME_FIELD.default_value = 0
localTable.MANUAL_OPTIME_FIELD.type = 16
localTable.MANUAL_OPTIME_FIELD.cpp_type = 2

_M.MANUAL_META.name = "Manual"
_M.MANUAL_META.full_name = ".sg.Manual"
_M.MANUAL_META.nested_types = {}
_M.MANUAL_META.enum_types = {}
_M.MANUAL_META.fields = {localTable.MANUAL_TYPEID_FIELD, localTable.MANUAL_OPTIME_FIELD}
_M.MANUAL_META.is_extendable = false
_M.MANUAL_META.extensions = {}
localTable.USERMANUALSERVICE_USERMANUALREQUEST_CMD_FIELD.name = "cmd"
localTable.USERMANUALSERVICE_USERMANUALREQUEST_CMD_FIELD.full_name = ".sg.UserManualService.UserManualRequest.cmd"
localTable.USERMANUALSERVICE_USERMANUALREQUEST_CMD_FIELD.number = 1
localTable.USERMANUALSERVICE_USERMANUALREQUEST_CMD_FIELD.index = 0
localTable.USERMANUALSERVICE_USERMANUALREQUEST_CMD_FIELD.label = 2
localTable.USERMANUALSERVICE_USERMANUALREQUEST_CMD_FIELD.has_default_value = false
localTable.USERMANUALSERVICE_USERMANUALREQUEST_CMD_FIELD.default_value = nil
localTable.USERMANUALSERVICE_USERMANUALREQUEST_CMD_FIELD.enum_type = localTable.USERMANUALSERVICE_MANUAL_CMD
localTable.USERMANUALSERVICE_USERMANUALREQUEST_CMD_FIELD.type = 14
localTable.USERMANUALSERVICE_USERMANUALREQUEST_CMD_FIELD.cpp_type = 8

localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPE_FIELD.name = "add_type"
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPE_FIELD.full_name = ".sg.UserManualService.UserManualRequest.add_type"
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPE_FIELD.number = 2
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPE_FIELD.index = 1
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPE_FIELD.label = 1
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPE_FIELD.has_default_value = false
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPE_FIELD.default_value = 0
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPE_FIELD.type = 5
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPE_FIELD.cpp_type = 1

localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPEID_FIELD.name = "add_typeid"
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPEID_FIELD.full_name = ".sg.UserManualService.UserManualRequest.add_typeid"
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPEID_FIELD.number = 3
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPEID_FIELD.index = 2
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPEID_FIELD.label = 1
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPEID_FIELD.has_default_value = false
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPEID_FIELD.default_value = 0
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPEID_FIELD.type = 5
localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPEID_FIELD.cpp_type = 1

_M.USERMANUALSERVICE_USERMANUALREQUEST_META.name = "UserManualRequest"
_M.USERMANUALSERVICE_USERMANUALREQUEST_META.full_name = ".sg.UserManualService.UserManualRequest"
_M.USERMANUALSERVICE_USERMANUALREQUEST_META.nested_types = {}
_M.USERMANUALSERVICE_USERMANUALREQUEST_META.enum_types = {}
_M.USERMANUALSERVICE_USERMANUALREQUEST_META.fields = {localTable.USERMANUALSERVICE_USERMANUALREQUEST_CMD_FIELD, localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPE_FIELD, localTable.USERMANUALSERVICE_USERMANUALREQUEST_ADD_TYPEID_FIELD}
_M.USERMANUALSERVICE_USERMANUALREQUEST_META.is_extendable = false
_M.USERMANUALSERVICE_USERMANUALREQUEST_META.extensions = {}
_M.USERMANUALSERVICE_USERMANUALREQUEST_META.containing_type = _M.USERMANUALSERVICE_META
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_RESULT_FIELD.name = "result"
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_RESULT_FIELD.full_name = ".sg.UserManualService.UserManualResponse.result"
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_RESULT_FIELD.number = 1
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_RESULT_FIELD.index = 0
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_RESULT_FIELD.label = 2
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_RESULT_FIELD.has_default_value = false
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_RESULT_FIELD.default_value = 0
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_RESULT_FIELD.type = 5
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_RESULT_FIELD.cpp_type = 1

localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_CUSTOMER_FIELD.name = "manual_customer"
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_CUSTOMER_FIELD.full_name = ".sg.UserManualService.UserManualResponse.manual_customer"
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_CUSTOMER_FIELD.number = 2
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_CUSTOMER_FIELD.index = 1
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_CUSTOMER_FIELD.label = 3
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_CUSTOMER_FIELD.has_default_value = false
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_CUSTOMER_FIELD.default_value = {}
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_CUSTOMER_FIELD.message_type = _M.MANUAL_META
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_CUSTOMER_FIELD.type = 11
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_CUSTOMER_FIELD.cpp_type = 10

localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_FACILITY_FIELD.name = "manual_facility"
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_FACILITY_FIELD.full_name = ".sg.UserManualService.UserManualResponse.manual_facility"
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_FACILITY_FIELD.number = 3
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_FACILITY_FIELD.index = 2
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_FACILITY_FIELD.label = 3
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_FACILITY_FIELD.has_default_value = false
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_FACILITY_FIELD.default_value = {}
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_FACILITY_FIELD.message_type = _M.MANUAL_META
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_FACILITY_FIELD.type = 11
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_FACILITY_FIELD.cpp_type = 10

localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_EQUIP_FIELD.name = "manual_equip"
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_EQUIP_FIELD.full_name = ".sg.UserManualService.UserManualResponse.manual_equip"
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_EQUIP_FIELD.number = 4
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_EQUIP_FIELD.index = 3
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_EQUIP_FIELD.label = 3
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_EQUIP_FIELD.has_default_value = false
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_EQUIP_FIELD.default_value = {}
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_EQUIP_FIELD.message_type = _M.MANUAL_META
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_EQUIP_FIELD.type = 11
localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_EQUIP_FIELD.cpp_type = 10

_M.USERMANUALSERVICE_USERMANUALRESPONSE_META.name = "UserManualResponse"
_M.USERMANUALSERVICE_USERMANUALRESPONSE_META.full_name = ".sg.UserManualService.UserManualResponse"
_M.USERMANUALSERVICE_USERMANUALRESPONSE_META.nested_types = {}
_M.USERMANUALSERVICE_USERMANUALRESPONSE_META.enum_types = {}
_M.USERMANUALSERVICE_USERMANUALRESPONSE_META.fields = {localTable.USERMANUALSERVICE_USERMANUALRESPONSE_RESULT_FIELD, localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_CUSTOMER_FIELD, localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_FACILITY_FIELD, localTable.USERMANUALSERVICE_USERMANUALRESPONSE_MANUAL_EQUIP_FIELD}
_M.USERMANUALSERVICE_USERMANUALRESPONSE_META.is_extendable = false
_M.USERMANUALSERVICE_USERMANUALRESPONSE_META.extensions = {}
_M.USERMANUALSERVICE_USERMANUALRESPONSE_META.containing_type = _M.USERMANUALSERVICE_META
localTable.USERMANUALSERVICE_MANUAL_CMD_QUERY_ENUM.name = "QUERY"
localTable.USERMANUALSERVICE_MANUAL_CMD_QUERY_ENUM.index = 0
localTable.USERMANUALSERVICE_MANUAL_CMD_QUERY_ENUM.number = 1
localTable.USERMANUALSERVICE_MANUAL_CMD_ADD_ENUM.name = "ADD"
localTable.USERMANUALSERVICE_MANUAL_CMD_ADD_ENUM.index = 1
localTable.USERMANUALSERVICE_MANUAL_CMD_ADD_ENUM.number = 2
localTable.USERMANUALSERVICE_MANUAL_CMD.name = "MANUAL_CMD"
localTable.USERMANUALSERVICE_MANUAL_CMD.full_name = ".sg.UserManualService.MANUAL_CMD"
localTable.USERMANUALSERVICE_MANUAL_CMD.values = {localTable.USERMANUALSERVICE_MANUAL_CMD_QUERY_ENUM,localTable.USERMANUALSERVICE_MANUAL_CMD_ADD_ENUM}
localTable.USERMANUALSERVICE_REQ_FIELD.name = "req"
localTable.USERMANUALSERVICE_REQ_FIELD.full_name = ".sg.UserManualService.req"
localTable.USERMANUALSERVICE_REQ_FIELD.number = 1
localTable.USERMANUALSERVICE_REQ_FIELD.index = 0
localTable.USERMANUALSERVICE_REQ_FIELD.label = 1
localTable.USERMANUALSERVICE_REQ_FIELD.has_default_value = false
localTable.USERMANUALSERVICE_REQ_FIELD.default_value = nil
localTable.USERMANUALSERVICE_REQ_FIELD.message_type = _M.USERMANUALSERVICE_USERMANUALREQUEST_META
localTable.USERMANUALSERVICE_REQ_FIELD.type = 11
localTable.USERMANUALSERVICE_REQ_FIELD.cpp_type = 10

localTable.USERMANUALSERVICE_RESP_FIELD.name = "resp"
localTable.USERMANUALSERVICE_RESP_FIELD.full_name = ".sg.UserManualService.resp"
localTable.USERMANUALSERVICE_RESP_FIELD.number = 2
localTable.USERMANUALSERVICE_RESP_FIELD.index = 1
localTable.USERMANUALSERVICE_RESP_FIELD.label = 1
localTable.USERMANUALSERVICE_RESP_FIELD.has_default_value = false
localTable.USERMANUALSERVICE_RESP_FIELD.default_value = nil
localTable.USERMANUALSERVICE_RESP_FIELD.message_type = _M.USERMANUALSERVICE_USERMANUALRESPONSE_META
localTable.USERMANUALSERVICE_RESP_FIELD.type = 11
localTable.USERMANUALSERVICE_RESP_FIELD.cpp_type = 10

_M.USERMANUALSERVICE_META.name = "UserManualService"
_M.USERMANUALSERVICE_META.full_name = ".sg.UserManualService"
_M.USERMANUALSERVICE_META.nested_types = {USERMANUALSERVICE_USERMANUALREQUEST, USERMANUALSERVICE_USERMANUALRESPONSE}
_M.USERMANUALSERVICE_META.enum_types = {localTable.USERMANUALSERVICE_MANUAL_CMD}
_M.USERMANUALSERVICE_META.fields = {localTable.USERMANUALSERVICE_REQ_FIELD, localTable.USERMANUALSERVICE_RESP_FIELD}
_M.USERMANUALSERVICE_META.is_extendable = false
_M.USERMANUALSERVICE_META.extensions = {}

_M.Manual = protobuf.Message(_M.MANUAL_META)
_M.UserManualService = protobuf.Message(_M.USERMANUALSERVICE_META)
_M.UserManualService.UserManualRequest = protobuf.Message(_M.USERMANUALSERVICE_USERMANUALREQUEST_META)
_M.UserManualService.UserManualResponse = protobuf.Message(_M.USERMANUALSERVICE_USERMANUALRESPONSE_META)

return _M