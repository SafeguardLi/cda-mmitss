// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_v2x_msgs:msg/TrailerData.idl
// generated code does not contain a copyright notice
#include "carma_v2x_msgs/msg/detail/trailer_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `connection`
#include "carma_v2x_msgs/msg/detail/pivot_point_description__functions.h"
// Member `units`
#include "carma_v2x_msgs/msg/detail/trailer_unit_description_list__functions.h"

bool
carma_v2x_msgs__msg__TrailerData__init(carma_v2x_msgs__msg__TrailerData * msg)
{
  if (!msg) {
    return false;
  }
  // ssp_index
  // connection
  if (!carma_v2x_msgs__msg__PivotPointDescription__init(&msg->connection)) {
    carma_v2x_msgs__msg__TrailerData__fini(msg);
    return false;
  }
  // units
  if (!carma_v2x_msgs__msg__TrailerUnitDescriptionList__init(&msg->units)) {
    carma_v2x_msgs__msg__TrailerData__fini(msg);
    return false;
  }
  return true;
}

void
carma_v2x_msgs__msg__TrailerData__fini(carma_v2x_msgs__msg__TrailerData * msg)
{
  if (!msg) {
    return;
  }
  // ssp_index
  // connection
  carma_v2x_msgs__msg__PivotPointDescription__fini(&msg->connection);
  // units
  carma_v2x_msgs__msg__TrailerUnitDescriptionList__fini(&msg->units);
}

bool
carma_v2x_msgs__msg__TrailerData__are_equal(const carma_v2x_msgs__msg__TrailerData * lhs, const carma_v2x_msgs__msg__TrailerData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // ssp_index
  if (lhs->ssp_index != rhs->ssp_index) {
    return false;
  }
  // connection
  if (!carma_v2x_msgs__msg__PivotPointDescription__are_equal(
      &(lhs->connection), &(rhs->connection)))
  {
    return false;
  }
  // units
  if (!carma_v2x_msgs__msg__TrailerUnitDescriptionList__are_equal(
      &(lhs->units), &(rhs->units)))
  {
    return false;
  }
  return true;
}

bool
carma_v2x_msgs__msg__TrailerData__copy(
  const carma_v2x_msgs__msg__TrailerData * input,
  carma_v2x_msgs__msg__TrailerData * output)
{
  if (!input || !output) {
    return false;
  }
  // ssp_index
  output->ssp_index = input->ssp_index;
  // connection
  if (!carma_v2x_msgs__msg__PivotPointDescription__copy(
      &(input->connection), &(output->connection)))
  {
    return false;
  }
  // units
  if (!carma_v2x_msgs__msg__TrailerUnitDescriptionList__copy(
      &(input->units), &(output->units)))
  {
    return false;
  }
  return true;
}

carma_v2x_msgs__msg__TrailerData *
carma_v2x_msgs__msg__TrailerData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrailerData * msg = (carma_v2x_msgs__msg__TrailerData *)allocator.allocate(sizeof(carma_v2x_msgs__msg__TrailerData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_v2x_msgs__msg__TrailerData));
  bool success = carma_v2x_msgs__msg__TrailerData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_v2x_msgs__msg__TrailerData__destroy(carma_v2x_msgs__msg__TrailerData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_v2x_msgs__msg__TrailerData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_v2x_msgs__msg__TrailerData__Sequence__init(carma_v2x_msgs__msg__TrailerData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrailerData * data = NULL;

  if (size) {
    data = (carma_v2x_msgs__msg__TrailerData *)allocator.zero_allocate(size, sizeof(carma_v2x_msgs__msg__TrailerData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_v2x_msgs__msg__TrailerData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_v2x_msgs__msg__TrailerData__fini(&data[i - 1]);
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
carma_v2x_msgs__msg__TrailerData__Sequence__fini(carma_v2x_msgs__msg__TrailerData__Sequence * array)
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
      carma_v2x_msgs__msg__TrailerData__fini(&array->data[i]);
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

carma_v2x_msgs__msg__TrailerData__Sequence *
carma_v2x_msgs__msg__TrailerData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_v2x_msgs__msg__TrailerData__Sequence * array = (carma_v2x_msgs__msg__TrailerData__Sequence *)allocator.allocate(sizeof(carma_v2x_msgs__msg__TrailerData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_v2x_msgs__msg__TrailerData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_v2x_msgs__msg__TrailerData__Sequence__destroy(carma_v2x_msgs__msg__TrailerData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_v2x_msgs__msg__TrailerData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_v2x_msgs__msg__TrailerData__Sequence__are_equal(const carma_v2x_msgs__msg__TrailerData__Sequence * lhs, const carma_v2x_msgs__msg__TrailerData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_v2x_msgs__msg__TrailerData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_v2x_msgs__msg__TrailerData__Sequence__copy(
  const carma_v2x_msgs__msg__TrailerData__Sequence * input,
  carma_v2x_msgs__msg__TrailerData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_v2x_msgs__msg__TrailerData);
    carma_v2x_msgs__msg__TrailerData * data =
      (carma_v2x_msgs__msg__TrailerData *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_v2x_msgs__msg__TrailerData__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_v2x_msgs__msg__TrailerData__fini(&data[i]);
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
    if (!carma_v2x_msgs__msg__TrailerData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
