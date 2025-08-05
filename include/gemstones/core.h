#ifndef GEMSTONES_CORE_H_
#define GEMSTONES_CORE_H_

#include <concepts>
#include <cstdint>
#include <type_traits>
namespace gemstones {

///
///
///
template <::std::signed_integral T> class Int {
public:
  ///
  ///
  ///
  constexpr Int() = default;

  ///
  ///
  ///
  constexpr explicit Int(T value) : value_(value) {}

  ///
  ///
  ///
  template <::std::signed_integral U> constexpr U into() const {
    return static_cast<U>(value_);
  }

  ///
  ///
  ///
  constexpr Int neg() const { return Int(-value_); }

  ///
  ///
  ///
  constexpr Int add(const Int &other) const {
    return Int(value_ + other.value_);
  }

  ///
  ///
  ///
  constexpr Int sub(const Int &other) const {
    return Int(value_ - other.value_);
  }

  ///
  ///
  ///
  constexpr Int mul(const Int &other) const {
    return Int(value_ * other.value_);
  }

  ///
  ///
  ///
  constexpr Int div(const Int &other) const {
    return Int(value_ / other.value_);
  }

  ///
  ///
  ///
  constexpr Int rem(const Int &other) const {
    return Int(value_ % other.value_);
  }

private:
  ///
  ///
  ///
  T value_ = 0;
};

///
///
///
using Int8 = Int<::std::int8_t>;

///
///
///
using Int16 = Int<::std::int16_t>;

///
///
///
using Int32 = Int<::std::int32_t>;

///
///
///
using Int64 = Int<::std::int64_t>;

///
///
///
using IntPtr = Int<::std::intptr_t>;

///
///
///
template <::std::unsigned_integral T> class UInt {
public:
  ///
  ///
  ///
  constexpr UInt() = default;

  ///
  ///
  ///
  constexpr explicit UInt(T value) : value_(value) {}

  ///
  ///
  ///
  template <::std::unsigned_integral U> constexpr U into() const {
    return static_cast<U>(value_);
  }

  ///
  ///
  ///
  constexpr UInt neg() const { return UInt(-value_); }

  ///
  ///
  ///
  constexpr UInt add(const UInt &other) const {
    return UInt(value_ + other.value_);
  }

  ///
  ///
  ///
  constexpr UInt sub(const UInt &other) const {
    return UInt(value_ - other.value_);
  }

  ///
  ///
  ///
  constexpr UInt mul(const UInt &other) const {
    return UInt(value_ * other.value_);
  }

  ///
  ///
  ///
  constexpr UInt div(const UInt &other) const {
    return UInt(value_ / other.value_);
  }

  ///
  ///
  ///
  constexpr UInt rem(const UInt &other) const {
    return UInt(value_ % other.value_);
  }

  ///
  ///
  ///
  constexpr UInt bit_not() const { return UInt(~value_); }

  ///
  ///
  ///
  constexpr UInt bit_and(const UInt &other) const {
    return UInt(value_ & other.value_);
  }

  ///
  ///
  ///
  constexpr UInt bit_or(const UInt &other) const {
    return UInt(value_ | other.value_);
  }

  ///
  ///
  ///
  constexpr UInt bit_xor(const UInt &other) const {
    return UInt(value_ ^ other.value_);
  }

  ///
  ///
  //
  constexpr UInt bit_shl(const UInt &other) const {
    return UInt(value_ << other.value_);
  }

  ///
  ///
  ///
  constexpr UInt bit_shr(const UInt &other) const {
    return UInt(value_ >> other.value_);
  }

private:
  ///
  ///
  ///
  T value_ = 0U;
};

///
///
///
using UInt8 = UInt<::std::uint8_t>;

///
///
///
using UInt16 = UInt<::std::uint16_t>;

///
///
///
using UInt32 = UInt<::std::uint32_t>;

///
///
///
using UInt64 = UInt<::std::uint64_t>;

///
///
///
using UIntPtr = UInt<::std::uintptr_t>;

///
///
///
template <::std::floating_point T> class Float {
public:
  ///
  ///
  ///
  constexpr Float() = default;

  ///
  ///
  ///
  constexpr explicit Float(T value) : value_(value) {}

  ///
  ///
  ///
  template <::std::floating_point U> constexpr U into() const {
    return static_cast<U>(value_);
  }

  ///
  ///
  ///
  constexpr Float neg() const { return Float(-value_); }

  ///
  ///
  ///
  constexpr Float add(const Float &other) const {
    return Float(value_ + other.value_);
  }

  ///
  ///
  ///
  constexpr Float sub(const Float &other) const {
    return Float(value_ - other.value_);
  }

  ///
  ///
  ///
  constexpr Float mul(const Float &other) const {
    return Float(value_ * other.value_);
  }

  ///
  ///
  ///
  constexpr Float div(const Float &other) const {
    return Float(value_ / other.value_);
  }

private:
  ///
  ///
  ///
  T value_ = 0.0F;
};

///
///
///
using Float32 = Float<float>;

///
///
///
using Float64 = Float<double>;

///
///
///
using Float128 = Float<long double>;

} // namespace gemstones

#endif