// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from agrobot_msgs:srv/SimCropLocation.idl
// generated code does not contain a copyright notice

#ifndef AGROBOT_MSGS__SRV__DETAIL__SIM_CROP_LOCATION__STRUCT_H_
#define AGROBOT_MSGS__SRV__DETAIL__SIM_CROP_LOCATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SimCropLocation in the package agrobot_msgs.
typedef struct agrobot_msgs__srv__SimCropLocation_Request
{
  int64_t object_id;
} agrobot_msgs__srv__SimCropLocation_Request;

// Struct for a sequence of agrobot_msgs__srv__SimCropLocation_Request.
typedef struct agrobot_msgs__srv__SimCropLocation_Request__Sequence
{
  agrobot_msgs__srv__SimCropLocation_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agrobot_msgs__srv__SimCropLocation_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'position'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in srv/SimCropLocation in the package agrobot_msgs.
typedef struct agrobot_msgs__srv__SimCropLocation_Response
{
  rosidl_runtime_c__double__Sequence position;
} agrobot_msgs__srv__SimCropLocation_Response;

// Struct for a sequence of agrobot_msgs__srv__SimCropLocation_Response.
typedef struct agrobot_msgs__srv__SimCropLocation_Response__Sequence
{
  agrobot_msgs__srv__SimCropLocation_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agrobot_msgs__srv__SimCropLocation_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  agrobot_msgs__srv__SimCropLocation_Event__request__MAX_SIZE = 1
};
// response
enum
{
  agrobot_msgs__srv__SimCropLocation_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/SimCropLocation in the package agrobot_msgs.
typedef struct agrobot_msgs__srv__SimCropLocation_Event
{
  service_msgs__msg__ServiceEventInfo info;
  agrobot_msgs__srv__SimCropLocation_Request__Sequence request;
  agrobot_msgs__srv__SimCropLocation_Response__Sequence response;
} agrobot_msgs__srv__SimCropLocation_Event;

// Struct for a sequence of agrobot_msgs__srv__SimCropLocation_Event.
typedef struct agrobot_msgs__srv__SimCropLocation_Event__Sequence
{
  agrobot_msgs__srv__SimCropLocation_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} agrobot_msgs__srv__SimCropLocation_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // AGROBOT_MSGS__SRV__DETAIL__SIM_CROP_LOCATION__STRUCT_H_
