// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/BSM.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/bsm__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `core_data`
#include "j2735_v2x_msgs/msg/detail/bsm_core_data__functions.h"
// Member `part_ii`
#include "j2735_v2x_msgs/msg/detail/bsm_part_ii_extension__functions.h"
// Member `regional`
#include "j2735_v2x_msgs/msg/detail/bsm_regional_extension__functions.h"

bool
j2735_v2x_msgs__msg__BSM__init(j2735_v2x_msgs__msg__BSM * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    j2735_v2x_msgs__msg__BSM__fini(msg);
    return false;
  }
  // core_data
  if (!j2735_v2x_msgs__msg__BSMCoreData__init(&msg->core_data)) {
    j2735_v2x_msgs__msg__BSM__fini(msg);
    return false;
  }
  // presence_vector
  // part_ii
  if (!j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence__init(&msg->part_ii, 0)) {
    j2735_v2x_msgs__msg__BSM__fini(msg);
    return false;
  }
  // regional
  if (!j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence__init(&msg->regional, 0)) {
    j2735_v2x_msgs__msg__BSM__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__BSM__fini(j2735_v2x_msgs__msg__BSM * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // core_data
  j2735_v2x_msgs__msg__BSMCoreData__fini(&msg->core_data);
  // presence_vector
  // part_ii
  j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence__fini(&msg->part_ii);
  // regional
  j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence__fini(&msg->regional);
}

bool
j2735_v2x_msgs__msg__BSM__are_equal(const j2735_v2x_msgs__msg__BSM * lhs, const j2735_v2x_msgs__msg__BSM * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
    return false;
  }
  // core_data
  if (!j2735_v2x_msgs__msg__BSMCoreData__are_equal(
      &(lhs->core_data), &(rhs->core_data)))
  {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // part_ii
  if (!j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence__are_equal(
      &(lhs->part_ii), &(rhs->part_ii)))
  {
    return false;
  }
  // regional
  if (!j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence__are_equal(
      &(lhs->regional), &(rhs->regional)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__BSM__copy(
  const j2735_v2x_msgs__msg__BSM * input,
  j2735_v2x_msgs__msg__BSM * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
    return false;
  }
  // core_data
  if (!j2735_v2x_msgs__msg__BSMCoreData__copy(
      &(input->core_data), &(output->core_data)))
  {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // part_ii
  if (!j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence__copy(
      &(input->part_ii), &(output->part_ii)))
  {
    return false;
  }
  // regional
  if (!j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence__copy(
      &(input->regional), &(output->regional)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__BSM *
j2735_v2x_msgs__msg__BSM__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BSM * msg = (j2735_v2x_msgs__msg__BSM *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__BSM), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__BSM));
  bool success = j2735_v2x_msgs__msg__BSM__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__BSM__destroy(j2735_v2x_msgs__msg__BSM * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__BSM__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__BSM__Sequence__init(j2735_v2x_msgs__msg__BSM__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BSM * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__BSM *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__BSM), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__BSM__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__BSM__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__BSM__Sequence__fini(j2735_v2x_msgs__msg__BSM__Sequence * array)
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
      j2735_v2x_msgs__msg__BSM__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__BSM__Sequence *
j2735_v2x_msgs__msg__BSM__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__BSM__Sequence * array = (j2735_v2x_msgs__msg__BSM__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__BSM__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__BSM__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__BSM__Sequence__destroy(j2735_v2x_msgs__msg__BSM__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__BSM__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__BSM__Sequence__are_equal(const j2735_v2x_msgs__msg__BSM__Sequence * lhs, const j2735_v2x_msgs__msg__BSM__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__BSM__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__BSM__Sequence__copy(
  const j2735_v2x_msgs__msg__BSM__Sequence * input,
  j2735_v2x_msgs__msg__BSM__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__BSM);
    j2735_v2x_msgs__msg__BSM * data =
      (j2735_v2x_msgs__msg__BSM *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__BSM__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__BSM__fini(&data[i]);
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
    if (!j2735_v2x_msgs__msg__BSM__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
