// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from agrobot_msgs:msg/VisionPublishClosestCrop.idl
// generated code does not contain a copyright notice
#include "agrobot_msgs/msg/detail/vision_publish_closest_crop__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `crop_type`
#include "rosidl_runtime_c/string_functions.h"

bool
agrobot_msgs__msg__VisionPublishClosestCrop__init(agrobot_msgs__msg__VisionPublishClosestCrop * msg)
{
  if (!msg) {
    return false;
  }
  // crop_type
  if (!rosidl_runtime_c__String__init(&msg->crop_type)) {
    agrobot_msgs__msg__VisionPublishClosestCrop__fini(msg);
    return false;
  }
  // crop_x
  // crop_y
  return true;
}

void
agrobot_msgs__msg__VisionPublishClosestCrop__fini(agrobot_msgs__msg__VisionPublishClosestCrop * msg)
{
  if (!msg) {
    return;
  }
  // crop_type
  rosidl_runtime_c__String__fini(&msg->crop_type);
  // crop_x
  // crop_y
}

bool
agrobot_msgs__msg__VisionPublishClosestCrop__are_equal(const agrobot_msgs__msg__VisionPublishClosestCrop * lhs, const agrobot_msgs__msg__VisionPublishClosestCrop * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // crop_type
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->crop_type), &(rhs->crop_type)))
  {
    return false;
  }
  // crop_x
  if (lhs->crop_x != rhs->crop_x) {
    return false;
  }
  // crop_y
  if (lhs->crop_y != rhs->crop_y) {
    return false;
  }
  return true;
}

bool
agrobot_msgs__msg__VisionPublishClosestCrop__copy(
  const agrobot_msgs__msg__VisionPublishClosestCrop * input,
  agrobot_msgs__msg__VisionPublishClosestCrop * output)
{
  if (!input || !output) {
    return false;
  }
  // crop_type
  if (!rosidl_runtime_c__String__copy(
      &(input->crop_type), &(output->crop_type)))
  {
    return false;
  }
  // crop_x
  output->crop_x = input->crop_x;
  // crop_y
  output->crop_y = input->crop_y;
  return true;
}

agrobot_msgs__msg__VisionPublishClosestCrop *
agrobot_msgs__msg__VisionPublishClosestCrop__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agrobot_msgs__msg__VisionPublishClosestCrop * msg = (agrobot_msgs__msg__VisionPublishClosestCrop *)allocator.allocate(sizeof(agrobot_msgs__msg__VisionPublishClosestCrop), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(agrobot_msgs__msg__VisionPublishClosestCrop));
  bool success = agrobot_msgs__msg__VisionPublishClosestCrop__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
agrobot_msgs__msg__VisionPublishClosestCrop__destroy(agrobot_msgs__msg__VisionPublishClosestCrop * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    agrobot_msgs__msg__VisionPublishClosestCrop__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
agrobot_msgs__msg__VisionPublishClosestCrop__Sequence__init(agrobot_msgs__msg__VisionPublishClosestCrop__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agrobot_msgs__msg__VisionPublishClosestCrop * data = NULL;

  if (size) {
    data = (agrobot_msgs__msg__VisionPublishClosestCrop *)allocator.zero_allocate(size, sizeof(agrobot_msgs__msg__VisionPublishClosestCrop), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = agrobot_msgs__msg__VisionPublishClosestCrop__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        agrobot_msgs__msg__VisionPublishClosestCrop__fini(&data[i - 1]);
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
agrobot_msgs__msg__VisionPublishClosestCrop__Sequence__fini(agrobot_msgs__msg__VisionPublishClosestCrop__Sequence * array)
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
      agrobot_msgs__msg__VisionPublishClosestCrop__fini(&array->data[i]);
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

agrobot_msgs__msg__VisionPublishClosestCrop__Sequence *
agrobot_msgs__msg__VisionPublishClosestCrop__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  agrobot_msgs__msg__VisionPublishClosestCrop__Sequence * array = (agrobot_msgs__msg__VisionPublishClosestCrop__Sequence *)allocator.allocate(sizeof(agrobot_msgs__msg__VisionPublishClosestCrop__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = agrobot_msgs__msg__VisionPublishClosestCrop__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
agrobot_msgs__msg__VisionPublishClosestCrop__Sequence__destroy(agrobot_msgs__msg__VisionPublishClosestCrop__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    agrobot_msgs__msg__VisionPublishClosestCrop__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
agrobot_msgs__msg__VisionPublishClosestCrop__Sequence__are_equal(const agrobot_msgs__msg__VisionPublishClosestCrop__Sequence * lhs, const agrobot_msgs__msg__VisionPublishClosestCrop__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!agrobot_msgs__msg__VisionPublishClosestCrop__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
agrobot_msgs__msg__VisionPublishClosestCrop__Sequence__copy(
  const agrobot_msgs__msg__VisionPublishClosestCrop__Sequence * input,
  agrobot_msgs__msg__VisionPublishClosestCrop__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(agrobot_msgs__msg__VisionPublishClosestCrop);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    agrobot_msgs__msg__VisionPublishClosestCrop * data =
      (agrobot_msgs__msg__VisionPublishClosestCrop *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!agrobot_msgs__msg__VisionPublishClosestCrop__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          agrobot_msgs__msg__VisionPublishClosestCrop__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!agrobot_msgs__msg__VisionPublishClosestCrop__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
