// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "tutorial_interfaces/msg/detail/custom_message__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace tutorial_interfaces
{

namespace msg
{

namespace builder
{

class Init_CustomMessage_flag
{
public:
  explicit Init_CustomMessage_flag(::tutorial_interfaces::msg::CustomMessage & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::msg::CustomMessage flag(::tutorial_interfaces::msg::CustomMessage::_flag_type arg)
  {
    msg_.flag = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::msg::CustomMessage msg_;
};

class Init_CustomMessage_number
{
public:
  explicit Init_CustomMessage_number(::tutorial_interfaces::msg::CustomMessage & msg)
  : msg_(msg)
  {}
  Init_CustomMessage_flag number(::tutorial_interfaces::msg::CustomMessage::_number_type arg)
  {
    msg_.number = std::move(arg);
    return Init_CustomMessage_flag(msg_);
  }

private:
  ::tutorial_interfaces::msg::CustomMessage msg_;
};

class Init_CustomMessage_text
{
public:
  Init_CustomMessage_text()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CustomMessage_number text(::tutorial_interfaces::msg::CustomMessage::_text_type arg)
  {
    msg_.text = std::move(arg);
    return Init_CustomMessage_number(msg_);
  }

private:
  ::tutorial_interfaces::msg::CustomMessage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::msg::CustomMessage>()
{
  return tutorial_interfaces::msg::builder::Init_CustomMessage_text();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__BUILDER_HPP_
