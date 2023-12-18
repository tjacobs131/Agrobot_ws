// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from agrobot_msgs:msg/SimCropData.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "agrobot_msgs/msg/detail/sim_crop_data__functions.h"
#include "agrobot_msgs/msg/detail/sim_crop_data__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace agrobot_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void SimCropData_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) agrobot_msgs::msg::SimCropData(_init);
}

void SimCropData_fini_function(void * message_memory)
{
  auto typed_message = static_cast<agrobot_msgs::msg::SimCropData *>(message_memory);
  typed_message->~SimCropData();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember SimCropData_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agrobot_msgs::msg::SimCropData, structure_needs_at_least_one_member),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers SimCropData_message_members = {
  "agrobot_msgs::msg",  // message namespace
  "SimCropData",  // message name
  1,  // number of fields
  sizeof(agrobot_msgs::msg::SimCropData),
  SimCropData_message_member_array,  // message members
  SimCropData_init_function,  // function to initialize message memory (memory has to be allocated)
  SimCropData_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t SimCropData_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &SimCropData_message_members,
  get_message_typesupport_handle_function,
  &agrobot_msgs__msg__SimCropData__get_type_hash,
  &agrobot_msgs__msg__SimCropData__get_type_description,
  &agrobot_msgs__msg__SimCropData__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace agrobot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agrobot_msgs::msg::SimCropData>()
{
  return &::agrobot_msgs::msg::rosidl_typesupport_introspection_cpp::SimCropData_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agrobot_msgs, msg, SimCropData)() {
  return &::agrobot_msgs::msg::rosidl_typesupport_introspection_cpp::SimCropData_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
