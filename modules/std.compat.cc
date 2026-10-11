// -*- C++ -*- [std.modules] module std.compat

// Copyright The GNU Toolchain Authors.
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 3.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// Under Section 7 of GPL version 3, you are granted additional
// permissions described in the GCC Runtime Library Exception, version
// 3.1, as published by the Free Software Foundation.

// You should have received a copy of the GNU General Public License and
// a copy of the GCC Runtime Library Exception along with this program;
// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see
// <http://www.gnu.org/licenses/>.

module;

#include <stdckdint.h>
#include <string.h>

export module std.compat;
export import std;

#ifdef __STDC_VERSION_STDBIT_H__
// <stdbit.h>
export {
#define _GLIBCXX_STDBIT_FUNC(F)                                                \
  using __gnu_cxx::F##_uc;                                                     \
  using __gnu_cxx::F##_us;                                                     \
  using __gnu_cxx::F##_ui;                                                     \
  using __gnu_cxx::F##_ul;                                                     \
  using __gnu_cxx::F##_ull;                                                    \
  using __gnu_cxx::F
  _GLIBCXX_STDBIT_FUNC(stdc_leading_zeros);
  _GLIBCXX_STDBIT_FUNC(stdc_leading_ones);
  _GLIBCXX_STDBIT_FUNC(stdc_trailing_zeros);
  _GLIBCXX_STDBIT_FUNC(stdc_trailing_ones);
  _GLIBCXX_STDBIT_FUNC(stdc_first_leading_zero);
  _GLIBCXX_STDBIT_FUNC(stdc_first_leading_one);
  _GLIBCXX_STDBIT_FUNC(stdc_first_trailing_zero);
  _GLIBCXX_STDBIT_FUNC(stdc_first_trailing_one);
  _GLIBCXX_STDBIT_FUNC(stdc_count_zeros);
  _GLIBCXX_STDBIT_FUNC(stdc_count_ones);
  _GLIBCXX_STDBIT_FUNC(stdc_has_single_bit);
  _GLIBCXX_STDBIT_FUNC(stdc_bit_width);
  _GLIBCXX_STDBIT_FUNC(stdc_bit_floor);
  _GLIBCXX_STDBIT_FUNC(stdc_bit_ceil);
#undef _GLIBCXX_STDBIT_FUNC
}
#endif

#ifdef __STDC_VERSION_STDCKDINT_H__
// <stdckdint.h>
export {
  using __gnu_cxx::ckd_add;
  using __gnu_cxx::ckd_mul;
  using __gnu_cxx::ckd_sub;
}
#endif

#define STD_COMPAT 1

// C library exports are appended from std-clib.cc.in.
// C standard library exports for -*- C++ -*- std and std.compat modules
// This file is appended to std.cc.in or std-compat.cc.in.

#ifdef STD_COMPAT
#define C_LIB_NAMESPACE
#else
#define C_LIB_NAMESPACE namespace std
#endif

// C standard library headers [tab:headers.cpp.c]

// 19.3 <cassert>
// No exports

// 19.4 <cerrno>
// No exports

// 17.3.7 <cfloat> [cfloat.syn]
// No exports, only provides macros
// 17.3.6 <climits> [climits.syn]
// No exports, only provides macros

// 17.13.2 <cstdarg>
export C_LIB_NAMESPACE {
  using std::va_list;
  // va_arg and friend macros not exported
}

// 17.2.1 <cstddef> [cstddef.syn]
export C_LIB_NAMESPACE {
  using std::max_align_t;
  using std::nullptr_t;
  using std::ptrdiff_t;
  using std::size_t;
#ifndef STD_COMPAT
  using std::byte;
  using std::operator<<=;
  using std::operator<<;
  using std::operator>>=;
  using std::operator>>;
  using std::operator|=;
  using std::operator|;
  using std::operator&=;
  using std::operator&;
  using std::operator^=;
  using std::operator^;
  using std::operator~;
  using std::to_integer;
#endif
  // NULL and offsetof macros not exported
}

// 17.4 <cstdint>
export C_LIB_NAMESPACE {
  using std::int16_t;
  using std::int32_t;
  using std::int64_t;
  using std::int8_t;
  using std::int_fast16_t;
  using std::int_fast32_t;
  using std::int_fast64_t;
  using std::int_fast8_t;
  using std::int_least16_t;
  using std::int_least32_t;
  using std::int_least64_t;
  using std::int_least8_t;
  using std::intmax_t;
  using std::intptr_t;
  using std::uint16_t;
  using std::uint32_t;
  using std::uint64_t;
  using std::uint8_t;
  using std::uint_fast16_t;
  using std::uint_fast32_t;
  using std::uint_fast64_t;
  using std::uint_fast8_t;
  using std::uint_least16_t;
  using std::uint_least32_t;
  using std::uint_least64_t;
  using std::uint_least8_t;
  using std::uintmax_t;
  using std::uintptr_t;
}
