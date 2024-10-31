// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NodeAttributeXY.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'RESERVED'.
enum
{
  j2735_v2x_msgs__msg__NodeAttributeXY__RESERVED = 0
};

/// Constant 'STOPLINE'.
enum
{
  j2735_v2x_msgs__msg__NodeAttributeXY__STOPLINE = 1
};

/// Constant 'ROUNDEDCAPSTYLEA'.
enum
{
  j2735_v2x_msgs__msg__NodeAttributeXY__ROUNDEDCAPSTYLEA = 2
};

/// Constant 'ROUNDEDCAPSTYLEB'.
enum
{
  j2735_v2x_msgs__msg__NodeAttributeXY__ROUNDEDCAPSTYLEB = 3
};

/// Constant 'MERGEPOINT'.
enum
{
  j2735_v2x_msgs__msg__NodeAttributeXY__MERGEPOINT = 4
};

/// Constant 'DIVERGEPOINT'.
enum
{
  j2735_v2x_msgs__msg__NodeAttributeXY__DIVERGEPOINT = 5
};

/// Constant 'DOWNSTREAMSTOPLINE'.
enum
{
  j2735_v2x_msgs__msg__NodeAttributeXY__DOWNSTREAMSTOPLINE = 6
};

/// Constant 'DOWNSTREAMSTARTNODE'.
enum
{
  j2735_v2x_msgs__msg__NodeAttributeXY__DOWNSTREAMSTARTNODE = 7
};

/// Constant 'CLOSEDTOTRAFFIC'.
enum
{
  j2735_v2x_msgs__msg__NodeAttributeXY__CLOSEDTOTRAFFIC = 8
};

/// Constant 'SAFEISLAND'.
enum
{
  j2735_v2x_msgs__msg__NodeAttributeXY__SAFEISLAND = 9
};

/// Constant 'CURBPRESENTATSTEPOFF'.
enum
{
  j2735_v2x_msgs__msg__NodeAttributeXY__CURBPRESENTATSTEPOFF = 10
};

/// Constant 'HYDRANTPRESENT'.
enum
{
  j2735_v2x_msgs__msg__NodeAttributeXY__HYDRANTPRESENT = 11
};

// Struct defined in msg/NodeAttributeXY in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__NodeAttributeXY
{
  uint8_t node_attribute_xy;
} j2735_v2x_msgs__msg__NodeAttributeXY;

// Struct for a sequence of j2735_v2x_msgs__msg__NodeAttributeXY.
typedef struct j2735_v2x_msgs__msg__NodeAttributeXY__Sequence
{
  j2735_v2x_msgs__msg__NodeAttributeXY * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NodeAttributeXY__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NODE_ATTRIBUTE_XY__STRUCT_H_
