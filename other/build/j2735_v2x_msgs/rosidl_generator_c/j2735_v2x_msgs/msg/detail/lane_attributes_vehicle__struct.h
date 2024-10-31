// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/LaneAttributesVehicle.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_VEHICLE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_VEHICLE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'ISVEHICLEREVOCABLELANE'.
enum
{
  j2735_v2x_msgs__msg__LaneAttributesVehicle__ISVEHICLEREVOCABLELANE = 0
};

/// Constant 'ISVEHICLEFLYOVERLANE'.
enum
{
  j2735_v2x_msgs__msg__LaneAttributesVehicle__ISVEHICLEFLYOVERLANE = 1
};

/// Constant 'HOVLANEUSEONLY'.
enum
{
  j2735_v2x_msgs__msg__LaneAttributesVehicle__HOVLANEUSEONLY = 2
};

/// Constant 'RESTRICTEDTOBUSUSE'.
enum
{
  j2735_v2x_msgs__msg__LaneAttributesVehicle__RESTRICTEDTOBUSUSE = 3
};

/// Constant 'RESTRICTEDTOTAXIUSE'.
enum
{
  j2735_v2x_msgs__msg__LaneAttributesVehicle__RESTRICTEDTOTAXIUSE = 4
};

/// Constant 'RESTRICTEDFROMPUBLICUSE'.
enum
{
  j2735_v2x_msgs__msg__LaneAttributesVehicle__RESTRICTEDFROMPUBLICUSE = 5
};

/// Constant 'HASIRBEACONCOVERAGE'.
enum
{
  j2735_v2x_msgs__msg__LaneAttributesVehicle__HASIRBEACONCOVERAGE = 6
};

/// Constant 'PERMISSIONONREQUEST'.
enum
{
  j2735_v2x_msgs__msg__LaneAttributesVehicle__PERMISSIONONREQUEST = 7
};

// Struct defined in msg/LaneAttributesVehicle in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__LaneAttributesVehicle
{
  uint8_t lane_attributes_vehicle;
} j2735_v2x_msgs__msg__LaneAttributesVehicle;

// Struct for a sequence of j2735_v2x_msgs__msg__LaneAttributesVehicle.
typedef struct j2735_v2x_msgs__msg__LaneAttributesVehicle__Sequence
{
  j2735_v2x_msgs__msg__LaneAttributesVehicle * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__LaneAttributesVehicle__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_ATTRIBUTES_VEHICLE__STRUCT_H_
