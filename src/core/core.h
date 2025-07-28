#ifndef GEMSTONES_CORE_H_
#define GEMSTONES_CORE_H_
#include <concepts>
#include <cstdint>
namespace gemstones {
/**
 * The signed integer type.
 */
template <::std::signed_integral T> class Int {
public:
  /**
   * Default constructor.
   */
  constexpr Int() = default;

  /**
   * Constructor with a signed integer value.
   */
  constexpr explicit Int(T value) : value_(value) {}

  /**
   * Cast to other signed integer type.
   */
  template <::std::signed_integral U> constexpr U into() const {
    return static_cast<U>(value_);
  }

  /**
   * Performs the unary - operation.
   */
  constexpr Int neg() const { return Int(-value_); }

  /**
   * Performs the + operation.
   */
  constexpr Int add(const Int &other) const {
    return Int(value_ + other.value_);
  }

  /**
   * Performs the - operation.
   */
  constexpr Int sub(const Int &other) const {
    return Int(value_ - other.value_);
  }

  /**
   * Performs the * operation.
   */
  constexpr Int mul(const Int &other) const {
    return Int(value_ * other.value_);
  }

  /**
   * Performs the / operation.
   */
  constexpr Int div(const Int &other) const {
    return Int(value_ / other.value_);
  }

  /**
   * Performs the % operation.
   */
  constexpr Int rem(const Int &other) const {
    return Int(value_ % other.value_);
  }

private:
  /**
   * The signed integer value.
   */
  T value_ = 0;
};

/**
 * The 8-bit signed integer type.
 */
using Int8 = Int<::std::int8_t>;

/**
 * The 16-bit signed integer type.
 */
using Int16 = Int<::std::int16_t>;

/**
 * The 32-bit signed integer type.
 */
using Int32 = Int<::std::int32_t>;

/**
 * The 64-bit signed integer type.
 */
using Int64 = Int<::std::int64_t>;

/**
 * The pointer-sized signed integer type.
 *
 * The size of this primitive is how many bytes it takes to reference any
 * location in memory. For example, on a 32 bit target, this is 4 bytes and on a
 * 64 bit target, this is 8 bytes.
 */
using IntPtr = Int<::std::intptr_t>;

/**
 * An unsigned integer type.
 */
template <::std::unsigned_integral T> class UInt {
public:
  /**
   * Default constructor.
   */
  constexpr UInt() = default;

  /**
   * Constructor with a unsigned integer value.
   */
  constexpr explicit UInt(T value) : value_(value) {}

  /**
   * Cast to other unsigned integer type.
   */
  template <::std::unsigned_integral U> constexpr U into() const {
    return static_cast<U>(value_);
  }

  /**
   * Performs the + operation.
   */
  constexpr UInt add(const UInt &other) const {
    return UInt(value_ + other.value_);
  }

  /**
   * Performs the - operation.
   */
  constexpr UInt sub(const UInt &other) const {
    return UInt(value_ - other.value_);
  }

  /**
   * Performs the * operation.
   */
  constexpr UInt mul(const UInt &other) const {
    return UInt(value_ * other.value_);
  }

  /**
   * Performs the / operation.
   */
  constexpr UInt div(const UInt &other) const {
    return UInt(value_ / other.value_);
  }

  /**
   * Performs the % operation.
   */
  constexpr UInt rem(const UInt &other) const {
    return UInt(value_ % other.value_);
  }

  /**
   * Performs the unary ~ operation.
   */
  constexpr UInt bit_not() const { return UInt(~value_); }

  /**
   * Performs the & operation.
   */
  constexpr UInt bit_and(const UInt &other) const {
    return UInt(value_ & other.value_);
  }

  /**
   * Performs the | operation.
   */
  constexpr UInt bit_or(const UInt &other) const {
    return UInt(value_ | other.value_);
  }

  /**
   * Performs the ^ operation.
   */
  constexpr UInt bit_xor(const UInt &other) const {
    return UInt(value_ ^ other.value_);
  }

  /**
   * Performs the << operation.
   */
  constexpr UInt shl(const UInt &other) const {
    return UInt(value_ << other.value_);
  }

  /**
   * Performs the >> operation.
   */
  constexpr UInt shr(const UInt &other) const {
    return UInt(value_ >> other.value_);
  }

private:
  /**
   * An unsigned integer value.
   */
  T value_ = 0U;
};

/**
 * The 8-bit unsigned integer type.
 */
using UInt8 = UInt<::std::uint8_t>;

/**
 * The 16-bit unsigned integer type.
 */
using UInt16 = UInt<::std::uint16_t>;

/**
 * The 32-bit unsigned integer type.
 */
using UInt32 = UInt<::std::uint32_t>;

/**
 * The 64-bit unsigned integer type.
 */
using UInt64 = UInt<::std::uint64_t>;

/**
 * The pointer-sized unsigned integer type.
 *
 * The size of this primitive is how many bytes it takes to reference any
 * location in memory. For example, on a 32 bit target, this is 4 bytes and on a
 * 64 bit target, this is 8 bytes.
 */
using UIntPtr = UInt<::std::uintptr_t>;

/**
 * A 32-bit floating-point type (specifically, the “binary32” type defined in
 * IEEE 754-2008).
 */
class Float32 {
public:
  /**
   * Default constructor.
   */
  Float32() = default;

  /**
   * Constructor with a 32-bit floating-point value.
   */
  explicit Float32(float value);

  /**
   * Cast to other floating-point type.
   */
  template <::std::floating_point T> T into() const {
    return static_cast<T>(value_);
  }

  /**
   * Performs the unary - operation.
   */
  Float32 neg() const;

  /**
   * Performs the + operation.
   */
  Float32 add(const Float32 &other) const;

  /**
   * Performs the - operation.
   */
  Float32 sub(const Float32 &other) const;

  /**
   * Performs the * operation.
   */
  Float32 mul(const Float32 &other) const;

  /**
   * Performs the / operation.
   */
  Float32 div(const Float32 &other) const;

private:
  /**
   * A 32-bit floating-point value.
   */
  float value_ = 0.0F;
};

/**
 * A 64-bit floating-point type (specifically, the “binary64” type defined in
 * IEEE 754-2008).
 */
class Float64 {
public:
  /**
   * Default constructor.
   */
  Float64() = default;

  /**
   * Constructor with a 64-bit floating-point value.
   */
  explicit Float64(double value);

  /**
   * Cast to other floating-point type.
   */
  template <::std::floating_point T> T into() const {
    return static_cast<T>(value_);
  }

  /**
   * Performs the unary - operation.
   */
  Float64 neg() const;

  /**
   * Performs the + operation.
   */
  Float64 add(const Float64 &other) const;

  /**
   * Performs the - operation.
   */
  Float64 sub(const Float64 &other) const;

  /**
   * Performs the * operation.
   */
  Float64 mul(const Float64 &other) const;

  /**
   * Performs the / operation.
   */
  Float64 div(const Float64 &other) const;

private:
  /**
   * A 64-bit floating-point value.
   */
  double value_ = 0.0;
};

} // namespace gemstones
#endif
