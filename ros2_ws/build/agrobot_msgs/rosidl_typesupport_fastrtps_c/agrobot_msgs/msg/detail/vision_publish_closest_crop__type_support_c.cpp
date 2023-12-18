// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from agrobot_msgs:msg/VisionPublishClosestCrop.idl
// generated code does not contain a copyright notice
#include "agrobot_msgs/msg/detail/vision_publish_closest_crop__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "agrobot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "agrobot_msgs/msg/detail/vision_publish_closest_crop__struct.h"
#include "agrobot_msgs/msg/detail/vision_publish_closest_crop__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // crop_type
#include "rosidl_runtime_c/string_functions.h"  // crop_type

// forward declare type support functions


using _VisionPublishClosestCrop__ros_msg_type = agrobot_msgs__msg__VisionPublishClosestCrop;

static bool _VisionPublishClosestCrop__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VisionPublishClosestCrop__ros_msg_type * ros_message = static_cast<const _VisionPublishClosestCrop__ros_msg_type *>(untyped_ros_message);
  // Field name: crop_type
  {
    const rosidl_runtime_c__String * str = &ros_message->crop_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: crop_x
  {
    cdr << ros_message->crop_x;
  }

  // Field name: crop_y
  {
    cdr << ros_message->crop_y;
  }

  return true;
}

static bool _VisionPublishClosestCrop__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VisionPublishClosestCrop__ros_msg_type * ros_message = static_cast<_VisionPublishClosestCrop__ros_msg_type *>(untyped_ros_message);
  // Field name: crop_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->crop_type.data) {
      rosidl_runtime_c__String__init(&ros_message->crop_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->crop_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'crop_type'\n");
      return false;
    }
  }

  // Field name: crop_x
  {
    cdr >> ros_message->crop_x;
  }

  // Field name: crop_y
  {
    cdr >> ros_message->crop_y;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_agrobot_msgs
size_t get_serialized_size_agrobot_msgs__msg__VisionPublishClosestCrop(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VisionPublishClosestCrop__ros_msg_type * ros_message = static_cast<const _VisionPublishClosestCrop__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name crop_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->crop_type.size + 1);
  // field.name crop_x
  {
    size_t item_size = sizeof(ros_message->crop_x);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name crop_y
  {
    size_t item_size = sizeof(ros_message->crop_y);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VisionPublishClosestCrop__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_agrobot_msgs__msg__VisionPublishClosestCrop(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_agrobot_msgs
size_t max_serialized_size_agrobot_msgs__msg__VisionPublishClosestCrop(
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

  // member: crop_type
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
  // member: crop_x
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: crop_y
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _VisionPublishClosestCrop__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_agrobot_msgs__msg__VisionPublishClosestCrop(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VisionPublishClosestCrop = {
  "agrobot_msgs::msg",
  "VisionPublishClosestCrop",
  _VisionPublishClosestCrop__cdr_serialize,
  _VisionPublishClosestCrop__cdr_deserialize,
  _VisionPublishClosestCrop__get_serialized_size,
  _VisionPublishClosestCrop__max_serialized_size
};

static rosidl_message_type_support_t _VisionPublishClosestCrop__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VisionPublishClosestCrop,
  get_message_typesupport_handle_function,
  &agrobot_msgs__msg__VisionPublishClosestCrop__get_type_hash,
  &agrobot_msgs__msg__VisionPublishClosestCrop__get_type_description,
  &agrobot_msgs__msg__VisionPublishClosestCrop__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, agrobot_msgs, msg, VisionPublishClosestCrop)() {
  return &_VisionPublishClosestCrop__type_support;
}

#if defined(__cplusplus)
}
#endif
