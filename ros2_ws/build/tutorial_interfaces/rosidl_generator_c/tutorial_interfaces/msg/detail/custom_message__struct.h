// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:msg/CustomMessage.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_
#define TUTORIAL_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'text'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/CustomMessage in the package tutorial_interfaces.
typedef struct tutorial_interfaces__msg__CustomMessage
{
  rosidl_runtime_c__String text;
  int32_t number;
  bool flag;
} tutorial_interfaces__msg__CustomMessage;

// Struct for a sequence of tutorial_interfaces__msg__CustomMessage.
typedef struct tutorial_interfaces__msg__CustomMessage__Sequence
{
  tutorial_interfaces__msg__CustomMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__msg__CustomMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__CUSTOM_MESSAGE__STRUCT_H_
