// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TimeChangeDetails.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TimeChangeDetails in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__TimeChangeDetails
{
  uint16_t start_time;
  bool start_time_exists;
  uint16_t min_end_time;
  uint16_t max_end_time;
  bool max_end_time_exists;
  uint16_t likely_time;
  bool likely_time_exists;
  uint8_t confidence;
  bool confidence_exists;
  uint16_t next_time;
  bool next_time_exists;
} j2735_v2x_msgs__msg__TimeChangeDetails;

// Struct for a sequence of j2735_v2x_msgs__msg__TimeChangeDetails.
typedef struct j2735_v2x_msgs__msg__TimeChangeDetails__Sequence
{
  j2735_v2x_msgs__msg__TimeChangeDetails * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TimeChangeDetails__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TIME_CHANGE_DETAILS__STRUCT_H_
