// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from agrobot_msgs:srv/SimCropLocation.idl
// generated code does not contain a copyright notice
#include "agrobot_msgs/srv/detail/sim_crop_location__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
agrobot_msgs__srv__SimCropLocation_Request__init(agrobot_msgs__srv__SimCropLocation_Request * msg)
{
  if (!msg) {
    return false;
  }
  // object_id
  return true;
}

void
agrobot_msgs__srv__SimCropLocation_Request__fini(agrobot_msgs__srv__SimCropLocation_Request * msg)
{
  if (!msg) {
    return;
  }
  // object_id
}

bool
agrobot_msgs__srv__SimCropLocation_Request__are_equal(const agrobot_msgs__srv__SimCropLocation_Request * lhs, const agrobot_msgs__srv__SimCropLocation_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // object_id
  if (lhs->object_id != rhs->object_id) {
    return false;
  }
  return true;
}

bool
agrobot_msgs__srv__SimCropLocation_Request__copy(
  const agrobot_msgs__srv__SimCropLocation_Request * input,
  agrobot_msgs__srv__SimCropLocation_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // object_id
  output->object_id = input->object_id;
  return true;
}

agrobot_msgs__srv__SimCropLocation_Request *
agrobot_msgs__srv__SimCropLocation_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agrobot_msgs__srv__SimCropLocation_Request * msg = (agrobot_msgs__srv__SimCropLocation_Request *)allocator.allocate(sizeof(agrobot_msgs__srv__SimCropLocation_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(agrobot_msgs__srv__SimCropLocation_Request));
  bool success = agrobot_msgs__srv__SimCropLocation_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
agrobot_msgs__srv__SimCropLocation_Request__destroy(agrobot_msgs__srv__SimCropLocation_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    agrobot_msgs__srv__SimCropLocation_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
agrobot_msgs__srv__SimCropLocation_Request__Sequence__init(agrobot_msgs__srv__SimCropLocation_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agrobot_msgs__srv__SimCropLocation_Request * data = NULL;

  if (size) {
    data = (agrobot_msgs__srv__SimCropLocation_Request *)allocator.zero_allocate(size, sizeof(agrobot_msgs__srv__SimCropLocation_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = agrobot_msgs__srv__SimCropLocation_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        agrobot_msgs__srv__SimCropLocation_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
agrobot_msgs__srv__SimCropLocation_Request__Sequence__fini(agrobot_msgs__srv__SimCropLocation_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      agrobot_msgs__srv__SimCropLocation_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

agrobot_msgs__srv__SimCropLocation_Request__Sequence *
agrobot_msgs__srv__SimCropLocation_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agrobot_msgs__srv__SimCropLocation_Request__Sequence * array = (agrobot_msgs__srv__SimCropLocation_Request__Sequence *)allocator.allocate(sizeof(agrobot_msgs__srv__SimCropLocation_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = agrobot_msgs__srv__SimCropLocation_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
agrobot_msgs__srv__SimCropLocation_Request__Sequence__destroy(agrobot_msgs__srv__SimCropLocation_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    agrobot_msgs__srv__SimCropLocation_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
agrobot_msgs__srv__SimCropLocation_Request__Sequence__are_equal(const agrobot_msgs__srv__SimCropLocation_Request__Sequence * lhs, const agrobot_msgs__srv__SimCropLocation_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!agrobot_msgs__srv__SimCropLocation_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
agrobot_msgs__srv__SimCropLocation_Request__Sequence__copy(
  const agrobot_msgs__srv__SimCropLocation_Request__Sequence * input,
  agrobot_msgs__srv__SimCropLocation_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(agrobot_msgs__srv__SimCropLocation_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    agrobot_msgs__srv__SimCropLocation_Request * data =
      (agrobot_msgs__srv__SimCropLocation_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!agrobot_msgs__srv__SimCropLocation_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          agrobot_msgs__srv__SimCropLocation_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!agrobot_msgs__srv__SimCropLocation_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `position`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
agrobot_msgs__srv__SimCropLocation_Response__init(agrobot_msgs__srv__SimCropLocation_Response * msg)
{
  if (!msg) {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__init(&msg->position, 0)) {
    agrobot_msgs__srv__SimCropLocation_Response__fini(msg);
    return false;
  }
  return true;
}

void
agrobot_msgs__srv__SimCropLocation_Response__fini(agrobot_msgs__srv__SimCropLocation_Response * msg)
{
  if (!msg) {
    return;
  }
  // position
  rosidl_runtime_c__double__Sequence__fini(&msg->position);
}

bool
agrobot_msgs__srv__SimCropLocation_Response__are_equal(const agrobot_msgs__srv__SimCropLocation_Response * lhs, const agrobot_msgs__srv__SimCropLocation_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->position), &(rhs->position)))
  {
    return false;
  }
  return true;
}

bool
agrobot_msgs__srv__SimCropLocation_Response__copy(
  const agrobot_msgs__srv__SimCropLocation_Response * input,
  agrobot_msgs__srv__SimCropLocation_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // position
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->position), &(output->position)))
  {
    return false;
  }
  return true;
}

agrobot_msgs__srv__SimCropLocation_Response *
agrobot_msgs__srv__SimCropLocation_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agrobot_msgs__srv__SimCropLocation_Response * msg = (agrobot_msgs__srv__SimCropLocation_Response *)allocator.allocate(sizeof(agrobot_msgs__srv__SimCropLocation_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(agrobot_msgs__srv__SimCropLocation_Response));
  bool success = agrobot_msgs__srv__SimCropLocation_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
agrobot_msgs__srv__SimCropLocation_Response__destroy(agrobot_msgs__srv__SimCropLocation_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    agrobot_msgs__srv__SimCropLocation_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
agrobot_msgs__srv__SimCropLocation_Response__Sequence__init(agrobot_msgs__srv__SimCropLocation_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agrobot_msgs__srv__SimCropLocation_Response * data = NULL;

  if (size) {
    data = (agrobot_msgs__srv__SimCropLocation_Response *)allocator.zero_allocate(size, sizeof(agrobot_msgs__srv__SimCropLocation_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = agrobot_msgs__srv__SimCropLocation_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        agrobot_msgs__srv__SimCropLocation_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
agrobot_msgs__srv__SimCropLocation_Response__Sequence__fini(agrobot_msgs__srv__SimCropLocation_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      agrobot_msgs__srv__SimCropLocation_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

agrobot_msgs__srv__SimCropLocation_Response__Sequence *
agrobot_msgs__srv__SimCropLocation_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agrobot_msgs__srv__SimCropLocation_Response__Sequence * array = (agrobot_msgs__srv__SimCropLocation_Response__Sequence *)allocator.allocate(sizeof(agrobot_msgs__srv__SimCropLocation_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = agrobot_msgs__srv__SimCropLocation_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
agrobot_msgs__srv__SimCropLocation_Response__Sequence__destroy(agrobot_msgs__srv__SimCropLocation_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    agrobot_msgs__srv__SimCropLocation_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
agrobot_msgs__srv__SimCropLocation_Response__Sequence__are_equal(const agrobot_msgs__srv__SimCropLocation_Response__Sequence * lhs, const agrobot_msgs__srv__SimCropLocation_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!agrobot_msgs__srv__SimCropLocation_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
agrobot_msgs__srv__SimCropLocation_Response__Sequence__copy(
  const agrobot_msgs__srv__SimCropLocation_Response__Sequence * input,
  agrobot_msgs__srv__SimCropLocation_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(agrobot_msgs__srv__SimCropLocation_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    agrobot_msgs__srv__SimCropLocation_Response * data =
      (agrobot_msgs__srv__SimCropLocation_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!agrobot_msgs__srv__SimCropLocation_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          agrobot_msgs__srv__SimCropLocation_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!agrobot_msgs__srv__SimCropLocation_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "agrobot_msgs/srv/detail/sim_crop_location__functions.h"

bool
agrobot_msgs__srv__SimCropLocation_Event__init(agrobot_msgs__srv__SimCropLocation_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    agrobot_msgs__srv__SimCropLocation_Event__fini(msg);
    return false;
  }
  // request
  if (!agrobot_msgs__srv__SimCropLocation_Request__Sequence__init(&msg->request, 0)) {
    agrobot_msgs__srv__SimCropLocation_Event__fini(msg);
    return false;
  }
  // response
  if (!agrobot_msgs__srv__SimCropLocation_Response__Sequence__init(&msg->response, 0)) {
    agrobot_msgs__srv__SimCropLocation_Event__fini(msg);
    return false;
  }
  return true;
}

void
agrobot_msgs__srv__SimCropLocation_Event__fini(agrobot_msgs__srv__SimCropLocation_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  agrobot_msgs__srv__SimCropLocation_Request__Sequence__fini(&msg->request);
  // response
  agrobot_msgs__srv__SimCropLocation_Response__Sequence__fini(&msg->response);
}

bool
agrobot_msgs__srv__SimCropLocation_Event__are_equal(const agrobot_msgs__srv__SimCropLocation_Event * lhs, const agrobot_msgs__srv__SimCropLocation_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!agrobot_msgs__srv__SimCropLocation_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!agrobot_msgs__srv__SimCropLocation_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
agrobot_msgs__srv__SimCropLocation_Event__copy(
  const agrobot_msgs__srv__SimCropLocation_Event * input,
  agrobot_msgs__srv__SimCropLocation_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!agrobot_msgs__srv__SimCropLocation_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!agrobot_msgs__srv__SimCropLocation_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

agrobot_msgs__srv__SimCropLocation_Event *
agrobot_msgs__srv__SimCropLocation_Event__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agrobot_msgs__srv__SimCropLocation_Event * msg = (agrobot_msgs__srv__SimCropLocation_Event *)allocator.allocate(sizeof(agrobot_msgs__srv__SimCropLocation_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(agrobot_msgs__srv__SimCropLocation_Event));
  bool success = agrobot_msgs__srv__SimCropLocation_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
agrobot_msgs__srv__SimCropLocation_Event__destroy(agrobot_msgs__srv__SimCropLocation_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    agrobot_msgs__srv__SimCropLocation_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
agrobot_msgs__srv__SimCropLocation_Event__Sequence__init(agrobot_msgs__srv__SimCropLocation_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agrobot_msgs__srv__SimCropLocation_Event * data = NULL;

  if (size) {
    data = (agrobot_msgs__srv__SimCropLocation_Event *)allocator.zero_allocate(size, sizeof(agrobot_msgs__srv__SimCropLocation_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = agrobot_msgs__srv__SimCropLocation_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        agrobot_msgs__srv__SimCropLocation_Event__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
agrobot_msgs__srv__SimCropLocation_Event__Sequence__fini(agrobot_msgs__srv__SimCropLocation_Event__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      agrobot_msgs__srv__SimCropLocation_Event__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

agrobot_msgs__srv__SimCropLocation_Event__Sequence *
agrobot_msgs__srv__SimCropLocation_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agrobot_msgs__srv__SimCropLocation_Event__Sequence * array = (agrobot_msgs__srv__SimCropLocation_Event__Sequence *)allocator.allocate(sizeof(agrobot_msgs__srv__SimCropLocation_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = agrobot_msgs__srv__SimCropLocation_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
agrobot_msgs__srv__SimCropLocation_Event__Sequence__destroy(agrobot_msgs__srv__SimCropLocation_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    agrobot_msgs__srv__SimCropLocation_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
agrobot_msgs__srv__SimCropLocation_Event__Sequence__are_equal(const agrobot_msgs__srv__SimCropLocation_Event__Sequence * lhs, const agrobot_msgs__srv__SimCropLocation_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!agrobot_msgs__srv__SimCropLocation_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
agrobot_msgs__srv__SimCropLocation_Event__Sequence__copy(
  const agrobot_msgs__srv__SimCropLocation_Event__Sequence * input,
  agrobot_msgs__srv__SimCropLocation_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(agrobot_msgs__srv__SimCropLocation_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    agrobot_msgs__srv__SimCropLocation_Event * data =
      (agrobot_msgs__srv__SimCropLocation_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!agrobot_msgs__srv__SimCropLocation_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          agrobot_msgs__srv__SimCropLocation_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!agrobot_msgs__srv__SimCropLocation_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
