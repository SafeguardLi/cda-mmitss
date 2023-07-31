// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/DisabledVehicle.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/disabled_vehicle__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `status_details`
#include "j2735_v2x_msgs/msg/detail/iti_scodes__functions.h"
// Member `location_details`
#include "j2735_v2x_msgs/msg/detail/itis_generic_locations__functions.h"

bool
j2735_v2x_msgs__msg__DisabledVehicle__init(j2735_v2x_msgs__msg__DisabledVehicle * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // status_details
  if (!j2735_v2x_msgs__msg__ITIScodes__init(&msg->status_details)) {
    j2735_v2x_msgs__msg__DisabledVehicle__fini(msg);
    return false;
  }
  // location_details
  if (!j2735_v2x_msgs__msg__ITISGenericLocations__init(&msg->location_details)) {
    j2735_v2x_msgs__msg__DisabledVehicle__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__DisabledVehicle__fini(j2735_v2x_msgs__msg__DisabledVehicle * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // status_details
  j2735_v2x_msgs__msg__ITIScodes__fini(&msg->status_details);
  // location_details
  j2735_v2x_msgs__msg__ITISGenericLocations__fini(&msg->location_details);
}

bool
j2735_v2x_msgs__msg__DisabledVehicle__are_equal(const j2735_v2x_msgs__msg__DisabledVehicle * lhs, const j2735_v2x_msgs__msg__DisabledVehicle * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // status_details
  if (!j2735_v2x_msgs__msg__ITIScodes__are_equal(
      &(lhs->status_details), &(rhs->status_details)))
  {
    return false;
  }
  // location_details
  if (!j2735_v2x_msgs__msg__ITISGenericLocations__are_equal(
      &(lhs->location_details), &(rhs->location_details)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__DisabledVehicle__copy(
  const j2735_v2x_msgs__msg__DisabledVehicle * input,
  j2735_v2x_msgs__msg__DisabledVehicle * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // status_details
  if (!j2735_v2x_msgs__msg__ITIScodes__copy(
      &(input->status_details), &(output->status_details)))
  {
    return false;
  }
  // location_details
  if (!j2735_v2x_msgs__msg__ITISGenericLocations__copy(
      &(input->location_details), &(output->location_details)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__DisabledVehicle *
j2735_v2x_msgs__msg__DisabledVehicle__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__DisabledVehicle * msg = (j2735_v2x_msgs__msg__DisabledVehicle *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__DisabledVehicle), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__DisabledVehicle));
  bool success = j2735_v2x_msgs__msg__DisabledVehicle__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__DisabledVehicle__destroy(j2735_v2x_msgs__msg__DisabledVehicle * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__DisabledVehicle__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__DisabledVehicle__Sequence__init(j2735_v2x_msgs__msg__DisabledVehicle__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__DisabledVehicle * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__DisabledVehicle *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__DisabledVehicle), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__DisabledVehicle__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__DisabledVehicle__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__DisabledVehicle__Sequence__fini(j2735_v2x_msgs__msg__DisabledVehicle__Sequence * array)
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
      j2735_v2x_msgs__msg__DisabledVehicle__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__DisabledVehicle__Sequence *
j2735_v2x_msgs__msg__DisabledVehicle__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__DisabledVehicle__Sequence * array = (j2735_v2x_msgs__msg__DisabledVehicle__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__DisabledVehicle__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__DisabledVehicle__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__DisabledVehicle__Sequence__destroy(j2735_v2x_msgs__msg__DisabledVehicle__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__DisabledVehicle__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__DisabledVehicle__Sequence__are_equal(const j2735_v2x_msgs__msg__DisabledVehicle__Sequence * lhs, const j2735_v2x_msgs__msg__DisabledVehicle__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__DisabledVehicle__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__DisabledVehicle__Sequence__copy(
  const j2735_v2x_msgs__msg__DisabledVehicle__Sequence * input,
  j2735_v2x_msgs__msg__DisabledVehicle__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__DisabledVehicle);
    j2735_v2x_msgs__msg__DisabledVehicle * data =
      (j2735_v2x_msgs__msg__DisabledVehicle *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__DisabledVehicle__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__DisabledVehicle__fini(&data[i]);
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
    if (!j2735_v2x_msgs__msg__DisabledVehicle__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
