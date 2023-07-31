// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/PathNode.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__PATH_NODE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__PATH_NODE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/PathNode in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__PathNode
{
  int16_t x;
  int16_t y;
  int16_t z;
  bool z_exists;
  int8_t width;
  bool width_exists;
} j2735_v2x_msgs__msg__PathNode;

// Struct for a sequence of j2735_v2x_msgs__msg__PathNode.
typedef struct j2735_v2x_msgs__msg__PathNode__Sequence
{
  j2735_v2x_msgs__msg__PathNode * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__PathNode__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__PATH_NODE__STRUCT_H_
