// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from agrobot_msgs:msg/VisionPublishClosestCrop.idl
// generated code does not contain a copyright notice

#ifndef AGROBOT_MSGS__MSG__DETAIL__VISION_PUBLISH_CLOSEST_CROP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define AGROBOT_MSGS__MSG__DETAIL__VISION_PUBLISH_CLOSEST_CROP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "agrobot_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "agrobot_msgs/msg/detail/vision_publish_closest_crop__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace agrobot_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agrobot_msgs
cdr_serialize(
  const agrobot_msgs::msg::VisionPublishClosestCrop & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agrobot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  agrobot_msgs::msg::VisionPublishClosestCrop & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agrobot_msgs
get_serialized_size(
  const agrobot_msgs::msg::VisionPublishClosestCrop & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agrobot_msgs
max_serialized_size_VisionPublishClosestCrop(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace agrobot_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agrobot_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, agrobot_msgs, msg, VisionPublishClosestCrop)();

#ifdef __cplusplus
}
#endif

#endif  // AGROBOT_MSGS__MSG__DETAIL__VISION_PUBLISH_CLOSEST_CROP__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
