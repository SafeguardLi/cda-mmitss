// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/SirenInUse.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__SIREN_IN_USE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__SIREN_IN_USE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__SirenInUse__UNAVAILABLE = 0
};

/// Constant 'NOT_IN_USE'.
enum
{
  j2735_v2x_msgs__msg__SirenInUse__NOT_IN_USE = 1
};

/// Constant 'IN_USE'.
enum
{
  j2735_v2x_msgs__msg__SirenInUse__IN_USE = 2
};

/// Constant 'RESERVED'.
enum
{
  j2735_v2x_msgs__msg__SirenInUse__RESERVED = 3
};

// Struct defined in msg/SirenInUse in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__SirenInUse
{
  uint8_t siren_in_use;
} j2735_v2x_msgs__msg__SirenInUse;

// Struct for a sequence of j2735_v2x_msgs__msg__SirenInUse.
typedef struct j2735_v2x_msgs__msg__SirenInUse__Sequence
{
  j2735_v2x_msgs__msg__SirenInUse * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__SirenInUse__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__SIREN_IN_USE__STRUCT_H_
