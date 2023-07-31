// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/OffsetXaxis.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__OFFSET_XAXIS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__OFFSET_XAXIS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SMALL'.
enum
{
  j2735_v2x_msgs__msg__OffsetXaxis__SMALL = 0
};

/// Constant 'LARGE'.
enum
{
  j2735_v2x_msgs__msg__OffsetXaxis__LARGE = 1
};

// Struct defined in msg/OffsetXaxis in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__OffsetXaxis
{
  uint8_t choice;
  int16_t small;
  int16_t large;
} j2735_v2x_msgs__msg__OffsetXaxis;

// Struct for a sequence of j2735_v2x_msgs__msg__OffsetXaxis.
typedef struct j2735_v2x_msgs__msg__OffsetXaxis__Sequence
{
  j2735_v2x_msgs__msg__OffsetXaxis * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__OffsetXaxis__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OFFSET_XAXIS__STRUCT_H_
