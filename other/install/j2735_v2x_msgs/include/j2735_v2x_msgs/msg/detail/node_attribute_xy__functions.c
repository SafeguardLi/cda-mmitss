// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/NodeAttributeXY.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/node_attribute_xy__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
j2735_v2x_msgs__msg__NodeAttributeXY__init(j2735_v2x_msgs__msg__NodeAttributeXY * msg)
{
  if (!msg) {
    return false;
  }
  // node_attribute_xy
  return true;
}

void
j2735_v2x_msgs__msg__NodeAttributeXY__fini(j2735_v2x_msgs__msg__NodeAttributeXY * msg)
{
  if (!msg) {
    return;
  }
  // node_attribute_xy
}

bool
j2735_v2x_msgs__msg__NodeAttributeXY__are_equal(const j2735_v2x_msgs__msg__NodeAttributeXY * lhs, const j2735_v2x_msgs__msg__NodeAttributeXY * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // node_attribute_xy
  if (lhs->node_attribute_xy != rhs->node_attribute_xy) {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__NodeAttributeXY__copy(
  const j2735_v2x_msgs__msg__NodeAttributeXY * input,
  j2735_v2x_msgs__msg__NodeAttributeXY * output)
{
  if (!input || !output) {
    return false;
  }
  // node_attribute_xy
  output->node_attribute_xy = input->node_attribute_xy;
  return true;
}

j2735_v2x_msgs__msg__NodeAttributeXY *
j2735_v2x_msgs__msg__NodeAttributeXY__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__NodeAttributeXY * msg = (j2735_v2x_msgs__msg__NodeAttributeXY *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__NodeAttributeXY), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__NodeAttributeXY));
  bool success = j2735_v2x_msgs__msg__NodeAttributeXY__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__NodeAttributeXY__destroy(j2735_v2x_msgs__msg__NodeAttributeXY * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__NodeAttributeXY__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__init(j2735_v2x_msgs__msg__NodeAttributeXY__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__NodeAttributeXY * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__NodeAttributeXY *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__NodeAttributeXY), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__NodeAttributeXY__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__NodeAttributeXY__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__fini(j2735_v2x_msgs__msg__NodeAttributeXY__Sequence * array)
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
      j2735_v2x_msgs__msg__NodeAttributeXY__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__NodeAttributeXY__Sequence *
j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__NodeAttributeXY__Sequence * array = (j2735_v2x_msgs__msg__NodeAttributeXY__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__NodeAttributeXY__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__destroy(j2735_v2x_msgs__msg__NodeAttributeXY__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__are_equal(const j2735_v2x_msgs__msg__NodeAttributeXY__Sequence * lhs, const j2735_v2x_msgs__msg__NodeAttributeXY__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__NodeAttributeXY__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__NodeAttributeXY__Sequence__copy(
  const j2735_v2x_msgs__msg__NodeAttributeXY__Sequence * input,
  j2735_v2x_msgs__msg__NodeAttributeXY__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__NodeAttributeXY);
    j2735_v2x_msgs__msg__NodeAttributeXY * data =
      (j2735_v2x_msgs__msg__NodeAttributeXY *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__NodeAttributeXY__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__NodeAttributeXY__fini(&data[i]);
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
    if (!j2735_v2x_msgs__msg__NodeAttributeXY__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
