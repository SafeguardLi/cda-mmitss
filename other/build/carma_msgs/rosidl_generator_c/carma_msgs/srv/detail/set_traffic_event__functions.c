// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from carma_msgs:srv/SetTrafficEvent.idl
// generated code does not contain a copyright notice
#include "carma_msgs/srv/detail/set_traffic_event__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
carma_msgs__srv__SetTrafficEvent_Request__init(carma_msgs__srv__SetTrafficEvent_Request * msg)
{
  if (!msg) {
    return false;
  }
  // up_track
  // down_track
  // minimum_gap
  // advisory_speed
  return true;
}

void
carma_msgs__srv__SetTrafficEvent_Request__fini(carma_msgs__srv__SetTrafficEvent_Request * msg)
{
  if (!msg) {
    return;
  }
  // up_track
  // down_track
  // minimum_gap
  // advisory_speed
}

bool
carma_msgs__srv__SetTrafficEvent_Request__are_equal(const carma_msgs__srv__SetTrafficEvent_Request * lhs, const carma_msgs__srv__SetTrafficEvent_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // up_track
  if (lhs->up_track != rhs->up_track) {
    return false;
  }
  // down_track
  if (lhs->down_track != rhs->down_track) {
    return false;
  }
  // minimum_gap
  if (lhs->minimum_gap != rhs->minimum_gap) {
    return false;
  }
  // advisory_speed
  if (lhs->advisory_speed != rhs->advisory_speed) {
    return false;
  }
  return true;
}

bool
carma_msgs__srv__SetTrafficEvent_Request__copy(
  const carma_msgs__srv__SetTrafficEvent_Request * input,
  carma_msgs__srv__SetTrafficEvent_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // up_track
  output->up_track = input->up_track;
  // down_track
  output->down_track = input->down_track;
  // minimum_gap
  output->minimum_gap = input->minimum_gap;
  // advisory_speed
  output->advisory_speed = input->advisory_speed;
  return true;
}

carma_msgs__srv__SetTrafficEvent_Request *
carma_msgs__srv__SetTrafficEvent_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__SetTrafficEvent_Request * msg = (carma_msgs__srv__SetTrafficEvent_Request *)allocator.allocate(sizeof(carma_msgs__srv__SetTrafficEvent_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_msgs__srv__SetTrafficEvent_Request));
  bool success = carma_msgs__srv__SetTrafficEvent_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_msgs__srv__SetTrafficEvent_Request__destroy(carma_msgs__srv__SetTrafficEvent_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_msgs__srv__SetTrafficEvent_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_msgs__srv__SetTrafficEvent_Request__Sequence__init(carma_msgs__srv__SetTrafficEvent_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__SetTrafficEvent_Request * data = NULL;

  if (size) {
    data = (carma_msgs__srv__SetTrafficEvent_Request *)allocator.zero_allocate(size, sizeof(carma_msgs__srv__SetTrafficEvent_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_msgs__srv__SetTrafficEvent_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_msgs__srv__SetTrafficEvent_Request__fini(&data[i - 1]);
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
carma_msgs__srv__SetTrafficEvent_Request__Sequence__fini(carma_msgs__srv__SetTrafficEvent_Request__Sequence * array)
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
      carma_msgs__srv__SetTrafficEvent_Request__fini(&array->data[i]);
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

carma_msgs__srv__SetTrafficEvent_Request__Sequence *
carma_msgs__srv__SetTrafficEvent_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__SetTrafficEvent_Request__Sequence * array = (carma_msgs__srv__SetTrafficEvent_Request__Sequence *)allocator.allocate(sizeof(carma_msgs__srv__SetTrafficEvent_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_msgs__srv__SetTrafficEvent_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_msgs__srv__SetTrafficEvent_Request__Sequence__destroy(carma_msgs__srv__SetTrafficEvent_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_msgs__srv__SetTrafficEvent_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_msgs__srv__SetTrafficEvent_Request__Sequence__are_equal(const carma_msgs__srv__SetTrafficEvent_Request__Sequence * lhs, const carma_msgs__srv__SetTrafficEvent_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_msgs__srv__SetTrafficEvent_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_msgs__srv__SetTrafficEvent_Request__Sequence__copy(
  const carma_msgs__srv__SetTrafficEvent_Request__Sequence * input,
  carma_msgs__srv__SetTrafficEvent_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_msgs__srv__SetTrafficEvent_Request);
    carma_msgs__srv__SetTrafficEvent_Request * data =
      (carma_msgs__srv__SetTrafficEvent_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_msgs__srv__SetTrafficEvent_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_msgs__srv__SetTrafficEvent_Request__fini(&data[i]);
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
    if (!carma_msgs__srv__SetTrafficEvent_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
carma_msgs__srv__SetTrafficEvent_Response__init(carma_msgs__srv__SetTrafficEvent_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
carma_msgs__srv__SetTrafficEvent_Response__fini(carma_msgs__srv__SetTrafficEvent_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
carma_msgs__srv__SetTrafficEvent_Response__are_equal(const carma_msgs__srv__SetTrafficEvent_Response * lhs, const carma_msgs__srv__SetTrafficEvent_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
carma_msgs__srv__SetTrafficEvent_Response__copy(
  const carma_msgs__srv__SetTrafficEvent_Response * input,
  carma_msgs__srv__SetTrafficEvent_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

carma_msgs__srv__SetTrafficEvent_Response *
carma_msgs__srv__SetTrafficEvent_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__SetTrafficEvent_Response * msg = (carma_msgs__srv__SetTrafficEvent_Response *)allocator.allocate(sizeof(carma_msgs__srv__SetTrafficEvent_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(carma_msgs__srv__SetTrafficEvent_Response));
  bool success = carma_msgs__srv__SetTrafficEvent_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
carma_msgs__srv__SetTrafficEvent_Response__destroy(carma_msgs__srv__SetTrafficEvent_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    carma_msgs__srv__SetTrafficEvent_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
carma_msgs__srv__SetTrafficEvent_Response__Sequence__init(carma_msgs__srv__SetTrafficEvent_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__SetTrafficEvent_Response * data = NULL;

  if (size) {
    data = (carma_msgs__srv__SetTrafficEvent_Response *)allocator.zero_allocate(size, sizeof(carma_msgs__srv__SetTrafficEvent_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = carma_msgs__srv__SetTrafficEvent_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        carma_msgs__srv__SetTrafficEvent_Response__fini(&data[i - 1]);
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
carma_msgs__srv__SetTrafficEvent_Response__Sequence__fini(carma_msgs__srv__SetTrafficEvent_Response__Sequence * array)
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
      carma_msgs__srv__SetTrafficEvent_Response__fini(&array->data[i]);
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

carma_msgs__srv__SetTrafficEvent_Response__Sequence *
carma_msgs__srv__SetTrafficEvent_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  carma_msgs__srv__SetTrafficEvent_Response__Sequence * array = (carma_msgs__srv__SetTrafficEvent_Response__Sequence *)allocator.allocate(sizeof(carma_msgs__srv__SetTrafficEvent_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = carma_msgs__srv__SetTrafficEvent_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
carma_msgs__srv__SetTrafficEvent_Response__Sequence__destroy(carma_msgs__srv__SetTrafficEvent_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    carma_msgs__srv__SetTrafficEvent_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
carma_msgs__srv__SetTrafficEvent_Response__Sequence__are_equal(const carma_msgs__srv__SetTrafficEvent_Response__Sequence * lhs, const carma_msgs__srv__SetTrafficEvent_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!carma_msgs__srv__SetTrafficEvent_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
carma_msgs__srv__SetTrafficEvent_Response__Sequence__copy(
  const carma_msgs__srv__SetTrafficEvent_Response__Sequence * input,
  carma_msgs__srv__SetTrafficEvent_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(carma_msgs__srv__SetTrafficEvent_Response);
    carma_msgs__srv__SetTrafficEvent_Response * data =
      (carma_msgs__srv__SetTrafficEvent_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!carma_msgs__srv__SetTrafficEvent_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          carma_msgs__srv__SetTrafficEvent_Response__fini(&data[i]);
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
    if (!carma_msgs__srv__SetTrafficEvent_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
