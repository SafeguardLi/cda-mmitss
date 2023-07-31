// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from j2735_v2x_msgs:msg/LaneDataAttribute.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__FUNCTIONS_H_
#define J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "j2735_v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "j2735_v2x_msgs/msg/detail/lane_data_attribute__struct.h"

/// Initialize msg/LaneDataAttribute message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * j2735_v2x_msgs__msg__LaneDataAttribute
 * )) before or use
 * j2735_v2x_msgs__msg__LaneDataAttribute__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__LaneDataAttribute__init(j2735_v2x_msgs__msg__LaneDataAttribute * msg);

/// Finalize msg/LaneDataAttribute message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__LaneDataAttribute__fini(j2735_v2x_msgs__msg__LaneDataAttribute * msg);

/// Create msg/LaneDataAttribute message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * j2735_v2x_msgs__msg__LaneDataAttribute__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
j2735_v2x_msgs__msg__LaneDataAttribute *
j2735_v2x_msgs__msg__LaneDataAttribute__create();

/// Destroy msg/LaneDataAttribute message.
/**
 * It calls
 * j2735_v2x_msgs__msg__LaneDataAttribute__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__LaneDataAttribute__destroy(j2735_v2x_msgs__msg__LaneDataAttribute * msg);

/// Check for msg/LaneDataAttribute message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__LaneDataAttribute__are_equal(const j2735_v2x_msgs__msg__LaneDataAttribute * lhs, const j2735_v2x_msgs__msg__LaneDataAttribute * rhs);

/// Copy a msg/LaneDataAttribute message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__LaneDataAttribute__copy(
  const j2735_v2x_msgs__msg__LaneDataAttribute * input,
  j2735_v2x_msgs__msg__LaneDataAttribute * output);

/// Initialize array of msg/LaneDataAttribute messages.
/**
 * It allocates the memory for the number of elements and calls
 * j2735_v2x_msgs__msg__LaneDataAttribute__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__init(j2735_v2x_msgs__msg__LaneDataAttribute__Sequence * array, size_t size);

/// Finalize array of msg/LaneDataAttribute messages.
/**
 * It calls
 * j2735_v2x_msgs__msg__LaneDataAttribute__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__fini(j2735_v2x_msgs__msg__LaneDataAttribute__Sequence * array);

/// Create array of msg/LaneDataAttribute messages.
/**
 * It allocates the memory for the array and calls
 * j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
j2735_v2x_msgs__msg__LaneDataAttribute__Sequence *
j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__create(size_t size);

/// Destroy array of msg/LaneDataAttribute messages.
/**
 * It calls
 * j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__destroy(j2735_v2x_msgs__msg__LaneDataAttribute__Sequence * array);

/// Check for msg/LaneDataAttribute message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__are_equal(const j2735_v2x_msgs__msg__LaneDataAttribute__Sequence * lhs, const j2735_v2x_msgs__msg__LaneDataAttribute__Sequence * rhs);

/// Copy an array of msg/LaneDataAttribute messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__LaneDataAttribute__Sequence__copy(
  const j2735_v2x_msgs__msg__LaneDataAttribute__Sequence * input,
  j2735_v2x_msgs__msg__LaneDataAttribute__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__LANE_DATA_ATTRIBUTE__FUNCTIONS_H_
