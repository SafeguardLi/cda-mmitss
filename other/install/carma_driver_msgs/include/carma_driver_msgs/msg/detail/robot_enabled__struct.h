// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_driver_msgs:msg/RobotEnabled.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__ROBOT_ENABLED__STRUCT_H_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__ROBOT_ENABLED__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/RobotEnabled in the package carma_driver_msgs.
typedef struct carma_driver_msgs__msg__RobotEnabled
{
  bool robot_active;
  bool robot_enabled;
  double torque;
  bool torque_validity;
  double brake_decel;
  bool brake_decel_validity;
  double throttle_effort;
  bool throttle_effort_validity;
  double braking_effort;
  bool braking_effort_validity;
} carma_driver_msgs__msg__RobotEnabled;

// Struct for a sequence of carma_driver_msgs__msg__RobotEnabled.
typedef struct carma_driver_msgs__msg__RobotEnabled__Sequence
{
  carma_driver_msgs__msg__RobotEnabled * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__msg__RobotEnabled__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__ROBOT_ENABLED__STRUCT_H_
