// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/WiperStatus.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__WIPER_STATUS__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__WIPER_STATUS__STRUCT_H_

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
  j2735_v2x_msgs__msg__WiperStatus__UNAVAILABLE = 0
};

/// Constant 'OFF'.
enum
{
  j2735_v2x_msgs__msg__WiperStatus__OFF = 1
};

/// Constant 'INTERMITTENT'.
enum
{
  j2735_v2x_msgs__msg__WiperStatus__INTERMITTENT = 2
};

/// Constant 'LOW'.
enum
{
  j2735_v2x_msgs__msg__WiperStatus__LOW = 3
};

/// Constant 'HIGH'.
enum
{
  j2735_v2x_msgs__msg__WiperStatus__HIGH = 4
};

/// Constant 'WASHER_IN_USE'.
enum
{
  j2735_v2x_msgs__msg__WiperStatus__WASHER_IN_USE = 5
};

/// Constant 'AUTOMATIC_PRESENT'.
enum
{
  j2735_v2x_msgs__msg__WiperStatus__AUTOMATIC_PRESENT = 6
};

// Struct defined in msg/WiperStatus in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__WiperStatus
{
  uint8_t wiper_status;
} j2735_v2x_msgs__msg__WiperStatus;

// Struct for a sequence of j2735_v2x_msgs__msg__WiperStatus.
typedef struct j2735_v2x_msgs__msg__WiperStatus__Sequence
{
  j2735_v2x_msgs__msg__WiperStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__WiperStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WIPER_STATUS__STRUCT_H_
