// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from carma_planning_msgs:msg/PluginStatus.idl
// generated code does not contain a copyright notice
#include "carma_planning_msgs/msg/detail/plugin_status__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "carma_planning_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "carma_planning_msgs/msg/detail/plugin_status__struct.h"
#include "carma_planning_msgs/msg/detail/plugin_status__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/string.h"  // name
#include "rosidl_runtime_c/string_functions.h"  // name

// forward declare type support functions


using _PluginStatus__ros_msg_type = carma_planning_msgs__msg__PluginStatus;

static bool _PluginStatus__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _PluginStatus__ros_msg_type * ros_message = static_cast<const _PluginStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    const rosidl_runtime_c__String * str = &ros_message->name;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: status
  {
    cdr << ros_message->status;
  }

  // Field name: is_strategic_plugin
  {
    cdr << (ros_message->is_strategic_plugin ? true : false);
  }

  // Field name: is_tactical_plugin
  {
    cdr << (ros_message->is_tactical_plugin ? true : false);
  }

  // Field name: is_control_plugin
  {
    cdr << (ros_message->is_control_plugin ? true : false);
  }

  return true;
}

static bool _PluginStatus__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _PluginStatus__ros_msg_type * ros_message = static_cast<_PluginStatus__ros_msg_type *>(untyped_ros_message);
  // Field name: name
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->name.data) {
      rosidl_runtime_c__String__init(&ros_message->name);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->name,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'name'\n");
      return false;
    }
  }

  // Field name: status
  {
    cdr >> ros_message->status;
  }

  // Field name: is_strategic_plugin
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_strategic_plugin = tmp ? true : false;
  }

  // Field name: is_tactical_plugin
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_tactical_plugin = tmp ? true : false;
  }

  // Field name: is_control_plugin
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->is_control_plugin = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t get_serialized_size_carma_planning_msgs__msg__PluginStatus(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _PluginStatus__ros_msg_type * ros_message = static_cast<const _PluginStatus__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name name
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->name.size + 1);
  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_strategic_plugin
  {
    size_t item_size = sizeof(ros_message->is_strategic_plugin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_tactical_plugin
  {
    size_t item_size = sizeof(ros_message->is_tactical_plugin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name is_control_plugin
  {
    size_t item_size = sizeof(ros_message->is_control_plugin);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _PluginStatus__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_carma_planning_msgs__msg__PluginStatus(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_carma_planning_msgs
size_t max_serialized_size_carma_planning_msgs__msg__PluginStatus(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: name
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_strategic_plugin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_tactical_plugin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: is_control_plugin
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _PluginStatus__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_carma_planning_msgs__msg__PluginStatus(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_PluginStatus = {
  "carma_planning_msgs::msg",
  "PluginStatus",
  _PluginStatus__cdr_serialize,
  _PluginStatus__cdr_deserialize,
  _PluginStatus__get_serialized_size,
  _PluginStatus__max_serialized_size
};

static rosidl_message_type_support_t _PluginStatus__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_PluginStatus,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, carma_planning_msgs, msg, PluginStatus)() {
  return &_PluginStatus__type_support;
}

#if defined(__cplusplus)
}
#endif
