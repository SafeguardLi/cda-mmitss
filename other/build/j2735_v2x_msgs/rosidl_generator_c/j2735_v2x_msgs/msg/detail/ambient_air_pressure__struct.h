// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/AmbientAirPressure.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'PRESSURE_MIN'.
enum
{
  j2735_v2x_msgs__msg__AmbientAirPressure__PRESSURE_MIN = 0
};

/// Constant 'PRESSURE_MAX'.
enum
{
  j2735_v2x_msgs__msg__AmbientAirPressure__PRESSURE_MAX = 255
};

/// Constant 'PRESSURE_UNAVAILABLE'.
enum
{
  j2735_v2x_msgs__msg__AmbientAirPressure__PRESSURE_UNAVAILABLE = 0
};

// Struct defined in msg/AmbientAirPressure in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__AmbientAirPressure
{
  uint8_t pressure;
} j2735_v2x_msgs__msg__AmbientAirPressure;

// Struct for a sequence of j2735_v2x_msgs__msg__AmbientAirPressure.
typedef struct j2735_v2x_msgs__msg__AmbientAirPressure__Sequence
{
  j2735_v2x_msgs__msg__AmbientAirPressure * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__AmbientAirPressure__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__AMBIENT_AIR_PRESSURE__STRUCT_H_
