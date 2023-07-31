// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/BumperHeights.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/bumper_heights__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `front`
// Member `rear`
#include "j2735_v2x_msgs/msg/detail/bumper_height__functions.h"

bool
j2735_v2x_msgs__msg__BumperHeights__init(j2735_v2x_msgs__msg__BumperHeights * msg)
{
  if (!msg) {
    return false;
  }
  // front
  if (!j2735_v2x_msgs__msg__BumperHeight__init(&msg->front)) {
    j2735_v2x_msgs__msg__BumperHeights__fini(msg);
    return false;
  }
  // rear
  if (!j2735_v2x_msgs__msg__BumperHeight__init(&msg->rear)) {
    j2735_v2x_msgs__msg__BumperHeights__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__BumperHeights__fini(j2735_v2x_msgs__msg__BumperHeights * msg)
{
  if (!msg) {
    return;
  }
  // front
  j2735_v2x_msgs__msg__BumperHeight__fini(&msg->front);
  // rear
  j2735_v2x_msgs__msg__BumperHeight__fini(&msg->rear);
}

bool
j2735_v2x_msgs__msg__BumperHeights__are_equal(const j2735_v2x_msgs__msg__BumperHeights * lhs, const j2735_v2x_msgs__msg__BumperHeights * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // front
  if (!j2735_v2x_msgs__msg__BumperHeight__are_equal(
      &(lhs->front), &(rhs->front)))
  {
    return false;
  }
  // rear
  if (!j2735_v2x_msgs__msg__BumperHeight__are_equal(
      &(lhs->rear), &(rhs->rear)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__BumperHeights__copy(
  const j2735_v2x_msgs__msg__BumperHeights * input,
  j2735_v2x_msgs__msg__BumperHeights * output)
{
  if (!input || !output) {
    return false;
  }
  // front
  if (!j2735_v2x_msgs__msg__BumperHeight__copy(
      &(input->front), &(output->front)))
  {
    return false;
  }
  // rear
  if (!j2735_v2x_msgs__msg__BumperHeight__copy(
      &(input->rear), &(output->rear)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__BumperHeights *
j2735_v2x_msgs__msg__BumperHeights__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BumperHeights * msg = (j2735_v2x_msgs__msg__BumperHeights *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__BumperHeights), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__BumperHeights));
  bool success = j2735_v2x_msgs__msg__BumperHeights__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__BumperHeights__destroy(j2735_v2x_msgs__msg__BumperHeights * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__BumperHeights__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__BumperHeights__Sequence__init(j2735_v2x_msgs__msg__BumperHeights__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BumperHeights * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__BumperHeights *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__BumperHeights), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__BumperHeights__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__BumperHeights__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__BumperHeights__Sequence__fini(j2735_v2x_msgs__msg__BumperHeights__Sequence * array)
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
      j2735_v2x_msgs__msg__BumperHeights__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__BumperHeights__Sequence *
j2735_v2x_msgs__msg__BumperHeights__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BumperHeights__Sequence * array = (j2735_v2x_msgs__msg__BumperHeights__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__BumperHeights__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__BumperHeights__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__BumperHeights__Sequence__destroy(j2735_v2x_msgs__msg__BumperHeights__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__BumperHeights__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__BumperHeights__Sequence__are_equal(const j2735_v2x_msgs__msg__BumperHeights__Sequence * lhs, const j2735_v2x_msgs__msg__BumperHeights__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__BumperHeights__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__BumperHeights__Sequence__copy(
  const j2735_v2x_msgs__msg__BumperHeights__Sequence * input,
  j2735_v2x_msgs__msg__BumperHeights__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__BumperHeights);
    j2735_v2x_msgs__msg__BumperHeights * data =
      (j2735_v2x_msgs__msg__BumperHeights *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__BumperHeights__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__BumperHeights__fini(&data[i]);
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
    if (!j2735_v2x_msgs__msg__BumperHeights__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
