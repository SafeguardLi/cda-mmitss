// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/BrakeAppliedStatus.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__BRAKE_APPLIED_STATUS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__BRAKE_APPLIED_STATUS__STRUCT_H_

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
  j2735_v2x_msgs__msg__BrakeAppliedStatus__UNAVAILABLE = 0
};

/// Constant 'LEFT_FRONT'.
enum
{
  j2735_v2x_msgs__msg__BrakeAppliedStatus__LEFT_FRONT = 1
};

/// Constant 'LEFT_REAR'.
enum
{
  j2735_v2x_msgs__msg__BrakeAppliedStatus__LEFT_REAR = 2
};

/// Constant 'RIGHT_FRONT'.
enum
{
  j2735_v2x_msgs__msg__BrakeAppliedStatus__RIGHT_FRONT = 3
};

/// Constant 'RIGHT_REAR'.
enum
{
  j2735_v2x_msgs__msg__BrakeAppliedStatus__RIGHT_REAR = 4
};

// Struct defined in msg/BrakeAppliedStatus in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__BrakeAppliedStatus
{
  uint8_t brake_applied_status;
} j2735_v2x_msgs__msg__BrakeAppliedStatus;

// Struct for a sequence of j2735_v2x_msgs__msg__BrakeAppliedStatus.
typedef struct j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence
{
  j2735_v2x_msgs__msg__BrakeAppliedStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__BrakeAppliedStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BRAKE_APPLIED_STATUS__STRUCT_H_
