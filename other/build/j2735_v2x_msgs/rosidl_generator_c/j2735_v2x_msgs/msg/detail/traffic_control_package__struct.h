// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrafficControlPackage.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PACKAGE__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PACKAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'label'
#include "rosidl_runtime_c/string.h"
// Member 'tcids'
#include "j2735_v2x_msgs/msg/detail/id128b__struct.h"

// Struct defined in msg/TrafficControlPackage in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__TrafficControlPackage
{
  rosidl_runtime_c__String label;
  bool label_exists;
  j2735_v2x_msgs__msg__Id128b__Sequence tcids;
} j2735_v2x_msgs__msg__TrafficControlPackage;

// Struct for a sequence of j2735_v2x_msgs__msg__TrafficControlPackage.
typedef struct j2735_v2x_msgs__msg__TrafficControlPackage__Sequence
{
  j2735_v2x_msgs__msg__TrafficControlPackage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrafficControlPackage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAFFIC_CONTROL_PACKAGE__STRUCT_H_
