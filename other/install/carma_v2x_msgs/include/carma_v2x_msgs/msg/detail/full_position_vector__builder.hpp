// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from carma_v2x_msgs:msg/FullPositionVector.idl
// generated code does not contain a copyright notice

#ifndef CARMA_V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__BUILDER_HPP_
#define CARMA_V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__BUILDER_HPP_

#include "carma_v2x_msgs/msg/detail/full_position_vector__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace carma_v2x_msgs
{

namespace msg
{

namespace builder
{

class Init_FullPositionVector_speed_confidence
{
public:
  explicit Init_FullPositionVector_speed_confidence(::carma_v2x_msgs::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  ::carma_v2x_msgs::msg::FullPositionVector speed_confidence(::carma_v2x_msgs::msg::FullPositionVector::_speed_confidence_type arg)
  {
    msg_.speed_confidence = std::move(arg);
    return std::move(msg_);
  }

private:
  ::carma_v2x_msgs::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_pos_confidence
{
public:
  explicit Init_FullPositionVector_pos_confidence(::carma_v2x_msgs::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_speed_confidence pos_confidence(::carma_v2x_msgs::msg::FullPositionVector::_pos_confidence_type arg)
  {
    msg_.pos_confidence = std::move(arg);
    return Init_FullPositionVector_speed_confidence(msg_);
  }

private:
  ::carma_v2x_msgs::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_time_confidence
{
public:
  explicit Init_FullPositionVector_time_confidence(::carma_v2x_msgs::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_pos_confidence time_confidence(::carma_v2x_msgs::msg::FullPositionVector::_time_confidence_type arg)
  {
    msg_.time_confidence = std::move(arg);
    return Init_FullPositionVector_pos_confidence(msg_);
  }

private:
  ::carma_v2x_msgs::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_pos_accuracy
{
public:
  explicit Init_FullPositionVector_pos_accuracy(::carma_v2x_msgs::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_time_confidence pos_accuracy(::carma_v2x_msgs::msg::FullPositionVector::_pos_accuracy_type arg)
  {
    msg_.pos_accuracy = std::move(arg);
    return Init_FullPositionVector_time_confidence(msg_);
  }

private:
  ::carma_v2x_msgs::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_speed
{
public:
  explicit Init_FullPositionVector_speed(::carma_v2x_msgs::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_pos_accuracy speed(::carma_v2x_msgs::msg::FullPositionVector::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_FullPositionVector_pos_accuracy(msg_);
  }

private:
  ::carma_v2x_msgs::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_heading
{
public:
  explicit Init_FullPositionVector_heading(::carma_v2x_msgs::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_speed heading(::carma_v2x_msgs::msg::FullPositionVector::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_FullPositionVector_speed(msg_);
  }

private:
  ::carma_v2x_msgs::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_elevation
{
public:
  explicit Init_FullPositionVector_elevation(::carma_v2x_msgs::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_heading elevation(::carma_v2x_msgs::msg::FullPositionVector::_elevation_type arg)
  {
    msg_.elevation = std::move(arg);
    return Init_FullPositionVector_heading(msg_);
  }

private:
  ::carma_v2x_msgs::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_lat
{
public:
  explicit Init_FullPositionVector_lat(::carma_v2x_msgs::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_elevation lat(::carma_v2x_msgs::msg::FullPositionVector::_lat_type arg)
  {
    msg_.lat = std::move(arg);
    return Init_FullPositionVector_elevation(msg_);
  }

private:
  ::carma_v2x_msgs::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_lon
{
public:
  explicit Init_FullPositionVector_lon(::carma_v2x_msgs::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_lat lon(::carma_v2x_msgs::msg::FullPositionVector::_lon_type arg)
  {
    msg_.lon = std::move(arg);
    return Init_FullPositionVector_lat(msg_);
  }

private:
  ::carma_v2x_msgs::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_utc_time
{
public:
  explicit Init_FullPositionVector_utc_time(::carma_v2x_msgs::msg::FullPositionVector & msg)
  : msg_(msg)
  {}
  Init_FullPositionVector_lon utc_time(::carma_v2x_msgs::msg::FullPositionVector::_utc_time_type arg)
  {
    msg_.utc_time = std::move(arg);
    return Init_FullPositionVector_lon(msg_);
  }

private:
  ::carma_v2x_msgs::msg::FullPositionVector msg_;
};

class Init_FullPositionVector_presence_vector
{
public:
  Init_FullPositionVector_presence_vector()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_FullPositionVector_utc_time presence_vector(::carma_v2x_msgs::msg::FullPositionVector::_presence_vector_type arg)
  {
    msg_.presence_vector = std::move(arg);
    return Init_FullPositionVector_utc_time(msg_);
  }

private:
  ::carma_v2x_msgs::msg::FullPositionVector msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::carma_v2x_msgs::msg::FullPositionVector>()
{
  return carma_v2x_msgs::msg::builder::Init_FullPositionVector_presence_vector();
}

}  // namespace carma_v2x_msgs

#endif  // CARMA_V2X_MSGS__MSG__DETAIL__FULL_POSITION_VECTOR__BUILDER_HPP_
