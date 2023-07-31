// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/NumberOfParticipantsInCluster.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__NUMBER_OF_PARTICIPANTS_IN_CLUSTER__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__NUMBER_OF_PARTICIPANTS_IN_CLUSTER__STRUCT_H_

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
  j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__UNAVAILABLE = 0
};

/// Constant 'SMALL'.
enum
{
  j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__SMALL = 1
};

/// Constant 'MEDIUM'.
enum
{
  j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__MEDIUM = 2
};

/// Constant 'LARGE'.
enum
{
  j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__LARGE = 3
};

// Struct defined in msg/NumberOfParticipantsInCluster in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__NumberOfParticipantsInCluster
{
  uint8_t cluster_size;
} j2735_v2x_msgs__msg__NumberOfParticipantsInCluster;

// Struct for a sequence of j2735_v2x_msgs__msg__NumberOfParticipantsInCluster.
typedef struct j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__Sequence
{
  j2735_v2x_msgs__msg__NumberOfParticipantsInCluster * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__NumberOfParticipantsInCluster__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__NUMBER_OF_PARTICIPANTS_IN_CLUSTER__STRUCT_H_
