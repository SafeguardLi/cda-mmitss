// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/RoadSegmentList.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_LIST__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'road_segment_list'
#include "j2735_v2x_msgs/msg/detail/road_segment__struct.h"

// Struct defined in msg/RoadSegmentList in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__RoadSegmentList
{
  j2735_v2x_msgs__msg__RoadSegment__Sequence road_segment_list;
} j2735_v2x_msgs__msg__RoadSegmentList;

// Struct for a sequence of j2735_v2x_msgs__msg__RoadSegmentList.
typedef struct j2735_v2x_msgs__msg__RoadSegmentList__Sequence
{
  j2735_v2x_msgs__msg__RoadSegmentList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__RoadSegmentList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__ROAD_SEGMENT_LIST__STRUCT_H_
