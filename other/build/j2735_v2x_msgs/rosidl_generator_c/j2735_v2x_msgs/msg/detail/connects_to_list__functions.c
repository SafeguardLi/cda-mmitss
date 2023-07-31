// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/ConnectsToList.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/connects_to_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `connect_to_list`
#include "j2735_v2x_msgs/msg/detail/connection__functions.h"

bool
j2735_v2x_msgs__msg__ConnectsToList__init(j2735_v2x_msgs__msg__ConnectsToList * msg)
{
  if (!msg) {
    return false;
  }
  // connect_to_list
  if (!j2735_v2x_msgs__msg__Connection__Sequence__init(&msg->connect_to_list, 0)) {
    j2735_v2x_msgs__msg__ConnectsToList__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__ConnectsToList__fini(j2735_v2x_msgs__msg__ConnectsToList * msg)
{
  if (!msg) {
    return;
  }
  // connect_to_list
  j2735_v2x_msgs__msg__Connection__Sequence__fini(&msg->connect_to_list);
}

bool
j2735_v2x_msgs__msg__ConnectsToList__are_equal(const j2735_v2x_msgs__msg__ConnectsToList * lhs, const j2735_v2x_msgs__msg__ConnectsToList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // connect_to_list
  if (!j2735_v2x_msgs__msg__Connection__Sequence__are_equal(
      &(lhs->connect_to_list), &(rhs->connect_to_list)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__ConnectsToList__copy(
  const j2735_v2x_msgs__msg__ConnectsToList * input,
  j2735_v2x_msgs__msg__ConnectsToList * output)
{
  if (!input || !output) {
    return false;
  }
  // connect_to_list
  if (!j2735_v2x_msgs__msg__Connection__Sequence__copy(
      &(input->connect_to_list), &(output->connect_to_list)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__ConnectsToList *
j2735_v2x_msgs__msg__ConnectsToList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__ConnectsToList * msg = (j2735_v2x_msgs__msg__ConnectsToList *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__ConnectsToList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__ConnectsToList));
  bool success = j2735_v2x_msgs__msg__ConnectsToList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__ConnectsToList__destroy(j2735_v2x_msgs__msg__ConnectsToList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__ConnectsToList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__ConnectsToList__Sequence__init(j2735_v2x_msgs__msg__ConnectsToList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__ConnectsToList * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__ConnectsToList *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__ConnectsToList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__ConnectsToList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__ConnectsToList__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__ConnectsToList__Sequence__fini(j2735_v2x_msgs__msg__ConnectsToList__Sequence * array)
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
      j2735_v2x_msgs__msg__ConnectsToList__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__ConnectsToList__Sequence *
j2735_v2x_msgs__msg__ConnectsToList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__ConnectsToList__Sequence * array = (j2735_v2x_msgs__msg__ConnectsToList__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__ConnectsToList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__ConnectsToList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__ConnectsToList__Sequence__destroy(j2735_v2x_msgs__msg__ConnectsToList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__ConnectsToList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__ConnectsToList__Sequence__are_equal(const j2735_v2x_msgs__msg__ConnectsToList__Sequence * lhs, const j2735_v2x_msgs__msg__ConnectsToList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__ConnectsToList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__ConnectsToList__Sequence__copy(
  const j2735_v2x_msgs__msg__ConnectsToList__Sequence * input,
  j2735_v2x_msgs__msg__ConnectsToList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__ConnectsToList);
    j2735_v2x_msgs__msg__ConnectsToList * data =
      (j2735_v2x_msgs__msg__ConnectsToList *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__ConnectsToList__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__ConnectsToList__fini(&data[i]);
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
    if (!j2735_v2x_msgs__msg__ConnectsToList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
