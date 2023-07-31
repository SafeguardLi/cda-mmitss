// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from j2735_v2x_msgs:msg/HumanPropelledType.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__HUMAN_PROPELLED_TYPE__FUNCTIONS_H_
#define J2735_V2X_MSGS__MSG__DETAIL__HUMAN_PROPELLED_TYPE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "j2735_v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "j2735_v2x_msgs/msg/detail/human_propelled_type__struct.h"

/// Initialize msg/HumanPropelledType message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * j2735_v2x_msgs__msg__HumanPropelledType
 * )) before or use
 * j2735_v2x_msgs__msg__HumanPropelledType__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__HumanPropelledType__init(j2735_v2x_msgs__msg__HumanPropelledType * msg);

/// Finalize msg/HumanPropelledType message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__HumanPropelledType__fini(j2735_v2x_msgs__msg__HumanPropelledType * msg);

/// Create msg/HumanPropelledType message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * j2735_v2x_msgs__msg__HumanPropelledType__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
j2735_v2x_msgs__msg__HumanPropelledType *
j2735_v2x_msgs__msg__HumanPropelledType__create();

/// Destroy msg/HumanPropelledType message.
/**
 * It calls
 * j2735_v2x_msgs__msg__HumanPropelledType__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__HumanPropelledType__destroy(j2735_v2x_msgs__msg__HumanPropelledType * msg);

/// Check for msg/HumanPropelledType message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__HumanPropelledType__are_equal(const j2735_v2x_msgs__msg__HumanPropelledType * lhs, const j2735_v2x_msgs__msg__HumanPropelledType * rhs);

/// Copy a msg/HumanPropelledType message.
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
j2735_v2x_msgs__msg__HumanPropelledType__copy(
  const j2735_v2x_msgs__msg__HumanPropelledType * input,
  j2735_v2x_msgs__msg__HumanPropelledType * output);

/// Initialize array of msg/HumanPropelledType messages.
/**
 * It allocates the memory for the number of elements and calls
 * j2735_v2x_msgs__msg__HumanPropelledType__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__HumanPropelledType__Sequence__init(j2735_v2x_msgs__msg__HumanPropelledType__Sequence * array, size_t size);

/// Finalize array of msg/HumanPropelledType messages.
/**
 * It calls
 * j2735_v2x_msgs__msg__HumanPropelledType__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__HumanPropelledType__Sequence__fini(j2735_v2x_msgs__msg__HumanPropelledType__Sequence * array);

/// Create array of msg/HumanPropelledType messages.
/**
 * It allocates the memory for the array and calls
 * j2735_v2x_msgs__msg__HumanPropelledType__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
j2735_v2x_msgs__msg__HumanPropelledType__Sequence *
j2735_v2x_msgs__msg__HumanPropelledType__Sequence__create(size_t size);

/// Destroy array of msg/HumanPropelledType messages.
/**
 * It calls
 * j2735_v2x_msgs__msg__HumanPropelledType__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__HumanPropelledType__Sequence__destroy(j2735_v2x_msgs__msg__HumanPropelledType__Sequence * array);

/// Check for msg/HumanPropelledType message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__HumanPropelledType__Sequence__are_equal(const j2735_v2x_msgs__msg__HumanPropelledType__Sequence * lhs, const j2735_v2x_msgs__msg__HumanPropelledType__Sequence * rhs);

/// Copy an array of msg/HumanPropelledType messages.
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
j2735_v2x_msgs__msg__HumanPropelledType__Sequence__copy(
  const j2735_v2x_msgs__msg__HumanPropelledType__Sequence * input,
  j2735_v2x_msgs__msg__HumanPropelledType__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__HUMAN_PROPELLED_TYPE__FUNCTIONS_H_
