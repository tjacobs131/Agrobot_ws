// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from agrobot_msgs:msg/VisionPublishClosestCrop.idl
// generated code does not contain a copyright notice
#include "agrobot_msgs/msg/detail/vision_publish_closest_crop__rosidl_typesupport_fastrtps_cpp.hpp"
#include "agrobot_msgs/msg/detail/vision_publish_closest_crop__functions.h"
#include "agrobot_msgs/msg/detail/vision_publish_closest_crop__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: crop_type
  cdr << ros_message.crop_type;
  // Member: crop_x
  cdr << ros_message.crop_x;
  // Member: crop_y
  cdr << ros_message.crop_y;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agrobot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  agrobot_msgs::msg::VisionPublishClosestCrop & ros_message)
{
  // Member: crop_type
  cdr >> ros_message.crop_type;

  // Member: crop_x
  cdr >> ros_message.crop_x;

  // Member: crop_y
  cdr >> ros_message.crop_y;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agrobot_msgs
get_serialized_size(
  const agrobot_msgs::msg::VisionPublishClosestCrop & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: crop_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.crop_type.size() + 1);
  // Member: crop_x
  {
    size_t item_size = sizeof(ros_message.crop_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crop_y
  {
    size_t item_size = sizeof(ros_message.crop_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agrobot_msgs
max_serialized_size_VisionPublishClosestCrop(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: crop_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: crop_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: crop_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _VisionPublishClosestCrop__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const agrobot_msgs::msg::VisionPublishClosestCrop *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VisionPublishClosestCrop__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<agrobot_msgs::msg::VisionPublishClosestCrop *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VisionPublishClosestCrop__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const agrobot_msgs::msg::VisionPublishClosestCrop *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VisionPublishClosestCrop__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VisionPublishClosestCrop(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VisionPublishClosestCrop__callbacks = {
  "agrobot_msgs::msg",
  "VisionPublishClosestCrop",
  _VisionPublishClosestCrop__cdr_serialize,
  _VisionPublishClosestCrop__cdr_deserialize,
  _VisionPublishClosestCrop__get_serialized_size,
  _VisionPublishClosestCrop__max_serialized_size
};

static rosidl_message_type_support_t _VisionPublishClosestCrop__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VisionPublishClosestCrop__callbacks,
  get_message_typesupport_handle_function,
  &agrobot_msgs__msg__VisionPublishClosestCrop__get_type_hash,
  &agrobot_msgs__msg__VisionPublishClosestCrop__get_type_description,
  &agrobot_msgs__msg__VisionPublishClosestCrop__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace agrobot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_agrobot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<agrobot_msgs::msg::VisionPublishClosestCrop>()
{
  return &agrobot_msgs::msg::typesupport_fastrtps_cpp::_VisionPublishClosestCrop__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, agrobot_msgs, msg, VisionPublishClosestCrop)() {
  return &agrobot_msgs::msg::typesupport_fastrtps_cpp::_VisionPublishClosestCrop__handle;
}

#ifdef __cplusplus
}
#endif
