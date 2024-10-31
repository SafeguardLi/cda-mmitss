// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from carma_driver_msgs:msg/DriverStatus.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__MSG__DETAIL__DRIVER_STATUS__STRUCT_H_
#define CARMA_DRIVER_MSGS__MSG__DETAIL__DRIVER_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'OFF'.
enum
{
  carma_driver_msgs__msg__DriverStatus__OFF = 0
};

/// Constant 'OPERATIONAL'.
enum
{
  carma_driver_msgs__msg__DriverStatus__OPERATIONAL = 1
};

/// Constant 'DEGRADED'.
enum
{
  carma_driver_msgs__msg__DriverStatus__DEGRADED = 2
};

/// Constant 'FAULT'.
enum
{
  carma_driver_msgs__msg__DriverStatus__FAULT = 3
};

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

// Struct defined in msg/DriverStatus in the package carma_driver_msgs.
typedef struct carma_driver_msgs__msg__DriverStatus
{
  rosidl_runtime_c__String name;
  uint8_t status;
  bool can;
  bool radar;
  bool gnss;
  bool lidar;
  bool roadway_sensor;
  bool comms;
  bool controller;
  bool camera;
  bool imu;
  bool trailer_angle_sensor;
  bool lightbar;
} carma_driver_msgs__msg__DriverStatus;

// Struct for a sequence of carma_driver_msgs__msg__DriverStatus.
typedef struct carma_driver_msgs__msg__DriverStatus__Sequence
{
  carma_driver_msgs__msg__DriverStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} carma_driver_msgs__msg__DriverStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__MSG__DETAIL__DRIVER_STATUS__STRUCT_H_
