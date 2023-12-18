// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from agrobot_msgs:msg/VisionPublishClosestCrop.idl
// generated code does not contain a copyright notice

#include "agrobot_msgs/msg/detail/vision_publish_closest_crop__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_agrobot_msgs
const rosidl_type_hash_t *
agrobot_msgs__msg__VisionPublishClosestCrop__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb5, 0xb6, 0x12, 0xd8, 0x7d, 0x83, 0x99, 0x1c,
      0xa7, 0x84, 0x50, 0x32, 0x89, 0x6e, 0xc9, 0x0a,
      0xc2, 0x32, 0xad, 0xe2, 0x67, 0xff, 0x82, 0x72,
      0xc4, 0xe4, 0x07, 0xbf, 0xad, 0xa0, 0x8b, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char agrobot_msgs__msg__VisionPublishClosestCrop__TYPE_NAME[] = "agrobot_msgs/msg/VisionPublishClosestCrop";

// Define type names, field names, and default values
static char agrobot_msgs__msg__VisionPublishClosestCrop__FIELD_NAME__crop_type[] = "crop_type";
static char agrobot_msgs__msg__VisionPublishClosestCrop__FIELD_NAME__crop_x[] = "crop_x";
static char agrobot_msgs__msg__VisionPublishClosestCrop__FIELD_NAME__crop_y[] = "crop_y";

static rosidl_runtime_c__type_description__Field agrobot_msgs__msg__VisionPublishClosestCrop__FIELDS[] = {
  {
    {agrobot_msgs__msg__VisionPublishClosestCrop__FIELD_NAME__crop_type, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {agrobot_msgs__msg__VisionPublishClosestCrop__FIELD_NAME__crop_x, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {agrobot_msgs__msg__VisionPublishClosestCrop__FIELD_NAME__crop_y, 6, 6},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_INT64,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
agrobot_msgs__msg__VisionPublishClosestCrop__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {agrobot_msgs__msg__VisionPublishClosestCrop__TYPE_NAME, 41, 41},
      {agrobot_msgs__msg__VisionPublishClosestCrop__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string crop_type\n"
  "int64 crop_x\n"
  "int64 crop_y";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
agrobot_msgs__msg__VisionPublishClosestCrop__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {agrobot_msgs__msg__VisionPublishClosestCrop__TYPE_NAME, 41, 41},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 42, 42},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
agrobot_msgs__msg__VisionPublishClosestCrop__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *agrobot_msgs__msg__VisionPublishClosestCrop__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
