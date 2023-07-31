// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from j2735_v2x_msgs:msg/VerticalAccelerationThreshold.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION_THRESHOLD__FUNCTIONS_H_
#define J2735_V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION_THRESHOLD__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "j2735_v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "j2735_v2x_msgs/msg/detail/vertical_acceleration_threshold__struct.h"

/// Initialize msg/VerticalAccelerationThreshold message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * j2735_v2x_msgs__msg__VerticalAccelerationThreshold
 * )) before or use
 * j2735_v2x_msgs__msg__VerticalAccelerationThreshold__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__init(j2735_v2x_msgs__msg__VerticalAccelerationThreshold * msg);

/// Finalize msg/VerticalAccelerationThreshold message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__fini(j2735_v2x_msgs__msg__VerticalAccelerationThreshold * msg);

/// Create msg/VerticalAccelerationThreshold message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * j2735_v2x_msgs__msg__VerticalAccelerationThreshold__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
j2735_v2x_msgs__msg__VerticalAccelerationThreshold *
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__create();

/// Destroy msg/VerticalAccelerationThreshold message.
/**
 * It calls
 * j2735_v2x_msgs__msg__VerticalAccelerationThreshold__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__destroy(j2735_v2x_msgs__msg__VerticalAccelerationThreshold * msg);

/// Check for msg/VerticalAccelerationThreshold message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__are_equal(const j2735_v2x_msgs__msg__VerticalAccelerationThreshold * lhs, const j2735_v2x_msgs__msg__VerticalAccelerationThreshold * rhs);

/// Copy a msg/VerticalAccelerationThreshold message.
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
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__copy(
  const j2735_v2x_msgs__msg__VerticalAccelerationThreshold * input,
  j2735_v2x_msgs__msg__VerticalAccelerationThreshold * output);

/// Initialize array of msg/VerticalAccelerationThreshold messages.
/**
 * It allocates the memory for the number of elements and calls
 * j2735_v2x_msgs__msg__VerticalAccelerationThreshold__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence__init(j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence * array, size_t size);

/// Finalize array of msg/VerticalAccelerationThreshold messages.
/**
 * It calls
 * j2735_v2x_msgs__msg__VerticalAccelerationThreshold__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence__fini(j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence * array);

/// Create array of msg/VerticalAccelerationThreshold messages.
/**
 * It allocates the memory for the array and calls
 * j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence *
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence__create(size_t size);

/// Destroy array of msg/VerticalAccelerationThreshold messages.
/**
 * It calls
 * j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence__destroy(j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence * array);

/// Check for msg/VerticalAccelerationThreshold message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence__are_equal(const j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence * lhs, const j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence * rhs);

/// Copy an array of msg/VerticalAccelerationThreshold messages.
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
j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence__copy(
  const j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence * input,
  j2735_v2x_msgs__msg__VerticalAccelerationThreshold__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__VERTICAL_ACCELERATION_THRESHOLD__FUNCTIONS_H_
