// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from agrobot_msgs:msg/SimCropData.idl
// generated code does not contain a copyright notice

#include "agrobot_msgs/msg/detail/sim_crop_data__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_agrobot_msgs
const rosidl_type_hash_t *
agrobot_msgs__msg__SimCropData__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc8, 0xed, 0x02, 0x31, 0x04, 0xfc, 0xeb, 0x73,
      0xf0, 0xcb, 0x55, 0xfc, 0xf8, 0x0f, 0x8e, 0x4a,
      0x78, 0x4d, 0x2a, 0x6d, 0xf2, 0xd9, 0xfb, 0x95,
      0x9c, 0x1e, 0x87, 0xbe, 0xa0, 0x6e, 0xb3, 0xf1,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char agrobot_msgs__msg__SimCropData__TYPE_NAME[] = "agrobot_msgs/msg/SimCropData";

// Define type names, field names, and default values
static char agrobot_msgs__msg__SimCropData__FIELD_NAME__structure_needs_at_least_one_member[] = "structure_needs_at_least_one_member";

static rosidl_runtime_c__type_description__Field agrobot_msgs__msg__SimCropData__FIELDS[] = {
  {
    {agrobot_msgs__msg__SimCropData__FIELD_NAME__structure_needs_at_least_one_member, 35, 35},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_UINT8,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
agrobot_msgs__msg__SimCropData__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {agrobot_msgs__msg__SimCropData__TYPE_NAME, 28, 28},
      {agrobot_msgs__msg__SimCropData__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}


static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
agrobot_msgs__msg__SimCropData__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {agrobot_msgs__msg__SimCropData__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
agrobot_msgs__msg__SimCropData__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *agrobot_msgs__msg__SimCropData__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
