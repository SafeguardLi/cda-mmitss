// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/Elevation.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/elevation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
j2735_v2x_msgs__msg__Elevation__init(j2735_v2x_msgs__msg__Elevation * msg)
{
  if (!msg) {
    return false;
  }
  // elevation
  return true;
}

void
j2735_v2x_msgs__msg__Elevation__fini(j2735_v2x_msgs__msg__Elevation * msg)
{
  if (!msg) {
    return;
  }
  // elevation
}

bool
j2735_v2x_msgs__msg__Elevation__are_equal(const j2735_v2x_msgs__msg__Elevation * lhs, const j2735_v2x_msgs__msg__Elevation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // elevation
  if (lhs->elevation != rhs->elevation) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__Elevation__copy(
  const j2735_v2x_msgs__msg__Elevation * input,
  j2735_v2x_msgs__msg__Elevation * output)
{
  if (!input || !output) {
    return false;
  }
  // elevation
  output->elevation = input->elevation;
  return true;
}

j2735_v2x_msgs__msg__Elevation *
j2735_v2x_msgs__msg__Elevation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__Elevation * msg = (j2735_v2x_msgs__msg__Elevation *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__Elevation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__Elevation));
  bool success = j2735_v2x_msgs__msg__Elevation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__Elevation__destroy(j2735_v2x_msgs__msg__Elevation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__Elevation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__Elevation__Sequence__init(j2735_v2x_msgs__msg__Elevation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__Elevation * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__Elevation *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__Elevation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__Elevation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__Elevation__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__Elevation__Sequence__fini(j2735_v2x_msgs__msg__Elevation__Sequence * array)
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
      j2735_v2x_msgs__msg__Elevation__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__Elevation__Sequence *
j2735_v2x_msgs__msg__Elevation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__Elevation__Sequence * array = (j2735_v2x_msgs__msg__Elevation__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__Elevation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__Elevation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__Elevation__Sequence__destroy(j2735_v2x_msgs__msg__Elevation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__Elevation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__Elevation__Sequence__are_equal(const j2735_v2x_msgs__msg__Elevation__Sequence * lhs, const j2735_v2x_msgs__msg__Elevation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__Elevation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__Elevation__Sequence__copy(
  const j2735_v2x_msgs__msg__Elevation__Sequence * input,
  j2735_v2x_msgs__msg__Elevation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__Elevation);
    j2735_v2x_msgs__msg__Elevation * data =
      (j2735_v2x_msgs__msg__Elevation *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__Elevation__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__Elevation__fini(&data[i]);
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
    if (!j2735_v2x_msgs__msg__Elevation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
