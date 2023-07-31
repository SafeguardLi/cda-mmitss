// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from j2735_v2x_msgs:msg/RestrictionUserTypeList.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE_LIST__FUNCTIONS_H_
#define J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE_LIST__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "j2735_v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "j2735_v2x_msgs/msg/detail/restriction_user_type_list__struct.h"

/// Initialize msg/RestrictionUserTypeList message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * j2735_v2x_msgs__msg__RestrictionUserTypeList
 * )) before or use
 * j2735_v2x_msgs__msg__RestrictionUserTypeList__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__RestrictionUserTypeList__init(j2735_v2x_msgs__msg__RestrictionUserTypeList * msg);

/// Finalize msg/RestrictionUserTypeList message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__RestrictionUserTypeList__fini(j2735_v2x_msgs__msg__RestrictionUserTypeList * msg);

/// Create msg/RestrictionUserTypeList message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * j2735_v2x_msgs__msg__RestrictionUserTypeList__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
j2735_v2x_msgs__msg__RestrictionUserTypeList *
j2735_v2x_msgs__msg__RestrictionUserTypeList__create();

/// Destroy msg/RestrictionUserTypeList message.
/**
 * It calls
 * j2735_v2x_msgs__msg__RestrictionUserTypeList__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__RestrictionUserTypeList__destroy(j2735_v2x_msgs__msg__RestrictionUserTypeList * msg);

/// Check for msg/RestrictionUserTypeList message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__RestrictionUserTypeList__are_equal(const j2735_v2x_msgs__msg__RestrictionUserTypeList * lhs, const j2735_v2x_msgs__msg__RestrictionUserTypeList * rhs);

/// Copy a msg/RestrictionUserTypeList message.
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
j2735_v2x_msgs__msg__RestrictionUserTypeList__copy(
  const j2735_v2x_msgs__msg__RestrictionUserTypeList * input,
  j2735_v2x_msgs__msg__RestrictionUserTypeList * output);

/// Initialize array of msg/RestrictionUserTypeList messages.
/**
 * It allocates the memory for the number of elements and calls
 * j2735_v2x_msgs__msg__RestrictionUserTypeList__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence__init(j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence * array, size_t size);

/// Finalize array of msg/RestrictionUserTypeList messages.
/**
 * It calls
 * j2735_v2x_msgs__msg__RestrictionUserTypeList__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence__fini(j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence * array);

/// Create array of msg/RestrictionUserTypeList messages.
/**
 * It allocates the memory for the array and calls
 * j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence *
j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence__create(size_t size);

/// Destroy array of msg/RestrictionUserTypeList messages.
/**
 * It calls
 * j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence__destroy(j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence * array);

/// Check for msg/RestrictionUserTypeList message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence__are_equal(const j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence * lhs, const j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence * rhs);

/// Copy an array of msg/RestrictionUserTypeList messages.
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
j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence__copy(
  const j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence * input,
  j2735_v2x_msgs__msg__RestrictionUserTypeList__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__RESTRICTION_USER_TYPE_LIST__FUNCTIONS_H_
