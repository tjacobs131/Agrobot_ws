// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from agrobot_msgs:srv/SimCropLocation.idl
// generated code does not contain a copyright notice

#include "agrobot_msgs/srv/detail/sim_crop_location__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_agrobot_msgs
const rosidl_type_hash_t *
agrobot_msgs__srv__SimCropLocation__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xb8, 0xdb, 0x25, 0x5c, 0x71, 0xc4, 0x5a, 0xaf,
      0x1e, 0x59, 0x68, 0x51, 0x8d, 0x24, 0x67, 0xb0,
      0xef, 0x1f, 0x55, 0x7a, 0xb8, 0x62, 0x5b, 0x0e,
      0xdd, 0xc6, 0x68, 0x0a, 0x20, 0x23, 0xe8, 0xf8,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_agrobot_msgs
const rosidl_type_hash_t *
agrobot_msgs__srv__SimCropLocation_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x1a, 0xd0, 0x72, 0xa0, 0x0f, 0x09, 0x1a, 0xa4,
      0xf7, 0x27, 0x34, 0xba, 0x31, 0xe1, 0x1d, 0x64,
      0xb7, 0x38, 0xaf, 0x0b, 0x83, 0xb2, 0x36, 0x52,
      0xf7, 0xea, 0x59, 0x73, 0x8b, 0x74, 0x95, 0x4b,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_agrobot_msgs
const rosidl_type_hash_t *
agrobot_msgs__srv__SimCropLocation_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6c, 0x32, 0x63, 0x95, 0x4b, 0x2c, 0xf7, 0x6d,
      0x82, 0x54, 0xf1, 0x86, 0xff, 0x47, 0x70, 0x20,
      0x4e, 0xf5, 0x9a, 0x85, 0x81, 0x04, 0x85, 0x7a,
      0xfe, 0xaa, 0x75, 0xdd, 0x03, 0x87, 0xe5, 0xc5,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_agrobot_msgs
const rosidl_type_hash_t *
agrobot_msgs__srv__SimCropLocation_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf4, 0xfc, 0xb0, 0x23, 0x04, 0x91, 0x26, 0x2a,
      0x42, 0xc9, 0x84, 0xfe, 0xab, 0x3e, 0x39, 0x3d,
      0x13, 0x90, 0x53, 0x58, 0x38, 0x49, 0x88, 0x00,
      0xb2, 0xb4, 0xa3, 0xea, 0x8b, 0x8b, 0x32, 0xab,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char agrobot_msgs__srv__SimCropLocation__TYPE_NAME[] = "agrobot_msgs/srv/SimCropLocation";
static char agrobot_msgs__srv__SimCropLocation_Event__TYPE_NAME[] = "agrobot_msgs/srv/SimCropLocation_Event";
static char agrobot_msgs__srv__SimCropLocation_Request__TYPE_NAME[] = "agrobot_msgs/srv/SimCropLocation_Request";
static char agrobot_msgs__srv__SimCropLocation_Response__TYPE_NAME[] = "agrobot_msgs/srv/SimCropLocation_Response";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";

// Define type names, field names, and default values
static char agrobot_msgs__srv__SimCropLocation__FIELD_NAME__request_message[] = "request_message";
static char agrobot_msgs__srv__SimCropLocation__FIELD_NAME__response_message[] = "response_message";
static char agrobot_msgs__srv__SimCropLocation__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field agrobot_msgs__srv__SimCropLocation__FIELDS[] = {
  {
    {agrobot_msgs__srv__SimCropLocation__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {agrobot_msgs__srv__SimCropLocation_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {agrobot_msgs__srv__SimCropLocation__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {agrobot_msgs__srv__SimCropLocation_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
  {
    {agrobot_msgs__srv__SimCropLocation__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {agrobot_msgs__srv__SimCropLocation_Event__TYPE_NAME, 38, 38},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription agrobot_msgs__srv__SimCropLocation__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {agrobot_msgs__srv__SimCropLocation_Event__TYPE_NAME, 38, 38},
    {NULL, 0, 0},
  },
  {
    {agrobot_msgs__srv__SimCropLocation_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {agrobot_msgs__srv__SimCropLocation_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
agrobot_msgs__srv__SimCropLocation__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {agrobot_msgs__srv__SimCropLocation__TYPE_NAME, 32, 32},
      {agrobot_msgs__srv__SimCropLocation__FIELDS, 3, 3},
    },
    {agrobot_msgs__srv__SimCropLocation__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = agrobot_msgs__srv__SimCropLocation_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = agrobot_msgs__srv__SimCropLocation_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = agrobot_msgs__srv__SimCropLocation_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[4].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char agrobot_msgs__srv__SimCropLocation_Request__FIELD_NAME__object_id[] = "object_id";

static rosidl_runtime_c__type_description__Field agrobot_msgs__srv__SimCropLocation_Request__FIELDS[] = {
  {
    {agrobot_msgs__srv__SimCropLocation_Request__FIELD_NAME__object_id, 9, 9},
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
agrobot_msgs__srv__SimCropLocation_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {agrobot_msgs__srv__SimCropLocation_Request__TYPE_NAME, 40, 40},
      {agrobot_msgs__srv__SimCropLocation_Request__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char agrobot_msgs__srv__SimCropLocation_Response__FIELD_NAME__position[] = "position";

static rosidl_runtime_c__type_description__Field agrobot_msgs__srv__SimCropLocation_Response__FIELDS[] = {
  {
    {agrobot_msgs__srv__SimCropLocation_Response__FIELD_NAME__position, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_DOUBLE_UNBOUNDED_SEQUENCE,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
agrobot_msgs__srv__SimCropLocation_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {agrobot_msgs__srv__SimCropLocation_Response__TYPE_NAME, 41, 41},
      {agrobot_msgs__srv__SimCropLocation_Response__FIELDS, 1, 1},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char agrobot_msgs__srv__SimCropLocation_Event__FIELD_NAME__info[] = "info";
static char agrobot_msgs__srv__SimCropLocation_Event__FIELD_NAME__request[] = "request";
static char agrobot_msgs__srv__SimCropLocation_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field agrobot_msgs__srv__SimCropLocation_Event__FIELDS[] = {
  {
    {agrobot_msgs__srv__SimCropLocation_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {agrobot_msgs__srv__SimCropLocation_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {agrobot_msgs__srv__SimCropLocation_Request__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
  {
    {agrobot_msgs__srv__SimCropLocation_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {agrobot_msgs__srv__SimCropLocation_Response__TYPE_NAME, 41, 41},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription agrobot_msgs__srv__SimCropLocation_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {agrobot_msgs__srv__SimCropLocation_Request__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {agrobot_msgs__srv__SimCropLocation_Response__TYPE_NAME, 41, 41},
    {NULL, 0, 0},
  },
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
agrobot_msgs__srv__SimCropLocation_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {agrobot_msgs__srv__SimCropLocation_Event__TYPE_NAME, 38, 38},
      {agrobot_msgs__srv__SimCropLocation_Event__FIELDS, 3, 3},
    },
    {agrobot_msgs__srv__SimCropLocation_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    description.referenced_type_descriptions.data[0].fields = agrobot_msgs__srv__SimCropLocation_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[1].fields = agrobot_msgs__srv__SimCropLocation_Response__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[2].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[3].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "int64 object_id\n"
  "---\n"
  "float64[] position";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
agrobot_msgs__srv__SimCropLocation__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {agrobot_msgs__srv__SimCropLocation__TYPE_NAME, 32, 32},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 38, 38},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
agrobot_msgs__srv__SimCropLocation_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {agrobot_msgs__srv__SimCropLocation_Request__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
agrobot_msgs__srv__SimCropLocation_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {agrobot_msgs__srv__SimCropLocation_Response__TYPE_NAME, 41, 41},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
agrobot_msgs__srv__SimCropLocation_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {agrobot_msgs__srv__SimCropLocation_Event__TYPE_NAME, 38, 38},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
agrobot_msgs__srv__SimCropLocation__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *agrobot_msgs__srv__SimCropLocation__get_individual_type_description_source(NULL),
    sources[1] = *agrobot_msgs__srv__SimCropLocation_Event__get_individual_type_description_source(NULL);
    sources[2] = *agrobot_msgs__srv__SimCropLocation_Request__get_individual_type_description_source(NULL);
    sources[3] = *agrobot_msgs__srv__SimCropLocation_Response__get_individual_type_description_source(NULL);
    sources[4] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[5] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
agrobot_msgs__srv__SimCropLocation_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *agrobot_msgs__srv__SimCropLocation_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
agrobot_msgs__srv__SimCropLocation_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *agrobot_msgs__srv__SimCropLocation_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
agrobot_msgs__srv__SimCropLocation_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *agrobot_msgs__srv__SimCropLocation_Event__get_individual_type_description_source(NULL),
    sources[1] = *agrobot_msgs__srv__SimCropLocation_Request__get_individual_type_description_source(NULL);
    sources[2] = *agrobot_msgs__srv__SimCropLocation_Response__get_individual_type_description_source(NULL);
    sources[3] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[4] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
