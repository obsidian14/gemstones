#include "core.h"

using namespace gemstones;

Float32::Float32(float value) : value_(value) {}

Float32 Float32::neg() const { return Float32(-value_); }

Float32 Float32::add(const Float32 &other) const {
  return Float32(value_ + other.value_);
}

Float32 Float32::sub(const Float32 &other) const {
  return Float32(value_ - other.value_);
}

Float32 Float32::mul(const Float32 &other) const {
  return Float32(value_ * other.value_);
}

Float32 Float32::div(const Float32 &other) const {
  return Float32(value_ / other.value_);
}

Float64::Float64(double value) : value_(value) {}

Float64 Float64::neg() const { return Float64(-value_); }

Float64 Float64::add(const Float64 &other) const {
  return Float64(value_ + other.value_);
}

Float64 Float64::sub(const Float64 &other) const {
  return Float64(value_ - other.value_);
}

Float64 Float64::mul(const Float64 &other) const {
  return Float64(value_ * other.value_);
}

Float64 Float64::div(const Float64 &other) const {
  return Float64(value_ / other.value_);
}