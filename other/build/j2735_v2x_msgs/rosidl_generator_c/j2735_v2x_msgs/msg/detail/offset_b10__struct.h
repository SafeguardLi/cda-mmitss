// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/OffsetB10.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B10__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B10__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFFSET_MIN'.
enum
{
  j2735_v2x_msgs__msg__OffsetB10__OFFSET_MIN = -511
};

/// Constant 'OFFSET_MAX'.
enum
{
  j2735_v2x_msgs__msg__OffsetB10__OFFSET_MAX = 511
};

/// Constant 'OFFSET_UNKNOWN'.
enum
{
  j2735_v2x_msgs__msg__OffsetB10__OFFSET_UNKNOWN = -512
};

// Struct defined in msg/OffsetB10 in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__OffsetB10
{
  int16_t offset;
} j2735_v2x_msgs__msg__OffsetB10;

// Struct for a sequence of j2735_v2x_msgs__msg__OffsetB10.
typedef struct j2735_v2x_msgs__msg__OffsetB10__Sequence
{
  j2735_v2x_msgs__msg__OffsetB10 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__OffsetB10__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__OFFSET_B10__STRUCT_H_
