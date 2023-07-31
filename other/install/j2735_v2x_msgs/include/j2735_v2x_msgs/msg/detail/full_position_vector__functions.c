// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from j2735_v2x_msgs:msg/FullPositionVector.idl
// generated code does not contain a copyright notice
#include "j2735_v2x_msgs/msg/detail/full_position_vector__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `utc_time`
#include "j2735_v2x_msgs/msg/detail/d_date_time__functions.h"
// Member `lon`
#include "j2735_v2x_msgs/msg/detail/longitude__functions.h"
// Member `lat`
#include "j2735_v2x_msgs/msg/detail/latitude__functions.h"
// Member `elevation`
#include "j2735_v2x_msgs/msg/detail/elevation__functions.h"
// Member `heading`
#include "j2735_v2x_msgs/msg/detail/heading__functions.h"
// Member `speed`
#include "j2735_v2x_msgs/msg/detail/transmission_and_speed__functions.h"
// Member `pos_accuracy`
#include "j2735_v2x_msgs/msg/detail/positional_accuracy__functions.h"
// Member `time_confidence`
#include "j2735_v2x_msgs/msg/detail/time_confidence__functions.h"
// Member `pos_confidence`
#include "j2735_v2x_msgs/msg/detail/position_confidence_set__functions.h"
// Member `speed_confidence`
#include "j2735_v2x_msgs/msg/detail/speedand_headingand_throttle_confidence__functions.h"

bool
j2735_v2x_msgs__msg__FullPositionVector__init(j2735_v2x_msgs__msg__FullPositionVector * msg)
{
  if (!msg) {
    return false;
  }
  // presence_vector
  // utc_time
  if (!j2735_v2x_msgs__msg__DDateTime__init(&msg->utc_time)) {
    j2735_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // lon
  if (!j2735_v2x_msgs__msg__Longitude__init(&msg->lon)) {
    j2735_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // lat
  if (!j2735_v2x_msgs__msg__Latitude__init(&msg->lat)) {
    j2735_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // elevation
  if (!j2735_v2x_msgs__msg__Elevation__init(&msg->elevation)) {
    j2735_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__Heading__init(&msg->heading)) {
    j2735_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // speed
  if (!j2735_v2x_msgs__msg__TransmissionAndSpeed__init(&msg->speed)) {
    j2735_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // pos_accuracy
  if (!j2735_v2x_msgs__msg__PositionalAccuracy__init(&msg->pos_accuracy)) {
    j2735_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // time_confidence
  if (!j2735_v2x_msgs__msg__TimeConfidence__init(&msg->time_confidence)) {
    j2735_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // pos_confidence
  if (!j2735_v2x_msgs__msg__PositionConfidenceSet__init(&msg->pos_confidence)) {
    j2735_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  // speed_confidence
  if (!j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__init(&msg->speed_confidence)) {
    j2735_v2x_msgs__msg__FullPositionVector__fini(msg);
    return false;
  }
  return true;
}

void
j2735_v2x_msgs__msg__FullPositionVector__fini(j2735_v2x_msgs__msg__FullPositionVector * msg)
{
  if (!msg) {
    return;
  }
  // presence_vector
  // utc_time
  j2735_v2x_msgs__msg__DDateTime__fini(&msg->utc_time);
  // lon
  j2735_v2x_msgs__msg__Longitude__fini(&msg->lon);
  // lat
  j2735_v2x_msgs__msg__Latitude__fini(&msg->lat);
  // elevation
  j2735_v2x_msgs__msg__Elevation__fini(&msg->elevation);
  // heading
  j2735_v2x_msgs__msg__Heading__fini(&msg->heading);
  // speed
  j2735_v2x_msgs__msg__TransmissionAndSpeed__fini(&msg->speed);
  // pos_accuracy
  j2735_v2x_msgs__msg__PositionalAccuracy__fini(&msg->pos_accuracy);
  // time_confidence
  j2735_v2x_msgs__msg__TimeConfidence__fini(&msg->time_confidence);
  // pos_confidence
  j2735_v2x_msgs__msg__PositionConfidenceSet__fini(&msg->pos_confidence);
  // speed_confidence
  j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__fini(&msg->speed_confidence);
}

bool
j2735_v2x_msgs__msg__FullPositionVector__are_equal(const j2735_v2x_msgs__msg__FullPositionVector * lhs, const j2735_v2x_msgs__msg__FullPositionVector * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // presence_vector
  if (lhs->presence_vector != rhs->presence_vector) {
    return false;
  }
  // utc_time
  if (!j2735_v2x_msgs__msg__DDateTime__are_equal(
      &(lhs->utc_time), &(rhs->utc_time)))
  {
    return false;
  }
  // lon
  if (!j2735_v2x_msgs__msg__Longitude__are_equal(
      &(lhs->lon), &(rhs->lon)))
  {
    return false;
  }
  // lat
  if (!j2735_v2x_msgs__msg__Latitude__are_equal(
      &(lhs->lat), &(rhs->lat)))
  {
    return false;
  }
  // elevation
  if (!j2735_v2x_msgs__msg__Elevation__are_equal(
      &(lhs->elevation), &(rhs->elevation)))
  {
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__Heading__are_equal(
      &(lhs->heading), &(rhs->heading)))
  {
    return false;
  }
  // speed
  if (!j2735_v2x_msgs__msg__TransmissionAndSpeed__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  // pos_accuracy
  if (!j2735_v2x_msgs__msg__PositionalAccuracy__are_equal(
      &(lhs->pos_accuracy), &(rhs->pos_accuracy)))
  {
    return false;
  }
  // time_confidence
  if (!j2735_v2x_msgs__msg__TimeConfidence__are_equal(
      &(lhs->time_confidence), &(rhs->time_confidence)))
  {
    return false;
  }
  // pos_confidence
  if (!j2735_v2x_msgs__msg__PositionConfidenceSet__are_equal(
      &(lhs->pos_confidence), &(rhs->pos_confidence)))
  {
    return false;
  }
  // speed_confidence
  if (!j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__are_equal(
      &(lhs->speed_confidence), &(rhs->speed_confidence)))
  {
    return false;
  }
  return true;
}

bool
j2735_v2x_msgs__msg__FullPositionVector__copy(
  const j2735_v2x_msgs__msg__FullPositionVector * input,
  j2735_v2x_msgs__msg__FullPositionVector * output)
{
  if (!input || !output) {
    return false;
  }
  // presence_vector
  output->presence_vector = input->presence_vector;
  // utc_time
  if (!j2735_v2x_msgs__msg__DDateTime__copy(
      &(input->utc_time), &(output->utc_time)))
  {
    return false;
  }
  // lon
  if (!j2735_v2x_msgs__msg__Longitude__copy(
      &(input->lon), &(output->lon)))
  {
    return false;
  }
  // lat
  if (!j2735_v2x_msgs__msg__Latitude__copy(
      &(input->lat), &(output->lat)))
  {
    return false;
  }
  // elevation
  if (!j2735_v2x_msgs__msg__Elevation__copy(
      &(input->elevation), &(output->elevation)))
  {
    return false;
  }
  // heading
  if (!j2735_v2x_msgs__msg__Heading__copy(
      &(input->heading), &(output->heading)))
  {
    return false;
  }
  // speed
  if (!j2735_v2x_msgs__msg__TransmissionAndSpeed__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  // pos_accuracy
  if (!j2735_v2x_msgs__msg__PositionalAccuracy__copy(
      &(input->pos_accuracy), &(output->pos_accuracy)))
  {
    return false;
  }
  // time_confidence
  if (!j2735_v2x_msgs__msg__TimeConfidence__copy(
      &(input->time_confidence), &(output->time_confidence)))
  {
    return false;
  }
  // pos_confidence
  if (!j2735_v2x_msgs__msg__PositionConfidenceSet__copy(
      &(input->pos_confidence), &(output->pos_confidence)))
  {
    return false;
  }
  // speed_confidence
  if (!j2735_v2x_msgs__msg__SpeedandHeadingandThrottleConfidence__copy(
      &(input->speed_confidence), &(output->speed_confidence)))
  {
    return false;
  }
  return true;
}

j2735_v2x_msgs__msg__FullPositionVector *
j2735_v2x_msgs__msg__FullPositionVector__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__FullPositionVector * msg = (j2735_v2x_msgs__msg__FullPositionVector *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__FullPositionVector), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(j2735_v2x_msgs__msg__FullPositionVector));
  bool success = j2735_v2x_msgs__msg__FullPositionVector__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
j2735_v2x_msgs__msg__FullPositionVector__destroy(j2735_v2x_msgs__msg__FullPositionVector * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    j2735_v2x_msgs__msg__FullPositionVector__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
j2735_v2x_msgs__msg__FullPositionVector__Sequence__init(j2735_v2x_msgs__msg__FullPositionVector__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__FullPositionVector * data = NULL;

  if (size) {
    data = (j2735_v2x_msgs__msg__FullPositionVector *)allocator.zero_allocate(size, sizeof(j2735_v2x_msgs__msg__FullPositionVector), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = j2735_v2x_msgs__msg__FullPositionVector__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        j2735_v2x_msgs__msg__FullPositionVector__fini(&data[i - 1]);
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
j2735_v2x_msgs__msg__FullPositionVector__Sequence__fini(j2735_v2x_msgs__msg__FullPositionVector__Sequence * array)
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
      j2735_v2x_msgs__msg__FullPositionVector__fini(&array->data[i]);
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

j2735_v2x_msgs__msg__FullPositionVector__Sequence *
j2735_v2x_msgs__msg__FullPositionVector__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  j2735_v2x_msgs__msg__FullPositionVector__Sequence * array = (j2735_v2x_msgs__msg__FullPositionVector__Sequence *)allocator.allocate(sizeof(j2735_v2x_msgs__msg__FullPositionVector__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = j2735_v2x_msgs__msg__FullPositionVector__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
j2735_v2x_msgs__msg__FullPositionVector__Sequence__destroy(j2735_v2x_msgs__msg__FullPositionVector__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    j2735_v2x_msgs__msg__FullPositionVector__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
j2735_v2x_msgs__msg__FullPositionVector__Sequence__are_equal(const j2735_v2x_msgs__msg__FullPositionVector__Sequence * lhs, const j2735_v2x_msgs__msg__FullPositionVector__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!j2735_v2x_msgs__msg__FullPositionVector__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
j2735_v2x_msgs__msg__FullPositionVector__Sequence__copy(
  const j2735_v2x_msgs__msg__FullPositionVector__Sequence * input,
  j2735_v2x_msgs__msg__FullPositionVector__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(j2735_v2x_msgs__msg__FullPositionVector);
    j2735_v2x_msgs__msg__FullPositionVector * data =
      (j2735_v2x_msgs__msg__FullPositionVector *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!j2735_v2x_msgs__msg__FullPositionVector__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          j2735_v2x_msgs__msg__FullPositionVector__fini(&data[i]);
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
    if (!j2735_v2x_msgs__msg__FullPositionVector__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
