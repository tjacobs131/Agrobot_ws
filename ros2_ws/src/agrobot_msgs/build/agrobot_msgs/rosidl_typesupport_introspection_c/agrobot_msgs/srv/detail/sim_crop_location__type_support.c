// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from agrobot_msgs:srv/SimCropLocation.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "agrobot_msgs/srv/detail/sim_crop_location__rosidl_typesupport_introspection_c.h"
#include "agrobot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "agrobot_msgs/srv/detail/sim_crop_location__functions.h"
#include "agrobot_msgs/srv/detail/sim_crop_location__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void agrobot_msgs__srv__SimCropLocation_Request__rosidl_typesupport_introspection_c__SimCropLocation_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  agrobot_msgs__srv__SimCropLocation_Request__init(message_memory);
}

void agrobot_msgs__srv__SimCropLocation_Request__rosidl_typesupport_introspection_c__SimCropLocation_Request_fini_function(void * message_memory)
{
  agrobot_msgs__srv__SimCropLocation_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember agrobot_msgs__srv__SimCropLocation_Request__rosidl_typesupport_introspection_c__SimCropLocation_Request_message_member_array[1] = {
  {
    "object_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT64,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agrobot_msgs__srv__SimCropLocation_Request, object_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers agrobot_msgs__srv__SimCropLocation_Request__rosidl_typesupport_introspection_c__SimCropLocation_Request_message_members = {
  "agrobot_msgs__srv",  // message namespace
  "SimCropLocation_Request",  // message name
  1,  // number of fields
  sizeof(agrobot_msgs__srv__SimCropLocation_Request),
  agrobot_msgs__srv__SimCropLocation_Request__rosidl_typesupport_introspection_c__SimCropLocation_Request_message_member_array,  // message members
  agrobot_msgs__srv__SimCropLocation_Request__rosidl_typesupport_introspection_c__SimCropLocation_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  agrobot_msgs__srv__SimCropLocation_Request__rosidl_typesupport_introspection_c__SimCropLocation_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t agrobot_msgs__srv__SimCropLocation_Request__rosidl_typesupport_introspection_c__SimCropLocation_Request_message_type_support_handle = {
  0,
  &agrobot_msgs__srv__SimCropLocation_Request__rosidl_typesupport_introspection_c__SimCropLocation_Request_message_members,
  get_message_typesupport_handle_function,
  &agrobot_msgs__srv__SimCropLocation_Request__get_type_hash,
  &agrobot_msgs__srv__SimCropLocation_Request__get_type_description,
  &agrobot_msgs__srv__SimCropLocation_Request__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_agrobot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, agrobot_msgs, srv, SimCropLocation_Request)() {
  if (!agrobot_msgs__srv__SimCropLocation_Request__rosidl_typesupport_introspection_c__SimCropLocation_Request_message_type_support_handle.typesupport_identifier) {
    agrobot_msgs__srv__SimCropLocation_Request__rosidl_typesupport_introspection_c__SimCropLocation_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &agrobot_msgs__srv__SimCropLocation_Request__rosidl_typesupport_introspection_c__SimCropLocation_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "agrobot_msgs/srv/detail/sim_crop_location__rosidl_typesupport_introspection_c.h"
// already included above
// #include "agrobot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "agrobot_msgs/srv/detail/sim_crop_location__functions.h"
// already included above
// #include "agrobot_msgs/srv/detail/sim_crop_location__struct.h"


// Include directives for member types
// Member `position`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__SimCropLocation_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  agrobot_msgs__srv__SimCropLocation_Response__init(message_memory);
}

void agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__SimCropLocation_Response_fini_function(void * message_memory)
{
  agrobot_msgs__srv__SimCropLocation_Response__fini(message_memory);
}

size_t agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__size_function__SimCropLocation_Response__position(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__get_const_function__SimCropLocation_Response__position(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__get_function__SimCropLocation_Response__position(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__fetch_function__SimCropLocation_Response__position(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__get_const_function__SimCropLocation_Response__position(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__assign_function__SimCropLocation_Response__position(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__get_function__SimCropLocation_Response__position(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__resize_function__SimCropLocation_Response__position(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__SimCropLocation_Response_message_member_array[1] = {
  {
    "position",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agrobot_msgs__srv__SimCropLocation_Response, position),  // bytes offset in struct
    NULL,  // default value
    agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__size_function__SimCropLocation_Response__position,  // size() function pointer
    agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__get_const_function__SimCropLocation_Response__position,  // get_const(index) function pointer
    agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__get_function__SimCropLocation_Response__position,  // get(index) function pointer
    agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__fetch_function__SimCropLocation_Response__position,  // fetch(index, &value) function pointer
    agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__assign_function__SimCropLocation_Response__position,  // assign(index, value) function pointer
    agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__resize_function__SimCropLocation_Response__position  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__SimCropLocation_Response_message_members = {
  "agrobot_msgs__srv",  // message namespace
  "SimCropLocation_Response",  // message name
  1,  // number of fields
  sizeof(agrobot_msgs__srv__SimCropLocation_Response),
  agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__SimCropLocation_Response_message_member_array,  // message members
  agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__SimCropLocation_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__SimCropLocation_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__SimCropLocation_Response_message_type_support_handle = {
  0,
  &agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__SimCropLocation_Response_message_members,
  get_message_typesupport_handle_function,
  &agrobot_msgs__srv__SimCropLocation_Response__get_type_hash,
  &agrobot_msgs__srv__SimCropLocation_Response__get_type_description,
  &agrobot_msgs__srv__SimCropLocation_Response__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_agrobot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, agrobot_msgs, srv, SimCropLocation_Response)() {
  if (!agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__SimCropLocation_Response_message_type_support_handle.typesupport_identifier) {
    agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__SimCropLocation_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__SimCropLocation_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "agrobot_msgs/srv/detail/sim_crop_location__rosidl_typesupport_introspection_c.h"
// already included above
// #include "agrobot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "agrobot_msgs/srv/detail/sim_crop_location__functions.h"
// already included above
// #include "agrobot_msgs/srv/detail/sim_crop_location__struct.h"


// Include directives for member types
// Member `info`
#include "service_msgs/msg/service_event_info.h"
// Member `info`
#include "service_msgs/msg/detail/service_event_info__rosidl_typesupport_introspection_c.h"
// Member `request`
// Member `response`
#include "agrobot_msgs/srv/sim_crop_location.h"
// Member `request`
// Member `response`
// already included above
// #include "agrobot_msgs/srv/detail/sim_crop_location__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  agrobot_msgs__srv__SimCropLocation_Event__init(message_memory);
}

void agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_fini_function(void * message_memory)
{
  agrobot_msgs__srv__SimCropLocation_Event__fini(message_memory);
}

size_t agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__size_function__SimCropLocation_Event__request(
  const void * untyped_member)
{
  const agrobot_msgs__srv__SimCropLocation_Request__Sequence * member =
    (const agrobot_msgs__srv__SimCropLocation_Request__Sequence *)(untyped_member);
  return member->size;
}

const void * agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__get_const_function__SimCropLocation_Event__request(
  const void * untyped_member, size_t index)
{
  const agrobot_msgs__srv__SimCropLocation_Request__Sequence * member =
    (const agrobot_msgs__srv__SimCropLocation_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void * agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__get_function__SimCropLocation_Event__request(
  void * untyped_member, size_t index)
{
  agrobot_msgs__srv__SimCropLocation_Request__Sequence * member =
    (agrobot_msgs__srv__SimCropLocation_Request__Sequence *)(untyped_member);
  return &member->data[index];
}

void agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__fetch_function__SimCropLocation_Event__request(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const agrobot_msgs__srv__SimCropLocation_Request * item =
    ((const agrobot_msgs__srv__SimCropLocation_Request *)
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__get_const_function__SimCropLocation_Event__request(untyped_member, index));
  agrobot_msgs__srv__SimCropLocation_Request * value =
    (agrobot_msgs__srv__SimCropLocation_Request *)(untyped_value);
  *value = *item;
}

void agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__assign_function__SimCropLocation_Event__request(
  void * untyped_member, size_t index, const void * untyped_value)
{
  agrobot_msgs__srv__SimCropLocation_Request * item =
    ((agrobot_msgs__srv__SimCropLocation_Request *)
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__get_function__SimCropLocation_Event__request(untyped_member, index));
  const agrobot_msgs__srv__SimCropLocation_Request * value =
    (const agrobot_msgs__srv__SimCropLocation_Request *)(untyped_value);
  *item = *value;
}

bool agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__resize_function__SimCropLocation_Event__request(
  void * untyped_member, size_t size)
{
  agrobot_msgs__srv__SimCropLocation_Request__Sequence * member =
    (agrobot_msgs__srv__SimCropLocation_Request__Sequence *)(untyped_member);
  agrobot_msgs__srv__SimCropLocation_Request__Sequence__fini(member);
  return agrobot_msgs__srv__SimCropLocation_Request__Sequence__init(member, size);
}

size_t agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__size_function__SimCropLocation_Event__response(
  const void * untyped_member)
{
  const agrobot_msgs__srv__SimCropLocation_Response__Sequence * member =
    (const agrobot_msgs__srv__SimCropLocation_Response__Sequence *)(untyped_member);
  return member->size;
}

const void * agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__get_const_function__SimCropLocation_Event__response(
  const void * untyped_member, size_t index)
{
  const agrobot_msgs__srv__SimCropLocation_Response__Sequence * member =
    (const agrobot_msgs__srv__SimCropLocation_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void * agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__get_function__SimCropLocation_Event__response(
  void * untyped_member, size_t index)
{
  agrobot_msgs__srv__SimCropLocation_Response__Sequence * member =
    (agrobot_msgs__srv__SimCropLocation_Response__Sequence *)(untyped_member);
  return &member->data[index];
}

void agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__fetch_function__SimCropLocation_Event__response(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const agrobot_msgs__srv__SimCropLocation_Response * item =
    ((const agrobot_msgs__srv__SimCropLocation_Response *)
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__get_const_function__SimCropLocation_Event__response(untyped_member, index));
  agrobot_msgs__srv__SimCropLocation_Response * value =
    (agrobot_msgs__srv__SimCropLocation_Response *)(untyped_value);
  *value = *item;
}

void agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__assign_function__SimCropLocation_Event__response(
  void * untyped_member, size_t index, const void * untyped_value)
{
  agrobot_msgs__srv__SimCropLocation_Response * item =
    ((agrobot_msgs__srv__SimCropLocation_Response *)
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__get_function__SimCropLocation_Event__response(untyped_member, index));
  const agrobot_msgs__srv__SimCropLocation_Response * value =
    (const agrobot_msgs__srv__SimCropLocation_Response *)(untyped_value);
  *item = *value;
}

bool agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__resize_function__SimCropLocation_Event__response(
  void * untyped_member, size_t size)
{
  agrobot_msgs__srv__SimCropLocation_Response__Sequence * member =
    (agrobot_msgs__srv__SimCropLocation_Response__Sequence *)(untyped_member);
  agrobot_msgs__srv__SimCropLocation_Response__Sequence__fini(member);
  return agrobot_msgs__srv__SimCropLocation_Response__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_message_member_array[3] = {
  {
    "info",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agrobot_msgs__srv__SimCropLocation_Event, info),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "request",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(agrobot_msgs__srv__SimCropLocation_Event, request),  // bytes offset in struct
    NULL,  // default value
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__size_function__SimCropLocation_Event__request,  // size() function pointer
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__get_const_function__SimCropLocation_Event__request,  // get_const(index) function pointer
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__get_function__SimCropLocation_Event__request,  // get(index) function pointer
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__fetch_function__SimCropLocation_Event__request,  // fetch(index, &value) function pointer
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__assign_function__SimCropLocation_Event__request,  // assign(index, value) function pointer
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__resize_function__SimCropLocation_Event__request  // resize(index) function pointer
  },
  {
    "response",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    1,  // array size
    true,  // is upper bound
    offsetof(agrobot_msgs__srv__SimCropLocation_Event, response),  // bytes offset in struct
    NULL,  // default value
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__size_function__SimCropLocation_Event__response,  // size() function pointer
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__get_const_function__SimCropLocation_Event__response,  // get_const(index) function pointer
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__get_function__SimCropLocation_Event__response,  // get(index) function pointer
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__fetch_function__SimCropLocation_Event__response,  // fetch(index, &value) function pointer
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__assign_function__SimCropLocation_Event__response,  // assign(index, value) function pointer
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__resize_function__SimCropLocation_Event__response  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_message_members = {
  "agrobot_msgs__srv",  // message namespace
  "SimCropLocation_Event",  // message name
  3,  // number of fields
  sizeof(agrobot_msgs__srv__SimCropLocation_Event),
  agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_message_member_array,  // message members
  agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_init_function,  // function to initialize message memory (memory has to be allocated)
  agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_message_type_support_handle = {
  0,
  &agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_message_members,
  get_message_typesupport_handle_function,
  &agrobot_msgs__srv__SimCropLocation_Event__get_type_hash,
  &agrobot_msgs__srv__SimCropLocation_Event__get_type_description,
  &agrobot_msgs__srv__SimCropLocation_Event__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_agrobot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, agrobot_msgs, srv, SimCropLocation_Event)() {
  agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, service_msgs, msg, ServiceEventInfo)();
  agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, agrobot_msgs, srv, SimCropLocation_Request)();
  agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, agrobot_msgs, srv, SimCropLocation_Response)();
  if (!agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_message_type_support_handle.typesupport_identifier) {
    agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "agrobot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "agrobot_msgs/srv/detail/sim_crop_location__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers agrobot_msgs__srv__detail__sim_crop_location__rosidl_typesupport_introspection_c__SimCropLocation_service_members = {
  "agrobot_msgs__srv",  // service namespace
  "SimCropLocation",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // agrobot_msgs__srv__detail__sim_crop_location__rosidl_typesupport_introspection_c__SimCropLocation_Request_message_type_support_handle,
  NULL,  // response message
  // agrobot_msgs__srv__detail__sim_crop_location__rosidl_typesupport_introspection_c__SimCropLocation_Response_message_type_support_handle
  NULL  // event_message
  // agrobot_msgs__srv__detail__sim_crop_location__rosidl_typesupport_introspection_c__SimCropLocation_Response_message_type_support_handle
};


static rosidl_service_type_support_t agrobot_msgs__srv__detail__sim_crop_location__rosidl_typesupport_introspection_c__SimCropLocation_service_type_support_handle = {
  0,
  &agrobot_msgs__srv__detail__sim_crop_location__rosidl_typesupport_introspection_c__SimCropLocation_service_members,
  get_service_typesupport_handle_function,
  &agrobot_msgs__srv__SimCropLocation_Request__rosidl_typesupport_introspection_c__SimCropLocation_Request_message_type_support_handle,
  &agrobot_msgs__srv__SimCropLocation_Response__rosidl_typesupport_introspection_c__SimCropLocation_Response_message_type_support_handle,
  &agrobot_msgs__srv__SimCropLocation_Event__rosidl_typesupport_introspection_c__SimCropLocation_Event_message_type_support_handle,
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_CREATE_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    agrobot_msgs,
    srv,
    SimCropLocation
  ),
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_DESTROY_EVENT_MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c,
    agrobot_msgs,
    srv,
    SimCropLocation
  ),
  &agrobot_msgs__srv__SimCropLocation__get_type_hash,
  &agrobot_msgs__srv__SimCropLocation__get_type_description,
  &agrobot_msgs__srv__SimCropLocation__get_type_description_sources,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, agrobot_msgs, srv, SimCropLocation_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, agrobot_msgs, srv, SimCropLocation_Response)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, agrobot_msgs, srv, SimCropLocation_Event)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_agrobot_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, agrobot_msgs, srv, SimCropLocation)() {
  if (!agrobot_msgs__srv__detail__sim_crop_location__rosidl_typesupport_introspection_c__SimCropLocation_service_type_support_handle.typesupport_identifier) {
    agrobot_msgs__srv__detail__sim_crop_location__rosidl_typesupport_introspection_c__SimCropLocation_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)agrobot_msgs__srv__detail__sim_crop_location__rosidl_typesupport_introspection_c__SimCropLocation_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, agrobot_msgs, srv, SimCropLocation_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, agrobot_msgs, srv, SimCropLocation_Response)()->data;
  }
  if (!service_members->event_members_) {
    service_members->event_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, agrobot_msgs, srv, SimCropLocation_Event)()->data;
  }

  return &agrobot_msgs__srv__detail__sim_crop_location__rosidl_typesupport_introspection_c__SimCropLocation_service_type_support_handle;
}
