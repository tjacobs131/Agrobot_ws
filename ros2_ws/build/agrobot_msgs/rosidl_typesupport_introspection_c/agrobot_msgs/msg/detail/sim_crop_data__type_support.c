// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from agrobot_msgs:msg/SimCropData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "agrobot_msgs/msg/detail/sim_crop_data__rosidl_typesupport_introspection_c.h"
#include "agrobot_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "agrobot_msgs/msg/detail/sim_crop_data__functions.h"
#include "agrobot_msgs/msg/detail/sim_crop_data__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void agrobot_msgs__msg__SimCropData__rosidl_typesupport_introspection_c__SimCropData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  agrobot_msgs__msg__SimCropData__init(message_memory);
}

void agrobot_msgs__msg__SimCropData__rosidl_typesupport_introspection_c__SimCropData_fini_function(void * message_memory)
{
  agrobot_msgs__msg__SimCropData__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember agrobot_msgs__msg__SimCropData__rosidl_typesupport_introspection_c__SimCropData_message_member_array[1] = {
  {
    "structure_needs_at_least_one_member",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(agrobot_msgs__msg__SimCropData, structure_needs_at_least_one_member),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers agrobot_msgs__msg__SimCropData__rosidl_typesupport_introspection_c__SimCropData_message_members = {
  "agrobot_msgs__msg",  // message namespace
  "SimCropData",  // message name
  1,  // number of fields
  sizeof(agrobot_msgs__msg__SimCropData),
  agrobot_msgs__msg__SimCropData__rosidl_typesupport_introspection_c__SimCropData_message_member_array,  // message members
  agrobot_msgs__msg__SimCropData__rosidl_typesupport_introspection_c__SimCropData_init_function,  // function to initialize message memory (memory has to be allocated)
  agrobot_msgs__msg__SimCropData__rosidl_typesupport_introspection_c__SimCropData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t agrobot_msgs__msg__SimCropData__rosidl_typesupport_introspection_c__SimCropData_message_type_support_handle = {
  0,
  &agrobot_msgs__msg__SimCropData__rosidl_typesupport_introspection_c__SimCropData_message_members,
  get_message_typesupport_handle_function,
  &agrobot_msgs__msg__SimCropData__get_type_hash,
  &agrobot_msgs__msg__SimCropData__get_type_description,
  &agrobot_msgs__msg__SimCropData__get_type_description_sources,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_agrobot_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, agrobot_msgs, msg, SimCropData)() {
  if (!agrobot_msgs__msg__SimCropData__rosidl_typesupport_introspection_c__SimCropData_message_type_support_handle.typesupport_identifier) {
    agrobot_msgs__msg__SimCropData__rosidl_typesupport_introspection_c__SimCropData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &agrobot_msgs__msg__SimCropData__rosidl_typesupport_introspection_c__SimCropData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif