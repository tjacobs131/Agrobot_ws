// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from agrobot_msgs:msg/SimCropData.idl
// generated code does not contain a copyright notice
#include "agrobot_msgs/msg/detail/sim_crop_data__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "agrobot_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "agrobot_msgs/msg/detail/sim_crop_data__struct.h"
#include "agrobot_msgs/msg/detail/sim_crop_data__functions.h"
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


// forward declare type support functions


using _SimCropData__ros_msg_type = agrobot_msgs__msg__SimCropData;

static bool _SimCropData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _SimCropData__ros_msg_type * ros_message = static_cast<const _SimCropData__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr << ros_message->structure_needs_at_least_one_member;
  }

  return true;
}

static bool _SimCropData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _SimCropData__ros_msg_type * ros_message = static_cast<_SimCropData__ros_msg_type *>(untyped_ros_message);
  // Field name: structure_needs_at_least_one_member
  {
    cdr >> ros_message->structure_needs_at_least_one_member;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_agrobot_msgs
size_t get_serialized_size_agrobot_msgs__msg__SimCropData(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _SimCropData__ros_msg_type * ros_message = static_cast<const _SimCropData__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message->structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _SimCropData__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_agrobot_msgs__msg__SimCropData(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_agrobot_msgs
size_t max_serialized_size_agrobot_msgs__msg__SimCropData(
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

  // member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _SimCropData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_agrobot_msgs__msg__SimCropData(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_SimCropData = {
  "agrobot_msgs::msg",
  "SimCropData",
  _SimCropData__cdr_serialize,
  _SimCropData__cdr_deserialize,
  _SimCropData__get_serialized_size,
  _SimCropData__max_serialized_size
};

static rosidl_message_type_support_t _SimCropData__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_SimCropData,
  get_message_typesupport_handle_function,
  &agrobot_msgs__msg__SimCropData__get_type_hash,
  &agrobot_msgs__msg__SimCropData__get_type_description,
  &agrobot_msgs__msg__SimCropData__get_type_description_sources,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, agrobot_msgs, msg, SimCropData)() {
  return &_SimCropData__type_support;
}

#if defined(__cplusplus)
}
#endif
