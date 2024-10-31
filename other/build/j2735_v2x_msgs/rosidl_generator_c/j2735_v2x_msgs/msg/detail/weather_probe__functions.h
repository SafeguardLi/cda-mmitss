// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from j2735_v2x_msgs:msg/WeatherProbe.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__FUNCTIONS_H_
#define J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "j2735_v2x_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "j2735_v2x_msgs/msg/detail/weather_probe__struct.h"

/// Initialize msg/WeatherProbe message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * j2735_v2x_msgs__msg__WeatherProbe
 * )) before or use
 * j2735_v2x_msgs__msg__WeatherProbe__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__WeatherProbe__init(j2735_v2x_msgs__msg__WeatherProbe * msg);

/// Finalize msg/WeatherProbe message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__WeatherProbe__fini(j2735_v2x_msgs__msg__WeatherProbe * msg);

/// Create msg/WeatherProbe message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * j2735_v2x_msgs__msg__WeatherProbe__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
j2735_v2x_msgs__msg__WeatherProbe *
j2735_v2x_msgs__msg__WeatherProbe__create();

/// Destroy msg/WeatherProbe message.
/**
 * It calls
 * j2735_v2x_msgs__msg__WeatherProbe__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__WeatherProbe__destroy(j2735_v2x_msgs__msg__WeatherProbe * msg);

/// Check for msg/WeatherProbe message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__WeatherProbe__are_equal(const j2735_v2x_msgs__msg__WeatherProbe * lhs, const j2735_v2x_msgs__msg__WeatherProbe * rhs);

/// Copy a msg/WeatherProbe message.
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
j2735_v2x_msgs__msg__WeatherProbe__copy(
  const j2735_v2x_msgs__msg__WeatherProbe * input,
  j2735_v2x_msgs__msg__WeatherProbe * output);

/// Initialize array of msg/WeatherProbe messages.
/**
 * It allocates the memory for the number of elements and calls
 * j2735_v2x_msgs__msg__WeatherProbe__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__WeatherProbe__Sequence__init(j2735_v2x_msgs__msg__WeatherProbe__Sequence * array, size_t size);

/// Finalize array of msg/WeatherProbe messages.
/**
 * It calls
 * j2735_v2x_msgs__msg__WeatherProbe__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__WeatherProbe__Sequence__fini(j2735_v2x_msgs__msg__WeatherProbe__Sequence * array);

/// Create array of msg/WeatherProbe messages.
/**
 * It allocates the memory for the array and calls
 * j2735_v2x_msgs__msg__WeatherProbe__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
j2735_v2x_msgs__msg__WeatherProbe__Sequence *
j2735_v2x_msgs__msg__WeatherProbe__Sequence__create(size_t size);

/// Destroy array of msg/WeatherProbe messages.
/**
 * It calls
 * j2735_v2x_msgs__msg__WeatherProbe__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
void
j2735_v2x_msgs__msg__WeatherProbe__Sequence__destroy(j2735_v2x_msgs__msg__WeatherProbe__Sequence * array);

/// Check for msg/WeatherProbe message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_j2735_v2x_msgs
bool
j2735_v2x_msgs__msg__WeatherProbe__Sequence__are_equal(const j2735_v2x_msgs__msg__WeatherProbe__Sequence * lhs, const j2735_v2x_msgs__msg__WeatherProbe__Sequence * rhs);

/// Copy an array of msg/WeatherProbe messages.
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
j2735_v2x_msgs__msg__WeatherProbe__Sequence__copy(
  const j2735_v2x_msgs__msg__WeatherProbe__Sequence * input,
  j2735_v2x_msgs__msg__WeatherProbe__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__WEATHER_PROBE__FUNCTIONS_H_
