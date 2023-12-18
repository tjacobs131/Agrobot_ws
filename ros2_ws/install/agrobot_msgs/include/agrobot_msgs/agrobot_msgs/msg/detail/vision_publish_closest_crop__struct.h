// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from agrobot_msgs:msg/VisionPublishClosestCrop.idl
// generated code does not contain a copyright notice

#ifndef AGROBOT_MSGS__MSG__DETAIL__VISION_PUBLISH_CLOSEST_CROP__STRUCT_H_
#define AGROBOT_MSGS__MSG__DETAIL__VISION_PUBLISH_CLOSEST_CROP__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'crop_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/VisionPublishClosestCrop in the package agrobot_msgs.
typedef struct agrobot_msgs__msg__VisionPublishClosestCrop
{
  rosidl_runtime_c__String crop_type;
  int64_t crop_x;
  int64_t crop_y;
} agrobot_msgs__msg__VisionPublishClosestCrop;

// Struct for a sequence of agrobot_msgs__msg__VisionPublishClosestCrop.
typedef struct agrobot_msgs__msg__VisionPublishClosestCrop__Sequence
{
  agrobot_msgs__msg__VisionPublishClosestCrop * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agrobot_msgs__msg__VisionPublishClosestCrop__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AGROBOT_MSGS__MSG__DETAIL__VISION_PUBLISH_CLOSEST_CROP__STRUCT_H_
