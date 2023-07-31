// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from carma_driver_msgs:srv/SetEnableRobotic.idl
// generated code does not contain a copyright notice

#ifndef CARMA_DRIVER_MSGS__SRV__DETAIL__SET_ENABLE_ROBOTIC__FUNCTIONS_H_
#define CARMA_DRIVER_MSGS__SRV__DETAIL__SET_ENABLE_ROBOTIC__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "carma_driver_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "carma_driver_msgs/srv/detail/set_enable_robotic__struct.h"

/// Initialize srv/SetEnableRobotic message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_driver_msgs__srv__SetEnableRobotic_Request
 * )) before or use
 * carma_driver_msgs__srv__SetEnableRobotic_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetEnableRobotic_Request__init(carma_driver_msgs__srv__SetEnableRobotic_Request * msg);

/// Finalize srv/SetEnableRobotic message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetEnableRobotic_Request__fini(carma_driver_msgs__srv__SetEnableRobotic_Request * msg);

/// Create srv/SetEnableRobotic message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_driver_msgs__srv__SetEnableRobotic_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
carma_driver_msgs__srv__SetEnableRobotic_Request *
carma_driver_msgs__srv__SetEnableRobotic_Request__create();

/// Destroy srv/SetEnableRobotic message.
/**
 * It calls
 * carma_driver_msgs__srv__SetEnableRobotic_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetEnableRobotic_Request__destroy(carma_driver_msgs__srv__SetEnableRobotic_Request * msg);

/// Check for srv/SetEnableRobotic message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetEnableRobotic_Request__are_equal(const carma_driver_msgs__srv__SetEnableRobotic_Request * lhs, const carma_driver_msgs__srv__SetEnableRobotic_Request * rhs);

/// Copy a srv/SetEnableRobotic message.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetEnableRobotic_Request__copy(
  const carma_driver_msgs__srv__SetEnableRobotic_Request * input,
  carma_driver_msgs__srv__SetEnableRobotic_Request * output);

/// Initialize array of srv/SetEnableRobotic messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_driver_msgs__srv__SetEnableRobotic_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence__init(carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetEnableRobotic messages.
/**
 * It calls
 * carma_driver_msgs__srv__SetEnableRobotic_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence__fini(carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence * array);

/// Create array of srv/SetEnableRobotic messages.
/**
 * It allocates the memory for the array and calls
 * carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence *
carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetEnableRobotic messages.
/**
 * It calls
 * carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence__destroy(carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence * array);

/// Check for srv/SetEnableRobotic message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence__are_equal(const carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence * lhs, const carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence * rhs);

/// Copy an array of srv/SetEnableRobotic messages.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence__copy(
  const carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence * input,
  carma_driver_msgs__srv__SetEnableRobotic_Request__Sequence * output);

/// Initialize srv/SetEnableRobotic message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * carma_driver_msgs__srv__SetEnableRobotic_Response
 * )) before or use
 * carma_driver_msgs__srv__SetEnableRobotic_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetEnableRobotic_Response__init(carma_driver_msgs__srv__SetEnableRobotic_Response * msg);

/// Finalize srv/SetEnableRobotic message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetEnableRobotic_Response__fini(carma_driver_msgs__srv__SetEnableRobotic_Response * msg);

/// Create srv/SetEnableRobotic message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * carma_driver_msgs__srv__SetEnableRobotic_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
carma_driver_msgs__srv__SetEnableRobotic_Response *
carma_driver_msgs__srv__SetEnableRobotic_Response__create();

/// Destroy srv/SetEnableRobotic message.
/**
 * It calls
 * carma_driver_msgs__srv__SetEnableRobotic_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetEnableRobotic_Response__destroy(carma_driver_msgs__srv__SetEnableRobotic_Response * msg);

/// Check for srv/SetEnableRobotic message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetEnableRobotic_Response__are_equal(const carma_driver_msgs__srv__SetEnableRobotic_Response * lhs, const carma_driver_msgs__srv__SetEnableRobotic_Response * rhs);

/// Copy a srv/SetEnableRobotic message.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetEnableRobotic_Response__copy(
  const carma_driver_msgs__srv__SetEnableRobotic_Response * input,
  carma_driver_msgs__srv__SetEnableRobotic_Response * output);

/// Initialize array of srv/SetEnableRobotic messages.
/**
 * It allocates the memory for the number of elements and calls
 * carma_driver_msgs__srv__SetEnableRobotic_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence__init(carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetEnableRobotic messages.
/**
 * It calls
 * carma_driver_msgs__srv__SetEnableRobotic_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence__fini(carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence * array);

/// Create array of srv/SetEnableRobotic messages.
/**
 * It allocates the memory for the array and calls
 * carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence *
carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetEnableRobotic messages.
/**
 * It calls
 * carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
void
carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence__destroy(carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence * array);

/// Check for srv/SetEnableRobotic message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence__are_equal(const carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence * lhs, const carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence * rhs);

/// Copy an array of srv/SetEnableRobotic messages.
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
ROSIDL_GENERATOR_C_PUBLIC_carma_driver_msgs
bool
carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence__copy(
  const carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence * input,
  carma_driver_msgs__srv__SetEnableRobotic_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // CARMA_DRIVER_MSGS__SRV__DETAIL__SET_ENABLE_ROBOTIC__FUNCTIONS_H_
