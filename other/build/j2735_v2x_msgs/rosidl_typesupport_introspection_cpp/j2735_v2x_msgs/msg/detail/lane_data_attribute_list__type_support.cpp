// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from j2735_v2x_msgs:msg/LaneDataAttributeList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "j2735_v2x_msgs/msg/detail/lane_data_attribute_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace j2735_v2x_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void LaneDataAttributeList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) j2735_v2x_msgs::msg::LaneDataAttributeList(_init);
}

void LaneDataAttributeList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<j2735_v2x_msgs::msg::LaneDataAttributeList *>(message_memory);
  typed_message->~LaneDataAttributeList();
}

size_t size_function__LaneDataAttributeList__lane_attribute_list(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::LaneDataAttribute> *>(untyped_member);
  return member->size();
}

const void * get_const_function__LaneDataAttributeList__lane_attribute_list(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<j2735_v2x_msgs::msg::LaneDataAttribute> *>(untyped_member);
  return &member[index];
}

void * get_function__LaneDataAttributeList__lane_attribute_list(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<j2735_v2x_msgs::msg::LaneDataAttribute> *>(untyped_member);
  return &member[index];
}

void resize_function__LaneDataAttributeList__lane_attribute_list(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<j2735_v2x_msgs::msg::LaneDataAttribute> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember LaneDataAttributeList_message_member_array[1] = {
  {
    "lane_attribute_list",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<j2735_v2x_msgs::msg::LaneDataAttribute>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(j2735_v2x_msgs::msg::LaneDataAttributeList, lane_attribute_list),  // bytes offset in struct
    nullptr,  // default value
    size_function__LaneDataAttributeList__lane_attribute_list,  // size() function pointer
    get_const_function__LaneDataAttributeList__lane_attribute_list,  // get_const(index) function pointer
    get_function__LaneDataAttributeList__lane_attribute_list,  // get(index) function pointer
    resize_function__LaneDataAttributeList__lane_attribute_list  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers LaneDataAttributeList_message_members = {
  "j2735_v2x_msgs::msg",  // message namespace
  "LaneDataAttributeList",  // message name
  1,  // number of fields
  sizeof(j2735_v2x_msgs::msg::LaneDataAttributeList),
  LaneDataAttributeList_message_member_array,  // message members
  LaneDataAttributeList_init_function,  // function to initialize message memory (memory has to be allocated)
  LaneDataAttributeList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t LaneDataAttributeList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &LaneDataAttributeList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace j2735_v2x_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<j2735_v2x_msgs::msg::LaneDataAttributeList>()
{
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::LaneDataAttributeList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, j2735_v2x_msgs, msg, LaneDataAttributeList)() {
  return &::j2735_v2x_msgs::msg::rosidl_typesupport_introspection_cpp::LaneDataAttributeList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
