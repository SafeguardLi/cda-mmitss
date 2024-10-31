// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/TrailerData.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__TRAILER_DATA__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__TRAILER_DATA__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'connection'
#include "j2735_v2x_msgs/msg/detail/pivot_point_description__struct.h"
// Member 'units'
#include "j2735_v2x_msgs/msg/detail/trailer_unit_description_list__struct.h"

// Struct defined in msg/TrailerData in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__TrailerData
{
  uint8_t ssp_index;
  j2735_v2x_msgs__msg__PivotPointDescription connection;
  j2735_v2x_msgs__msg__TrailerUnitDescriptionList units;
} j2735_v2x_msgs__msg__TrailerData;

// Struct for a sequence of j2735_v2x_msgs__msg__TrailerData.
typedef struct j2735_v2x_msgs__msg__TrailerData__Sequence
{
  j2735_v2x_msgs__msg__TrailerData * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__TrailerData__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__TRAILER_DATA__STRUCT_H_
