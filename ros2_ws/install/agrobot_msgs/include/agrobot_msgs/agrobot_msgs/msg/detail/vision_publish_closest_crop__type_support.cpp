// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from agrobot_msgs:msg/VisionPublishClosestCrop.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "agrobot_msgs/msg/detail/vision_publish_closest_crop__functions.h"
#include "agrobot_msgs/msg/detail/vision_publish_closest_crop__struct.hpp"
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

void VisionPublishClosestCrop_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) agrobot_msgs::msg::VisionPublishClosestCrop(_init);
}

void VisionPublishClosestCrop_fini_function(void * message_memory)
{
  auto typed_message = static_cast<agrobot_msgs::msg::VisionPublishClosestCrop *>(message_memory);
  typed_message->~VisionPublishClosestCrop();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VisionPublishClosestCrop_message_member_array[3] = {
  {
    "crop_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agrobot_msgs::msg::VisionPublishClosestCrop, crop_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "crop_x",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agrobot_msgs::msg::VisionPublishClosestCrop, crop_x),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "crop_y",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agrobot_msgs::msg::VisionPublishClosestCrop, crop_y),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VisionPublishClosestCrop_message_members = {
  "agrobot_msgs::msg",  // message namespace
  "VisionPublishClosestCrop",  // message name
  3,  // number of fields
  sizeof(agrobot_msgs::msg::VisionPublishClosestCrop),
  VisionPublishClosestCrop_message_member_array,  // message members
  VisionPublishClosestCrop_init_function,  // function to initialize message memory (memory has to be allocated)
  VisionPublishClosestCrop_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VisionPublishClosestCrop_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VisionPublishClosestCrop_message_members,
  get_message_typesupport_handle_function,
  &agrobot_msgs__msg__VisionPublishClosestCrop__get_type_hash,
  &agrobot_msgs__msg__VisionPublishClosestCrop__get_type_description,
  &agrobot_msgs__msg__VisionPublishClosestCrop__get_type_description_sources,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace agrobot_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<agrobot_msgs::msg::VisionPublishClosestCrop>()
{
  return &::agrobot_msgs::msg::rosidl_typesupport_introspection_cpp::VisionPublishClosestCrop_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, agrobot_msgs, msg, VisionPublishClosestCrop)() {
  return &::agrobot_msgs::msg::rosidl_typesupport_introspection_cpp::VisionPublishClosestCrop_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
