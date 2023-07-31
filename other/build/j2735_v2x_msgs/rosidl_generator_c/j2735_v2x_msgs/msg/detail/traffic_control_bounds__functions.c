// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/TrafficControlBounds.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/traffic_control_bounds__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `offsets`
#include "j2735_v2x_msgs/msg/detail/offset_point__functions.h"

bool
j2735_v2x_msgs__msg__TrafficControlBounds__init(j2735_v2x_msgs__msg__TrafficControlBounds * msg)
{
  if (!msg) {
    return false;
  }
  // oldest
  // reflon
  // reflat
  // offsets
  for (size_t i = 0; i < 3; ++i) {
    if (!j2735_v2x_msgs__msg__OffsetPoint__init(&msg->offsets[i])) {
      j2735_v2x_msgs__msg__TrafficControlBounds__fini(msg);
      return false;
    }
  }
  return true;
}

void
j2735_v2x_msgs__msg__TrafficControlBounds__fini(j2735_v2x_msgs__msg__TrafficControlBounds * msg)
{
  if (!msg) {
    return;
  }
  // oldest
  // reflon
  // reflat
  // offsets
  for (size_t i = 0; i < 3; ++i) {
    j2735_v2x_msgs__msg__OffsetPoint__fini(&msg->offsets[i]);
  }
}

bool
j2735_v2x_msgs__msg__TrafficControlBounds__are_equal(const j2735_v2x_msgs__msg__TrafficControlBounds * lhs, const j2735_v2x_msgs__msg__TrafficControlBounds * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // oldest
  if (lhs->oldest != rhs->oldest) {
    return false;
  }
  // reflon
  if (lhs->reflon != rhs->reflon) {
    return false;
  }
  // reflat
  if (lhs->reflat != rhs->reflat) {
    return false;
  }
  // offsets
  for (size_t i = 0; i < 3; ++i) {
    if (!j2735_v2x_msgs__msg__OffsetPoint__are_equal(
        &(lhs->offsets[i]), &(rhs->offsets[i])))
    {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TrafficControlBounds__copy(
  const j2735_v2x_msgs__msg__TrafficControlBounds * input,
  j2735_v2x_msgs__msg__TrafficControlBounds * output)
{
  if (!input || !output) {
    return false;
  }
  // oldest
  output->oldest = input->oldest;
  // reflon
  output->reflon = input->reflon;
  // reflat
  output->reflat = input->reflat;
  // offsets
  for (size_t i = 0; i < 3; ++i) {
    if (!j2735_v2x_msgs__msg__OffsetPoint__copy(
        &(input->offsets[i]), &(output->offsets[i])))
    {
      return false;
    }
  }
  return true;
}

j2735_v2x_msgs__msg__TrafficControlBounds *
j2735_v2x_msgs__msg__TrafficControlBounds__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlBounds * msg = (j2735_v2x_msgs__msg__TrafficControlBounds *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrafficControlBounds), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__TrafficControlBounds));
  bool success = j2735_v2x_msgs__msg__TrafficControlBounds__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__TrafficControlBounds__destroy(j2735_v2x_msgs__msg__TrafficControlBounds * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__TrafficControlBounds__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__TrafficControlBounds__Sequence__init(j2735_v2x_msgs__msg__TrafficControlBounds__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlBounds * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__TrafficControlBounds *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__TrafficControlBounds), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__TrafficControlBounds__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__TrafficControlBounds__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__TrafficControlBounds__Sequence__fini(j2735_v2x_msgs__msg__TrafficControlBounds__Sequence * array)
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
      j2735_v2x_msgs__msg__TrafficControlBounds__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__TrafficControlBounds__Sequence *
j2735_v2x_msgs__msg__TrafficControlBounds__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__TrafficControlBounds__Sequence * array = (j2735_v2x_msgs__msg__TrafficControlBounds__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__TrafficControlBounds__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__TrafficControlBounds__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__TrafficControlBounds__Sequence__destroy(j2735_v2x_msgs__msg__TrafficControlBounds__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__TrafficControlBounds__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__TrafficControlBounds__Sequence__are_equal(const j2735_v2x_msgs__msg__TrafficControlBounds__Sequence * lhs, const j2735_v2x_msgs__msg__TrafficControlBounds__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrafficControlBounds__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__TrafficControlBounds__Sequence__copy(
  const j2735_v2x_msgs__msg__TrafficControlBounds__Sequence * input,
  j2735_v2x_msgs__msg__TrafficControlBounds__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__TrafficControlBounds);
    j2735_v2x_msgs__msg__TrafficControlBounds * data =
      (j2735_v2x_msgs__msg__TrafficControlBounds *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__TrafficControlBounds__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__TrafficControlBounds__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!j2735_v2x_msgs__msg__TrafficControlBounds__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
