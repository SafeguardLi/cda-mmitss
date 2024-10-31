// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from j2735_v2x_msgs:msg/GrossSpeed.idl
// generated code does not contain a copyright notice

#ifndef J2735_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define J2735_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "j2735_v2x_msgs/msg/detail/gross_speed__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace j2735_v2x_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_serialize(
  const j2735_v2x_msgs::msg::GrossSpeed & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  j2735_v2x_msgs::msg::GrossSpeed & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
get_serialized_size(
  const j2735_v2x_msgs::msg::GrossSpeed & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
max_serialized_size_GrossSpeed(
  bool & full_bounded,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_j2735_v2x_msgs
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, j2735_v2x_msgs, msg, GrossSpeed)();

#ifdef __cplusplus
}
#endif

#endif  // J2735_V2X_MSGS__MSG__DETAIL__GROSS_SPEED__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
