// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/BrakeBoostApplied.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__BRAKE_BOOST_APPLIED__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__BRAKE_BOOST_APPLIED__STRUCT_H_

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
  j2735_v2x_msgs__msg__BrakeBoostApplied__UNAVAILABLE = 0
};

/// Constant 'OFF'.
enum
{
  j2735_v2x_msgs__msg__BrakeBoostApplied__OFF = 1
};

/// Constant 'ON'.
enum
{
  j2735_v2x_msgs__msg__BrakeBoostApplied__ON = 2
};

// Struct defined in msg/BrakeBoostApplied in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__BrakeBoostApplied
{
  uint8_t brake_boost_applied;
} j2735_v2x_msgs__msg__BrakeBoostApplied;

// Struct for a sequence of j2735_v2x_msgs__msg__BrakeBoostApplied.
typedef struct j2735_v2x_msgs__msg__BrakeBoostApplied__Sequence
{
  j2735_v2x_msgs__msg__BrakeBoostApplied * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__BrakeBoostApplied__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BRAKE_BOOST_APPLIED__STRUCT_H_
