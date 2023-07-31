// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/VertOffsetB07.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__STRUCT_H_

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
  j2735_v2x_msgs__msg__VertOffsetB07__OFFSET_MIN = -63
};

/// Constant 'OFFSET_MAX'.
enum
{
  j2735_v2x_msgs__msg__VertOffsetB07__OFFSET_MAX = 63
};

/// Constant 'OFFSET_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__VertOffsetB07__OFFSET_UNAVAILABLE = -64
};

// Struct defined in msg/VertOffsetB07 in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__VertOffsetB07
{
  int8_t offset;
} j2735_v2x_msgs__msg__VertOffsetB07;

// Struct for a sequence of j2735_v2x_msgs__msg__VertOffsetB07.
typedef struct j2735_v2x_msgs__msg__VertOffsetB07__Sequence
{
  j2735_v2x_msgs__msg__VertOffsetB07 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__VertOffsetB07__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VERT_OFFSET_B07__STRUCT_H_
