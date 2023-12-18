// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from agrobot_msgs:msg/SimCropData.idl
// generated code does not contain a copyright notice

#ifndef AGROBOT_MSGS__MSG__DETAIL__SIM_CROP_DATA__STRUCT_H_
#define AGROBOT_MSGS__MSG__DETAIL__SIM_CROP_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

/// Struct defined in msg/SimCropData in the package agrobot_msgs.
typedef struct agrobot_msgs__msg__SimCropData
{
  uint8_t structure_needs_at_least_one_member;
} agrobot_msgs__msg__SimCropData;

// Struct for a sequence of agrobot_msgs__msg__SimCropData.
typedef struct agrobot_msgs__msg__SimCropData__Sequence
{
  agrobot_msgs__msg__SimCropData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agrobot_msgs__msg__SimCropData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AGROBOT_MSGS__MSG__DETAIL__SIM_CROP_DATA__STRUCT_H_
