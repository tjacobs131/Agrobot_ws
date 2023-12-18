// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from agrobot_msgs:msg/SimCropData.idl
// generated code does not contain a copyright notice
#include "agrobot_msgs/msg/detail/sim_crop_data__rosidl_typesupport_fastrtps_cpp.hpp"
#include "agrobot_msgs/msg/detail/sim_crop_data__functions.h"
#include "agrobot_msgs/msg/detail/sim_crop_data__struct.hpp"

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
  const agrobot_msgs::msg::SimCropData & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: structure_needs_at_least_one_member
  cdr << ros_message.structure_needs_at_least_one_member;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agrobot_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  agrobot_msgs::msg::SimCropData & ros_message)
{
  // Member: structure_needs_at_least_one_member
  cdr >> ros_message.structure_needs_at_least_one_member;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agrobot_msgs
get_serialized_size(
  const agrobot_msgs::msg::SimCropData & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: structure_needs_at_least_one_member
  {
    size_t item_size = sizeof(ros_message.structure_needs_at_least_one_member);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_agrobot_msgs
max_serialized_size_SimCropData(
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


  // Member: structure_needs_at_least_one_member
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _SimCropData__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const agrobot_msgs::msg::SimCropData *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _SimCropData__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<agrobot_msgs::msg::SimCropData *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _SimCropData__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const agrobot_msgs::msg::SimCropData *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _SimCropData__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_SimCropData(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _SimCropData__callbacks = {
  "agrobot_msgs::msg",
  "SimCropData",
  _SimCropData__cdr_serialize,
  _SimCropData__cdr_deserialize,
  _SimCropData__get_serialized_size,
  _SimCropData__max_serialized_size
};

static rosidl_message_type_support_t _SimCropData__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_SimCropData__callbacks,
  get_message_typesupport_handle_function,
  &agrobot_msgs__msg__SimCropData__get_type_hash,
  &agrobot_msgs__msg__SimCropData__get_type_description,
  &agrobot_msgs__msg__SimCropData__get_type_description_sources,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace agrobot_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_agrobot_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<agrobot_msgs::msg::SimCropData>()
{
  return &agrobot_msgs::msg::typesupport_fastrtps_cpp::_SimCropData__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, agrobot_msgs, msg, SimCropData)() {
  return &agrobot_msgs::msg::typesupport_fastrtps_cpp::_SimCropData__handle;
}

#ifdef __cplusplus
}
#endif
