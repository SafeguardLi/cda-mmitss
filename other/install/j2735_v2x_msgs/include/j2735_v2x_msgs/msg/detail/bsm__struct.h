// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from j2735_v2x_msgs:msg/BSM.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__BSM__STRUCT_H_
#define J2735_V2X_MSGS__MSG__DETAIL__BSM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'HAS_PART_II'.
enum
{
  j2735_v2x_msgs__msg__BSM__HAS_PART_II = 1
};

/// Constant 'HAS_REGIONAL'.
enum
{
  j2735_v2x_msgs__msg__BSM__HAS_REGIONAL = 2
};

/// Constant 'PART_II_MIN_SIZE'.
enum
{
  j2735_v2x_msgs__msg__BSM__PART_II_MIN_SIZE = 1
};

/// Constant 'PART_II_MAX_SIZE'.
enum
{
  j2735_v2x_msgs__msg__BSM__PART_II_MAX_SIZE = 8
};

/// Constant 'REGIONAL_MIN_SIZE'.
enum
{
  j2735_v2x_msgs__msg__BSM__REGIONAL_MIN_SIZE = 1
};

/// Constant 'REGIONAL_MAX_SIZE'.
enum
{
  j2735_v2x_msgs__msg__BSM__REGIONAL_MAX_SIZE = 4
};

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'core_data'
#include "j2735_v2x_msgs/msg/detail/bsm_core_data__struct.h"
// Member 'part_ii'
#include "j2735_v2x_msgs/msg/detail/bsm_part_ii_extension__struct.h"
// Member 'regional'
#include "j2735_v2x_msgs/msg/detail/bsm_regional_extension__struct.h"

// Struct defined in msg/BSM in the package j2735_v2x_msgs.
typedef struct j2735_v2x_msgs__msg__BSM
{
  std_msgs__msg__Header header;
  j2735_v2x_msgs__msg__BSMCoreData core_data;
  uint8_t presence_vector;
  j2735_v2x_msgs__msg__BSMPartIIExtension__Sequence part_ii;
  j2735_v2x_msgs__msg__BSMRegionalExtension__Sequence regional;
} j2735_v2x_msgs__msg__BSM;

// Struct for a sequence of j2735_v2x_msgs__msg__BSM.
typedef struct j2735_v2x_msgs__msg__BSM__Sequence
{
  j2735_v2x_msgs__msg__BSM * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} j2735_v2x_msgs__msg__BSM__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__BSM__STRUCT_H_
