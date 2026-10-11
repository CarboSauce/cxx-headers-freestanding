// -*- C++ -*- [std.modules] module std

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

#include <algorithm>
#include <any>
#include <atomic>
#include <bit>
#include <climits>
#include <compare>
#include <concepts>
#include <contracts>
#include <coroutine>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <debugging>
#include <exception>
#include <expected>
#include <functional>
#include <initializer_list>
#include <iterator>
#include <limits>
#include <mdspan>
#include <memory>
#include <new>
#include <numeric>
#include <ranges>
#include <ratio>
#include <scoped_allocator>
#include <source_location>
#include <string_view>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <utility>
#include <version>

export module std;

// C library exports are appended from std-clib.cc.in.

// 27.4 <algorithm>
export namespace std {
namespace ranges {
using std::ranges::in_found_result;
using std::ranges::in_fun_result;
using std::ranges::in_in_out_result;
using std::ranges::in_in_result;
using std::ranges::in_out_out_result;
using std::ranges::in_out_result;
using std::ranges::min_max_result;
} // namespace ranges
using std::all_of;
namespace ranges {
using std::ranges::all_of;
}
using std::any_of;
namespace ranges {
using std::ranges::any_of;
}
using std::none_of;
namespace ranges {
using std::ranges::none_of;
}
using std::for_each;
namespace ranges {
using std::ranges::for_each;
using std::ranges::for_each_result;
} // namespace ranges
using std::for_each_n;
namespace ranges {
using std::ranges::for_each_n;
using std::ranges::for_each_n_result;
} // namespace ranges
using std::find;
using std::find_if;
using std::find_if_not;
namespace ranges {
using std::ranges::find;
using std::ranges::find_if;
using std::ranges::find_if_not;
} // namespace ranges
using std::find_end;
namespace ranges {
using std::ranges::find_end;
}
using std::find_first_of;
namespace ranges {
using std::ranges::find_first_of;
}
using std::adjacent_find;
namespace ranges {
using std::ranges::adjacent_find;
}
using std::count;
using std::count_if;
namespace ranges {
using std::ranges::count;
using std::ranges::count_if;
} // namespace ranges
using std::mismatch;
namespace ranges {
using std::ranges::mismatch;
using std::ranges::mismatch_result;
} // namespace ranges
using std::equal;
namespace ranges {
using std::ranges::equal;
}
using std::is_permutation;
namespace ranges {
using std::ranges::is_permutation;
}
using std::search;
namespace ranges {
using std::ranges::search;
}
using std::search_n;
namespace ranges {
using std::ranges::search_n;
}
namespace ranges {}
using std::copy;
namespace ranges {
using std::ranges::copy;
using std::ranges::copy_result;
} // namespace ranges
using std::copy_n;
namespace ranges {
using std::ranges::copy_n;
using std::ranges::copy_n_result;
} // namespace ranges
using std::copy_if;
namespace ranges {
using std::ranges::copy_if;
using std::ranges::copy_if_result;
} // namespace ranges
using std::copy_backward;
namespace ranges {
using std::ranges::copy_backward;
using std::ranges::copy_backward_result;
} // namespace ranges
using std::move;
namespace ranges {
using std::ranges::move;
using std::ranges::move_result;
} // namespace ranges
using std::move_backward;
namespace ranges {
using std::ranges::move_backward;
using std::ranges::move_backward_result;
} // namespace ranges
using std::swap_ranges;
namespace ranges {
using std::ranges::swap_ranges;
using std::ranges::swap_ranges_result;
} // namespace ranges
using std::iter_swap;
using std::transform;
namespace ranges {
using std::ranges::binary_transform_result;
using std::ranges::transform;
using std::ranges::unary_transform_result;
} // namespace ranges
using std::replace;
using std::replace_if;
namespace ranges {
using std::ranges::replace;
using std::ranges::replace_if;
} // namespace ranges
using std::replace_copy;
using std::replace_copy_if;
namespace ranges {
using std::ranges::replace_copy;
using std::ranges::replace_copy_if;
using std::ranges::replace_copy_if_result;
using std::ranges::replace_copy_result;
} // namespace ranges
using std::fill;
using std::fill_n;
namespace ranges {
using std::ranges::fill;
using std::ranges::fill_n;
} // namespace ranges
using std::generate;
using std::generate_n;
namespace ranges {
using std::ranges::generate;
using std::ranges::generate_n;
} // namespace ranges
using std::remove;
using std::remove_if;
namespace ranges {
using std::ranges::remove;
using std::ranges::remove_if;
} // namespace ranges
using std::remove_copy;
using std::remove_copy_if;
namespace ranges {
using std::ranges::remove_copy;
using std::ranges::remove_copy_if;
using std::ranges::remove_copy_if_result;
using std::ranges::remove_copy_result;
} // namespace ranges
using std::unique;
namespace ranges {
using std::ranges::unique;
}
using std::unique_copy;
namespace ranges {
using std::ranges::unique_copy;
using std::ranges::unique_copy_result;
} // namespace ranges
using std::reverse;
namespace ranges {
using std::ranges::reverse;
}
using std::reverse_copy;
namespace ranges {
using std::ranges::reverse_copy;
using std::ranges::reverse_copy_result;
} // namespace ranges
using std::rotate;
namespace ranges {
using std::ranges::rotate;
}
using std::rotate_copy;
namespace ranges {
using std::ranges::rotate_copy;
using std::ranges::rotate_copy_result;
} // namespace ranges
using std::sample;
namespace ranges {
using std::ranges::sample;
}
using std::shuffle;
namespace ranges {
using std::ranges::shuffle;
}
using std::shift_left;
using std::shift_right;
#if __cpp_lib_shift >= 202202L // >= C++23
namespace ranges {
using std::ranges::shift_left;
using std::ranges::shift_right;
} // namespace ranges
#endif
using std::sort;
namespace ranges {
using std::ranges::sort;
}
using std::stable_sort;
namespace ranges {
using std::ranges::stable_sort;
}
using std::partial_sort;
namespace ranges {
using std::ranges::partial_sort;
}
using std::partial_sort_copy;
namespace ranges {
using std::ranges::partial_sort_copy;
using std::ranges::partial_sort_copy_result;
} // namespace ranges
using std::is_sorted;
using std::is_sorted_until;
namespace ranges {
using std::ranges::is_sorted;
using std::ranges::is_sorted_until;
} // namespace ranges
using std::nth_element;
namespace ranges {
using std::ranges::nth_element;
}
using std::lower_bound;
namespace ranges {
using std::ranges::lower_bound;
}
using std::upper_bound;
namespace ranges {
using std::ranges::upper_bound;
}
using std::equal_range;
namespace ranges {
using std::ranges::equal_range;
}
using std::binary_search;
namespace ranges {
using std::ranges::binary_search;
}
using std::is_partitioned;
namespace ranges {
using std::ranges::is_partitioned;
}
using std::partition;
namespace ranges {
using std::ranges::partition;
}
using std::partition_copy;
namespace ranges {
using std::ranges::partition_copy;
using std::ranges::partition_copy_result;
} // namespace ranges
using std::partition_point;
namespace ranges {
using std::ranges::partition_point;
}
using std::merge;
namespace ranges {
using std::ranges::merge;
using std::ranges::merge_result;
} // namespace ranges
using std::inplace_merge;
namespace ranges {
using std::ranges::inplace_merge;
}
using std::includes;
namespace ranges {
using std::ranges::includes;
}
using std::set_union;
namespace ranges {
using std::ranges::set_union;
using std::ranges::set_union_result;
} // namespace ranges
using std::set_intersection;
namespace ranges {
using std::ranges::set_intersection;
using std::ranges::set_intersection_result;
} // namespace ranges
using std::set_difference;
namespace ranges {
using std::ranges::set_difference;
using std::ranges::set_difference_result;
} // namespace ranges
using std::set_symmetric_difference;
namespace ranges {
using std::ranges::set_symmetric_difference;
using std::ranges::set_symmetric_difference_result;
} // namespace ranges
using std::push_heap;
namespace ranges {
using std::ranges::push_heap;
}
using std::pop_heap;
namespace ranges {
using std::ranges::pop_heap;
}
using std::make_heap;
namespace ranges {
using std::ranges::make_heap;
}
using std::sort_heap;
namespace ranges {
using std::ranges::sort_heap;
}
using std::is_heap;
namespace ranges {
using std::ranges::is_heap;
}
using std::is_heap_until;
namespace ranges {
using std::ranges::is_heap_until;
}
using std::min;
namespace ranges {
using std::ranges::min;
}
using std::max;
namespace ranges {
using std::ranges::max;
}
using std::minmax;
namespace ranges {
using std::ranges::minmax;
using std::ranges::minmax_result;
} // namespace ranges
using std::min_element;
namespace ranges {
using std::ranges::min_element;
}
using std::max_element;
namespace ranges {
using std::ranges::max_element;
}
using std::minmax_element;
namespace ranges {
using std::ranges::minmax_element;
using std::ranges::minmax_element_result;
} // namespace ranges
using std::clamp;
namespace ranges {
using std::ranges::clamp;
}
using std::lexicographical_compare;
namespace ranges {
using std::ranges::lexicographical_compare;
}
using std::lexicographical_compare_three_way;
using std::next_permutation;
namespace ranges {
using std::ranges::next_permutation;
using std::ranges::next_permutation_result;
} // namespace ranges
using std::prev_permutation;
namespace ranges {
using std::ranges::prev_permutation;
using std::ranges::prev_permutation_result;
} // namespace ranges
namespace ranges {
#if __cpp_lib_ranges_contains
using ranges::contains;
using ranges::contains_subrange;
#endif
#if __cpp_lib_ranges_fold
using ranges::fold_left;
using ranges::fold_left_first;
using ranges::fold_left_first_with_iter;
using ranges::fold_left_first_with_iter_result;
using ranges::fold_left_with_iter;
using ranges::fold_left_with_iter_result;
using ranges::fold_right;
using ranges::fold_right_last;
using ranges::in_value_result;
using ranges::out_value_result;
#endif
#if __cpp_lib_ranges_find_last
using ranges::find_last;
using ranges::find_last_if;
using ranges::find_last_if_not;
#endif
#if __cpp_lib_ranges_starts_ends_with
using ranges::ends_with;
using ranges::starts_with;
#endif
} // namespace ranges
} // namespace std

// 22.7.2 <any>
export namespace std {
using std::any;
using std::any_cast;
using std::bad_any_cast;
using std::make_any;
using std::swap;
} // namespace std

// 24.3.2 <array>
export namespace std {
using std::array;
using std::operator==;
using std::operator<=>;
using std::get;
using std::swap;
using std::to_array;
using std::tuple_element;
using std::tuple_size;
} // namespace std

// 33.5.2 <atomic>
export namespace std {
using std::atomic;
using std::atomic_bool;
using std::atomic_char;
using std::atomic_char16_t;
using std::atomic_char32_t;
using std::atomic_char8_t;
using std::atomic_compare_exchange_strong;
using std::atomic_compare_exchange_strong_explicit;
using std::atomic_compare_exchange_weak;
using std::atomic_compare_exchange_weak_explicit;
using std::atomic_exchange;
using std::atomic_exchange_explicit;
using std::atomic_fetch_add;
using std::atomic_fetch_add_explicit;
using std::atomic_fetch_and;
using std::atomic_fetch_and_explicit;
using std::atomic_fetch_or;
using std::atomic_fetch_or_explicit;
using std::atomic_fetch_sub;
using std::atomic_fetch_sub_explicit;
using std::atomic_fetch_xor;
using std::atomic_fetch_xor_explicit;
#ifdef __cpp_lib_atomic_min_max
using std::atomic_fetch_max;
using std::atomic_fetch_max_explicit;
using std::atomic_fetch_min;
using std::atomic_fetch_min_explicit;
#endif
using std::atomic_flag;
using std::atomic_flag_clear;
using std::atomic_flag_clear_explicit;
#if __cpp_lib_atomic_wait
using std::atomic_flag_notify_all;
using std::atomic_flag_notify_one;
#endif
#if __cpp_lib_atomic_flag_test
using std::atomic_flag_test;
using std::atomic_flag_test_and_set;
using std::atomic_flag_test_and_set_explicit;
using std::atomic_flag_test_explicit;
#endif
#if __cpp_lib_atomic_wait
using std::atomic_flag_wait;
using std::atomic_flag_wait_explicit;
#endif
using std::atomic_init;
using std::atomic_int;
using std::atomic_int16_t;
using std::atomic_int32_t;
using std::atomic_int64_t;
using std::atomic_int8_t;
using std::atomic_int_fast16_t;
using std::atomic_int_fast32_t;
using std::atomic_int_fast64_t;
using std::atomic_int_fast8_t;
using std::atomic_int_least16_t;
using std::atomic_int_least32_t;
using std::atomic_int_least64_t;
using std::atomic_int_least8_t;
using std::atomic_intmax_t;
using std::atomic_intptr_t;
using std::atomic_is_lock_free;
using std::atomic_llong;
using std::atomic_load;
using std::atomic_load_explicit;
using std::atomic_long;
#if __cpp_lib_atomic_wait
using std::atomic_notify_all;
using std::atomic_notify_one;
#endif
using std::atomic_ptrdiff_t;
using std::atomic_ref;
using std::atomic_schar;
using std::atomic_short;
using std::atomic_signal_fence;
#ifdef __cpp_lib_atomic_lock_free_type_aliases
using std::atomic_signed_lock_free;
#endif
using std::atomic_size_t;
using std::atomic_store;
using std::atomic_store_explicit;
using std::atomic_thread_fence;
using std::atomic_uchar;
using std::atomic_uint;
using std::atomic_uint16_t;
using std::atomic_uint32_t;
using std::atomic_uint64_t;
using std::atomic_uint8_t;
using std::atomic_uint_fast16_t;
using std::atomic_uint_fast32_t;
using std::atomic_uint_fast64_t;
using std::atomic_uint_fast8_t;
using std::atomic_uint_least16_t;
using std::atomic_uint_least32_t;
using std::atomic_uint_least64_t;
using std::atomic_uint_least8_t;
using std::atomic_uintmax_t;
using std::atomic_uintptr_t;
using std::atomic_ullong;
using std::atomic_ulong;
#ifdef __cpp_lib_atomic_lock_free_type_aliases
using std::atomic_unsigned_lock_free;
#endif
using std::atomic_ushort;
#if __cpp_lib_atomic_wait
using std::atomic_wait;
using std::atomic_wait_explicit;
#endif
using std::atomic_wchar_t;
using std::kill_dependency;
using std::memory_order;
using std::memory_order_acq_rel;
using std::memory_order_acquire;
using std::memory_order_consume;
using std::memory_order_relaxed;
using std::memory_order_release;
using std::memory_order_seq_cst;
// ATOMIC_*_LOCK_FREE not exported
} // namespace std

// 33.9.3 <barrier>
#if __cpp_lib_barrier
export namespace std {
using std::barrier;
}
#endif

// 22.15 <bit>
export namespace std {
using std::bit_cast;
using std::bit_ceil;
using std::bit_floor;
using std::bit_width;
using std::countl_one;
using std::countl_zero;
using std::countr_one;
using std::countr_zero;
using std::endian;
using std::has_single_bit;
using std::popcount;
using std::rotl;
using std::rotr;
#if __cpp_lib_byteswap // >= C++23
using std::byteswap;
#endif
} // namespace std

// 17.11.1 <compare>
export namespace std {
using std::common_comparison_category;
using std::common_comparison_category_t;
using std::compare_partial_order_fallback;
using std::compare_strong_order_fallback;
using std::compare_three_way;
using std::compare_three_way_result;
using std::compare_three_way_result_t;
using std::compare_weak_order_fallback;
using std::is_eq;
using std::is_gt;
using std::is_gteq;
using std::is_lt;
using std::is_lteq;
using std::is_neq;
using std::partial_order;
using std::partial_ordering;
using std::strong_order;
using std::strong_ordering;
using std::three_way_comparable;
using std::three_way_comparable_with;
using std::weak_order;
using std::weak_ordering;
#if __glibcxx_type_order >= 202506L
using std::type_order;
using std::type_order_v;
#endif
} // namespace std

// 18 <concepts>
export namespace std {
using std::assignable_from;
using std::common_reference_with;
using std::common_with;
using std::convertible_to;
using std::derived_from;
using std::floating_point;
using std::integral;
using std::same_as;
using std::signed_integral;
using std::unsigned_integral;
namespace ranges {
using std::ranges::swap;
}
using std::constructible_from;
using std::copy_constructible;
using std::copyable;
using std::default_initializable;
using std::destructible;
using std::equality_comparable;
using std::equality_comparable_with;
using std::equivalence_relation;
using std::invocable;
using std::movable;
using std::move_constructible;
using std::predicate;
using std::regular;
using std::regular_invocable;
using std::relation;
using std::semiregular;
using std::strict_weak_order;
using std::swappable;
using std::swappable_with;
using std::totally_ordered;
using std::totally_ordered_with;
} // namespace std

// 33.7 <condition_variable>
#if _GLIBCXX_HAS_GTHREADS
export namespace std {
using std::condition_variable;
using std::condition_variable_any;
using std::cv_status;
using std::notify_all_at_thread_exit;
} // namespace std
#endif

// 17.10.1 <contracts>
#if __cpp_lib_contracts
export namespace std::contracts {
using std::contracts::assertion_kind;
using std::contracts::contract_violation;
using std::contracts::detection_mode;
using std::contracts::evaluation_semantic;
using std::contracts::invoke_default_contract_violation_handler;
} // namespace std::contracts
#endif // __cpp_lib_contracts

// 17.12.2 <coroutine>
#if __cpp_lib_coroutine
export namespace std {
using std::coroutine_handle;
using std::coroutine_traits;
using std::operator==;
using std::operator<=>;
using std::hash;
using std::noop_coroutine;
using std::noop_coroutine_handle;
using std::noop_coroutine_promise;
using std::suspend_always;
using std::suspend_never;
} // namespace std
#endif // __cpp_lib_coroutine

// 22.16 <debugging>
#if __cpp_lib_debugging
export namespace std {
using std::breakpoint;
using std::breakpoint_if_debugging;
using std::is_debugger_present;
} // namespace std
#endif

// 22.8 <expected>
#if __cpp_lib_expected
export namespace std {
using std::bad_expected_access;
using std::expected;
using std::unexpect;
using std::unexpect_t;
using std::unexpected;
} // namespace std
#endif

// <functional>
export namespace std {
using std::bind;
using std::bind_front;
#if __cpp_lib_bind_back
using std::bind_back;
#endif
using std::bit_and;
using std::bit_not;
using std::bit_or;
using std::bit_xor;
using std::compare_three_way;
using std::cref;
using std::divides;
using std::equal_to;
using std::greater;
using std::greater_equal;
using std::identity;
using std::invoke;
#if __cpp_lib_invoke_r
using std::invoke_r;
#endif
using std::is_bind_expression;
using std::is_bind_expression_v;
using std::is_placeholder;
using std::is_placeholder_v;
using std::less;
using std::less_equal;
using std::logical_and;
using std::logical_not;
using std::logical_or;
using std::minus;
using std::modulus;
#if __cpp_lib_move_only_function
using std::move_only_function;
#endif
#if __cpp_lib_copyable_function
using std::copyable_function;
#endif
#if __cpp_lib_function_ref
using std::function_ref;
#endif
using std::multiplies;
using std::negate;
using std::not_equal_to;
using std::not_fn;
using std::plus;
using std::ref;
using std::reference_wrapper;
namespace placeholders {
using std::placeholders::_1;
using std::placeholders::_10;
using std::placeholders::_2;
using std::placeholders::_3;
using std::placeholders::_4;
using std::placeholders::_5;
using std::placeholders::_6;
using std::placeholders::_7;
using std::placeholders::_8;
using std::placeholders::_9;
} // namespace placeholders
using std::bad_function_call;
using std::function;
using std::mem_fn;
using std::swap;
using std::operator==;
using std::default_searcher;
using std::hash;
namespace ranges {
using std::ranges::equal_to;
using std::ranges::greater;
using std::ranges::greater_equal;
using std::ranges::less;
using std::ranges::less_equal;
using std::ranges::not_equal_to;
} // namespace ranges
} // namespace std

// 17.10.2 <initializer_list>
export namespace std {
using std::begin;
using std::end;
using std::initializer_list;
} // namespace std

// <iterator>
export namespace std {
using std::incrementable_traits;
using std::indirectly_readable_traits;
using std::iter_difference_t;
using std::iter_reference_t;
using std::iter_value_t;
using std::iterator_traits;
// _Cpo is an implementation detail we can't avoid exposing; if we do the
// using in ranges directly, it conflicts with any friend functions of the
// same name, which is why the customization points are in an inline
// namespace in the first place.
namespace ranges::inline _Cpo {
using _Cpo::iter_move;
using _Cpo::iter_swap;
} // namespace ranges::inline _Cpo
using std::advance;
using std::bidirectional_iterator;
using std::bidirectional_iterator_tag;
using std::contiguous_iterator;
using std::contiguous_iterator_tag;
using std::disable_sized_sentinel_for;
using std::distance;
using std::forward_iterator;
using std::forward_iterator_tag;
using std::incrementable;
using std::indirect_binary_predicate;
using std::indirect_equivalence_relation;
using std::indirect_result_t;
using std::indirect_strict_weak_order;
using std::indirect_unary_predicate;
using std::indirectly_comparable;
using std::indirectly_copyable;
using std::indirectly_copyable_storable;
using std::indirectly_movable;
using std::indirectly_movable_storable;
using std::indirectly_readable;
using std::indirectly_regular_unary_invocable;
using std::indirectly_swappable;
using std::indirectly_unary_invocable;
using std::indirectly_writable;
using std::input_iterator;
using std::input_iterator_tag;
using std::input_or_output_iterator;
using std::iter_common_reference_t;
using std::iter_rvalue_reference_t;
using std::mergeable;
using std::next;
using std::output_iterator;
using std::output_iterator_tag;
using std::permutable;
using std::prev;
using std::projected;
using std::random_access_iterator;
using std::random_access_iterator_tag;
using std::sentinel_for;
using std::sized_sentinel_for;
using std::sortable;
using std::weakly_incrementable;
namespace ranges {
using std::ranges::advance;
using std::ranges::distance;
using std::ranges::next;
using std::ranges::prev;
} // namespace ranges
using std::reverse_iterator;
using std::operator==;
using std::operator!=;
using std::operator<;
using std::operator>;
using std::operator<=;
using std::operator>=;
using std::operator<=>;
using std::operator-;
using std::operator+;
using std::back_insert_iterator;
using std::back_inserter;
using std::begin;
using std::cbegin;
using std::cend;
using std::common_iterator;
using std::counted_iterator;
using std::crbegin;
using std::crend;
using std::data;
using std::default_sentinel;
using std::default_sentinel_t;
using std::empty;
using std::end;
using std::front_insert_iterator;
using std::front_inserter;
using std::insert_iterator;
using std::inserter;
using std::iterator;
using std::make_move_iterator;
using std::make_reverse_iterator;
using std::move_iterator;
using std::move_sentinel;
using std::rbegin;
using std::rend;
using std::size;
using std::ssize;
using std::unreachable_sentinel;
using std::unreachable_sentinel_t;
#if __glibcxx_ranges_as_const // >= C++23
using std::basic_const_iterator;
using std::const_iterator;
using std::const_sentinel;
using std::iter_const_reference_t;
using std::make_const_iterator;
using std::make_const_sentinel;
#endif
#if __glibcxx_algorithm_default_value_type // >= C++26
using std::projected_value_t;
#endif
} // namespace std

// 17.3.3 <limits> [limits.syn]
export namespace std {
using std::float_denorm_style; // deprecated in C++23
using std::float_round_style;
using std::numeric_limits;
} // namespace std

// <mdspan>
#if __glibcxx_mdspan
export namespace std {
using std::dextents;
using std::extents;
#if __glibcxx_mdspan >= 202406L
using std::dims;
#endif
using std::default_accessor;
using std::layout_left;
using std::layout_right;
using std::layout_stride;
#if __glibcxx_aligned_accessor
using std::aligned_accessor;
#endif
using std::mdspan;
#if __glibcxx_padded_layouts
using std::layout_left_padded;
using std::layout_right_padded;
#endif
#if __glibcxx_submdspan
using std::canonical_slices;
using std::extent_slice;
using std::full_extent;
using std::full_extent_t;
using std::range_slice;
using std::subextents;
using std::submdspan;
using std::submdspan_mapping_result;
#endif
} // namespace std
#endif

// 20.2 <memory>
export namespace std {
using std::align;
using std::allocator;
using std::allocator_arg;
using std::allocator_arg_t;
using std::allocator_traits;
using std::assume_aligned;
#if __glibcxx_is_sufficiently_aligned
using std::is_sufficiently_aligned;
#endif
using std::make_obj_using_allocator;
using std::pointer_traits;
using std::to_address;
using std::uninitialized_construct_using_allocator;
using std::uses_allocator;
using std::uses_allocator_construction_args;
using std::uses_allocator_v;
using std::operator==;
using std::addressof;
using std::uninitialized_default_construct;
using std::uninitialized_default_construct_n;
namespace ranges {
using std::ranges::uninitialized_default_construct;
using std::ranges::uninitialized_default_construct_n;
} // namespace ranges
using std::uninitialized_value_construct;
using std::uninitialized_value_construct_n;
namespace ranges {
using std::ranges::uninitialized_value_construct;
using std::ranges::uninitialized_value_construct_n;
} // namespace ranges
using std::uninitialized_copy;
using std::uninitialized_copy_n;
namespace ranges {
using std::ranges::uninitialized_copy;
using std::ranges::uninitialized_copy_n;
using std::ranges::uninitialized_copy_n_result;
using std::ranges::uninitialized_copy_result;
} // namespace ranges
using std::uninitialized_move;
using std::uninitialized_move_n;
namespace ranges {
using std::ranges::uninitialized_move;
using std::ranges::uninitialized_move_n;
using std::ranges::uninitialized_move_n_result;
using std::ranges::uninitialized_move_result;
} // namespace ranges
using std::uninitialized_fill;
using std::uninitialized_fill_n;
namespace ranges {
using std::ranges::uninitialized_fill;
using std::ranges::uninitialized_fill_n;
} // namespace ranges
using std::construct_at;
namespace ranges {
using std::ranges::construct_at;
}
using std::destroy;
using std::destroy_at;
using std::destroy_n;
namespace ranges {
using std::ranges::destroy;
using std::ranges::destroy_at;
using std::ranges::destroy_n;
} // namespace ranges
using std::default_delete;
// using std::make_unique_for_overwrite;
using std::unique_ptr;
using std::operator<;
using std::operator>;
using std::operator<=;
using std::operator>=;
using std::operator<=>;
using std::operator<<;
using std::allocate_shared;
// using std::allocate_shared_for_overwrite;
using std::atomic_compare_exchange_strong;
using std::atomic_compare_exchange_strong_explicit;
using std::atomic_compare_exchange_weak;
using std::atomic_compare_exchange_weak_explicit;
using std::atomic_exchange;
using std::atomic_exchange_explicit;
using std::atomic_is_lock_free;
using std::atomic_load;
using std::atomic_load_explicit;
using std::atomic_store;
using std::atomic_store_explicit;
using std::bad_weak_ptr;
using std::const_pointer_cast;
using std::dynamic_pointer_cast;
using std::enable_shared_from_this;
using std::get_deleter;
using std::hash;
using std::make_shared;
// using std::make_shared_for_overwrite;
using std::owner_less;
using std::reinterpret_pointer_cast;
using std::shared_ptr;
using std::static_pointer_cast;
using std::swap;
using std::weak_ptr;
#if __cpp_lib_out_ptr
using std::inout_ptr;
using std::inout_ptr_t;
using std::out_ptr;
using std::out_ptr_t;
#endif
#if __cpp_lib_indirect
using std::indirect;
namespace pmr {
using std::pmr::indirect;
}
#endif
#if __cpp_lib_polymorphic
using std::polymorphic;
namespace pmr {
using std::pmr::polymorphic;
}
#endif
#if __cpp_lib_smart_ptr_owner_equality
using std::owner_equal;
using std::owner_hash;
#endif
#if __cpp_lib_start_lifetime_as
using std::start_lifetime_as;
using std::start_lifetime_as_array;
#endif
#ifdef __glibcxx_allocate_at_least
using std::allocation_result;
#endif
} // namespace std

// <meta>
#if __glibcxx_reflection >= 202603L
export namespace std {
#if __has_builtin(__builtin_is_string_literal)
using std::is_string_literal;
#endif
using std::define_static_array;
using std::define_static_object;
using std::define_static_string;
namespace meta {
using std::meta::exception;
using std::meta::info;
using std::meta::operators;
using enum std::meta::operators;
using std::meta::access_context;
using std::meta::alignment_of;
using std::meta::bases_of;
using std::meta::bit_size_of;
using std::meta::can_substitute;
using std::meta::constant_of;
using std::meta::current_class;
using std::meta::current_function;
using std::meta::current_namespace;
using std::meta::data_member_options;
using std::meta::data_member_spec;
using std::meta::dealias;
using std::meta::define_aggregate;
using std::meta::display_string_of;
using std::meta::enumerators_of;
using std::meta::extract;
using std::meta::has_automatic_storage_duration;
using std::meta::has_c_language_linkage;
using std::meta::has_default_argument;
using std::meta::has_default_member_initializer;
using std::meta::has_external_linkage;
using std::meta::has_identifier;
using std::meta::has_inaccessible_bases;
using std::meta::has_inaccessible_nonstatic_data_members;
using std::meta::has_inaccessible_subobjects;
using std::meta::has_internal_linkage;
using std::meta::has_linkage;
using std::meta::has_module_linkage;
using std::meta::has_parent;
using std::meta::has_static_storage_duration;
using std::meta::has_template_arguments;
using std::meta::has_thread_storage_duration;
using std::meta::identifier_of;
using std::meta::is_abstract_type;
using std::meta::is_accessible;
using std::meta::is_aggregate_type;
using std::meta::is_alias_template;
using std::meta::is_annotation;
using std::meta::is_arithmetic_type;
using std::meta::is_array_type;
using std::meta::is_assignment;
using std::meta::is_base;
using std::meta::is_bit_field;
using std::meta::is_class_member;
using std::meta::is_class_template;
using std::meta::is_class_type;
using std::meta::is_complete_type;
using std::meta::is_compound_type;
using std::meta::is_concept;
using std::meta::is_const;
using std::meta::is_const_type;
using std::meta::is_constructor;
using std::meta::is_constructor_template;
using std::meta::is_conversion_function;
using std::meta::is_conversion_function_template;
using std::meta::is_copy_assignment;
using std::meta::is_copy_constructor;
using std::meta::is_data_member_spec;
using std::meta::is_default_constructor;
using std::meta::is_defaulted;
using std::meta::is_deleted;
using std::meta::is_destructor;
using std::meta::is_empty_type;
using std::meta::is_enum_type;
using std::meta::is_enumerable_type;
using std::meta::is_enumerator;
using std::meta::is_explicit;
using std::meta::is_explicit_object_parameter;
using std::meta::is_final;
using std::meta::is_final_type;
using std::meta::is_floating_point_type;
using std::meta::is_function;
using std::meta::is_function_parameter;
using std::meta::is_function_template;
using std::meta::is_function_type;
using std::meta::is_fundamental_type;
using std::meta::is_integral_type;
using std::meta::is_literal_operator;
using std::meta::is_literal_operator_template;
using std::meta::is_lvalue_reference_qualified;
using std::meta::is_lvalue_reference_type;
using std::meta::is_member_function_pointer_type;
using std::meta::is_member_object_pointer_type;
using std::meta::is_member_pointer_type;
using std::meta::is_move_assignment;
using std::meta::is_move_constructor;
using std::meta::is_mutable_member;
using std::meta::is_namespace;
using std::meta::is_namespace_alias;
using std::meta::is_namespace_member;
using std::meta::is_noexcept;
using std::meta::is_nonstatic_data_member;
using std::meta::is_null_pointer_type;
using std::meta::is_object;
using std::meta::is_object_type;
using std::meta::is_operator_function;
using std::meta::is_operator_function_template;
using std::meta::is_override;
using std::meta::is_pointer_type;
using std::meta::is_polymorphic_type;
using std::meta::is_private;
using std::meta::is_protected;
using std::meta::is_public;
using std::meta::is_pure_virtual;
using std::meta::is_reference_type;
using std::meta::is_reflection_type;
using std::meta::is_rvalue_reference_qualified;
using std::meta::is_rvalue_reference_type;
using std::meta::is_scalar_type;
using std::meta::is_special_member_function;
using std::meta::is_standard_layout_type;
using std::meta::is_static_member;
using std::meta::is_structured_binding;
using std::meta::is_template;
using std::meta::is_trivially_copyable_type;
using std::meta::is_type;
using std::meta::is_type_alias;
using std::meta::is_union_type;
using std::meta::is_user_declared;
using std::meta::is_user_provided;
using std::meta::is_value;
using std::meta::is_vararg_function;
using std::meta::is_variable;
using std::meta::is_variable_template;
using std::meta::is_virtual;
using std::meta::is_void_type;
using std::meta::is_volatile;
using std::meta::is_volatile_type;
using std::meta::member_offset;
using std::meta::members_of;
using std::meta::nonstatic_data_members_of;
using std::meta::object_of;
using std::meta::offset_of;
using std::meta::operator_of;
using std::meta::parameters_of;
using std::meta::parent_of;
using std::meta::reflect_constant;
using std::meta::reflect_constant_array;
using std::meta::reflect_constant_string;
using std::meta::reflect_function;
using std::meta::reflect_object;
using std::meta::reflection_range;
using std::meta::return_type_of;
using std::meta::size_of;
using std::meta::source_location_of;
using std::meta::static_data_members_of;
using std::meta::subobjects_of;
using std::meta::substitute;
using std::meta::symbol_of;
using std::meta::template_arguments_of;
using std::meta::template_of;
using std::meta::type_of;
using std::meta::u8display_string_of;
using std::meta::u8identifier_of;
using std::meta::u8symbol_of;
using std::meta::variable_of;
#if __glibcxx_is_structural >= 202603L
using std::meta::is_structural_type;
#endif
using std::meta::add_const;
using std::meta::add_cv;
using std::meta::add_lvalue_reference;
using std::meta::add_pointer;
using std::meta::add_rvalue_reference;
using std::meta::add_volatile;
using std::meta::annotations_of;
using std::meta::annotations_of_with_type;
using std::meta::common_reference;
using std::meta::common_type;
using std::meta::decay;
using std::meta::extent;
using std::meta::has_unique_object_representations;
using std::meta::has_virtual_destructor;
using std::meta::invoke_result;
using std::meta::is_assignable_type;
using std::meta::is_base_of_type;
using std::meta::is_bounded_array_type;
using std::meta::is_constructible_type;
using std::meta::is_convertible_type;
using std::meta::is_copy_assignable_type;
using std::meta::is_copy_constructible_type;
using std::meta::is_default_constructible_type;
using std::meta::is_destructible_type;
using std::meta::is_implicit_lifetime_type;
using std::meta::is_invocable_r_type;
using std::meta::is_invocable_type;
using std::meta::is_layout_compatible_type;
using std::meta::is_move_assignable_type;
using std::meta::is_move_constructible_type;
using std::meta::is_nothrow_assignable_type;
using std::meta::is_nothrow_constructible_type;
using std::meta::is_nothrow_convertible_type;
using std::meta::is_nothrow_copy_assignable_type;
using std::meta::is_nothrow_copy_constructible_type;
using std::meta::is_nothrow_default_constructible_type;
using std::meta::is_nothrow_destructible_type;
using std::meta::is_nothrow_invocable_r_type;
using std::meta::is_nothrow_invocable_type;
using std::meta::is_nothrow_move_assignable_type;
using std::meta::is_nothrow_move_constructible_type;
using std::meta::is_nothrow_swappable_type;
using std::meta::is_nothrow_swappable_with_type;
using std::meta::is_pointer_interconvertible_base_of_type;
using std::meta::is_same_type;
using std::meta::is_scoped_enum_type;
using std::meta::is_signed_type;
using std::meta::is_swappable_type;
using std::meta::is_swappable_with_type;
using std::meta::is_trivially_assignable_type;
using std::meta::is_trivially_constructible_type;
using std::meta::is_trivially_copy_assignable_type;
using std::meta::is_trivially_copy_constructible_type;
using std::meta::is_trivially_default_constructible_type;
using std::meta::is_trivially_destructible_type;
using std::meta::is_trivially_move_assignable_type;
using std::meta::is_trivially_move_constructible_type;
using std::meta::is_unbounded_array_type;
using std::meta::is_unsigned_type;
using std::meta::is_virtual_base_of_type;
using std::meta::make_signed;
using std::meta::make_unsigned;
using std::meta::rank;
using std::meta::reference_constructs_from_temporary;
using std::meta::reference_converts_from_temporary;
using std::meta::remove_all_extents;
using std::meta::remove_const;
using std::meta::remove_cv;
using std::meta::remove_cvref;
using std::meta::remove_extent;
using std::meta::remove_pointer;
using std::meta::remove_reference;
using std::meta::remove_volatile;
using std::meta::tuple_element;
using std::meta::tuple_size;
using std::meta::type_order;
using std::meta::underlying_type;
using std::meta::unwrap_ref_decay;
using std::meta::unwrap_reference;
using std::meta::variant_alternative;
using std::meta::variant_size;
} // namespace meta
} // namespace std
#endif

// 17.6.2 <new> [new.syn]
export namespace std {
using std::align_val_t;
using std::bad_alloc;
using std::bad_array_new_length;
using std::destroying_delete;
using std::destroying_delete_t;
using std::get_new_handler;
using std::hardware_constructive_interference_size;
using std::hardware_destructive_interference_size;
using std::launder;
using std::new_handler;
using std::nothrow;
using std::nothrow_t;
using std::set_new_handler;
} // namespace std
export {
  using ::operator new;
  using ::operator delete;
  using ::operator new[];
  using ::operator delete[];
}

// <numeric>
export namespace std {
using std::accumulate;
using std::adjacent_difference;
using std::exclusive_scan;
using std::gcd;
using std::inclusive_scan;
using std::inner_product;
using std::iota;
using std::lcm;
using std::midpoint;
using std::partial_sum;
using std::reduce;
using std::transform_exclusive_scan;
using std::transform_inclusive_scan;
using std::transform_reduce;
#if __cpp_lib_ranges_iota
namespace ranges {
using ranges::iota;
using ranges::iota_result;
} // namespace ranges
#endif
#if __cpp_lib_saturation_arithmetic
using std::saturating_add;
using std::saturating_cast;
using std::saturating_div;
using std::saturating_mul;
using std::saturating_sub;
#endif
} // namespace std

// <optional>
export namespace std {
using std::bad_optional_access;
using std::nullopt;
using std::nullopt_t;
using std::optional;
using std::operator==;
using std::operator!=;
using std::operator<;
using std::operator>;
using std::operator<=;
using std::operator>=;
using std::operator<=>;
using std::hash;
using std::make_optional;
using std::swap;
} // namespace std

// <ranges>
export namespace std {
namespace ranges {
using std::ranges::begin;
using std::ranges::bidirectional_range;
using std::ranges::borrowed_range;
using std::ranges::cbegin;
using std::ranges::cdata;
using std::ranges::cend;
using std::ranges::common_range;
using std::ranges::contiguous_range;
using std::ranges::crbegin;
using std::ranges::crend;
using std::ranges::data;
using std::ranges::disable_sized_range;
using std::ranges::empty;
using std::ranges::enable_borrowed_range;
using std::ranges::enable_view;
using std::ranges::end;
using std::ranges::forward_range;
using std::ranges::get;
using std::ranges::input_range;
using std::ranges::iterator_t;
using std::ranges::output_range;
using std::ranges::random_access_range;
using std::ranges::range;
using std::ranges::range_common_reference_t;
using std::ranges::range_difference_t;
using std::ranges::range_reference_t;
using std::ranges::range_rvalue_reference_t;
using std::ranges::range_size_t;
using std::ranges::range_value_t;
using std::ranges::rbegin;
using std::ranges::rend;
using std::ranges::sentinel_t;
using std::ranges::size;
using std::ranges::sized_range;
using std::ranges::ssize;
using std::ranges::subrange;
using std::ranges::subrange_kind;
using std::ranges::view;
using std::ranges::view_base;
using std::ranges::view_interface;
using std::ranges::viewable_range;
} // namespace ranges
using std::ranges::get;
namespace ranges {
using std::ranges::borrowed_iterator_t;
using std::ranges::borrowed_subrange_t;
using std::ranges::dangling;
using std::ranges::empty_view;
namespace views {
using std::ranges::views::empty;
}
using std::ranges::single_view;
namespace views {
using std::ranges::views::single;
}
using std::ranges::iota_view;
namespace views {
using std::ranges::views::iota;
}
namespace views {
using std::ranges::views::all;
using std::ranges::views::all_t;
} // namespace views
using std::ranges::filter_view;
using std::ranges::owning_view;
using std::ranges::ref_view;
namespace views {
using std::ranges::views::filter;
}
using std::ranges::transform_view;
namespace views {
using std::ranges::views::transform;
}
using std::ranges::take_view;
namespace views {
using std::ranges::views::take;
}
using std::ranges::take_while_view;
namespace views {
using std::ranges::views::take_while;
}
using std::ranges::drop_view;
namespace views {
using std::ranges::views::drop;
}
using std::ranges::drop_while_view;
namespace views {
using std::ranges::views::drop_while;
}
using std::ranges::join_view;
namespace views {
using std::ranges::views::join;
}
using std::ranges::lazy_split_view;
using std::ranges::split_view;
namespace views {
using std::ranges::views::lazy_split;
using std::ranges::views::split;
} // namespace views
namespace views {
using std::ranges::views::counted;
}
using std::ranges::common_view;
namespace views {
using std::ranges::views::common;
}
using std::ranges::reverse_view;
namespace views {
using std::ranges::views::reverse;
}
using std::ranges::elements_view;
using std::ranges::keys_view;
using std::ranges::values_view;
namespace views {
using std::ranges::views::elements;
using std::ranges::views::keys;
using std::ranges::views::values;
} // namespace views
#if __cpp_lib_ranges >= 202202L
using ranges::range_adaptor_closure;
#endif
} // namespace ranges
namespace views = ranges::views;
using std::tuple_element;
using std::tuple_size;
namespace ranges {
#if __glibcxx_ranges_as_const // >= C++23
using ranges::as_const_view;
using ranges::const_iterator_t;
using ranges::const_sentinel_t;
using ranges::constant_range;
using ranges::range_const_reference_t;
namespace views {
using views::as_const;
}
#endif
#ifdef __glibcxx_generator // C++ >= 23 && __glibcxx_coroutine
using ranges::elements_of;
#endif
#ifdef __cpp_lib_ranges_as_rvalue // C++ >= 23
using ranges::as_rvalue_view;
namespace views {
using views::as_rvalue;
}
#endif
#ifdef __cpp_lib_ranges_chunk // C++ >= 23
using ranges::chunk_view;
namespace views {
using views::chunk;
}
#endif
#ifdef __cpp_lib_ranges_slide // C++ >= 23
using ranges::slide_view;
namespace views {
using views::slide;
}
#endif
#ifdef __cpp_lib_ranges_zip // C++ >= 23
using ranges::adjacent_transform_view;
using ranges::adjacent_view;
using ranges::zip_transform_view;
using ranges::zip_view;
namespace views {
using views::adjacent;
using views::adjacent_transform;
using views::pairwise;
using views::pairwise_transform;
using views::zip;
using views::zip_transform;
} // namespace views
#endif
#ifdef __cpp_lib_ranges_chunk_by // C++ >= 23
using ranges::chunk_by_view;
namespace views {
using views::chunk_by;
}
#endif
#ifdef __cpp_lib_ranges_join_with // C++ >= 23
using ranges::join_with_view;
namespace views {
using views::join_with;
}
#endif
#ifdef __cpp_lib_ranges_repeat // C++ >= 23
using ranges::repeat_view;
namespace views {
using views::repeat;
}
#endif
#ifdef __cpp_lib_ranges_stride // C++ >= 23
using ranges::stride_view;
namespace views {
using views::stride;
}
#endif
#ifdef __cpp_lib_ranges_cartesian_product // C++ >= 23
using ranges::cartesian_product_view;
namespace views {
using views::cartesian_product;
}
#endif
#ifdef __cpp_lib_ranges_enumerate // C++ >= 23
using ranges::enumerate_view;
namespace views {
using views::enumerate;
}
#endif
#if __cpp_lib_ranges_concat // C++ >= C++26
using ranges::concat_view;
namespace views {
using views::concat;
}
#endif
#if __cpp_lib_ranges_cache_latest // C++ >= C++26
using ranges::cache_latest_view;
namespace views {
using views::cache_latest;
}
#endif
#if __glibcxx_ranges_as_input // C++ >= 26
using ranges::as_input_view;
namespace views {
using views::as_input;
}
#endif
#ifdef __cpp_lib_ranges_indices // C++ >= 26
namespace views {
using views::indices;
}
#endif
} // namespace ranges
#if __glibcxx_ranges_to_container // C++ >= 23
namespace ranges {
using ranges::to;
}
using std::from_range;
using std::from_range_t;
#endif
} // namespace std

// <ratio>
export namespace std {
using std::atto;
using std::centi;
using std::deca;
using std::deci;
using std::exa;
using std::femto;
using std::giga;
using std::hecto;
using std::kilo;
using std::mega;
using std::micro;
using std::milli;
using std::nano;
using std::peta;
using std::pico;
using std::ratio;
using std::ratio_add;
using std::ratio_divide;
using std::ratio_equal;
using std::ratio_equal_v;
using std::ratio_greater;
using std::ratio_greater_equal;
using std::ratio_greater_equal_v;
using std::ratio_greater_v;
using std::ratio_less;
using std::ratio_less_equal;
using std::ratio_less_equal_v;
using std::ratio_less_v;
using std::ratio_multiply;
using std::ratio_not_equal;
using std::ratio_not_equal_v;
using std::ratio_subtract;
using std::tera;
} // namespace std

// 20.5 <scoped_allocator>
export namespace std {
using std::scoped_allocator_adaptor;
using std::operator==;
} // namespace std

// 17.8.1 <source_location>
export namespace std {
using std::source_location;
}

// <span>
export namespace std {
using std::dynamic_extent;
using std::span;
namespace ranges {
using std::ranges::enable_borrowed_range;
using std::ranges::enable_view;
} // namespace ranges
using std::as_bytes;
using std::as_writable_bytes;
} // namespace std

// <string_view>
export namespace std {
using std::basic_string_view;
namespace ranges {
using std::ranges::enable_borrowed_range;
using std::ranges::enable_view;
} // namespace ranges
using std::operator==;
using std::operator<=>;
using std::operator<<;
using std::hash;
using std::string_view;
} // namespace std
export namespace std::inline literals::inline string_view_literals {
using string_view_literals::operator""sv;
}

// <tuple>
export namespace std {
using std::apply;
using std::forward_as_tuple;
using std::get;
using std::ignore;
using std::make_from_tuple;
using std::make_tuple;
using std::tie;
using std::tuple;
using std::tuple_cat;
using std::tuple_element;
using std::tuple_element_t;
using std::tuple_size;
using std::operator==;
using std::operator<=>;
using std::swap;
using std::tuple_size_v;
using std::uses_allocator;
} // namespace std

// <type_traits>
export namespace std {
using std::add_const;
using std::add_const_t;
using std::add_cv;
using std::add_cv_t;
using std::add_lvalue_reference;
using std::add_lvalue_reference_t;
using std::add_pointer;
using std::add_pointer_t;
using std::add_rvalue_reference;
using std::add_rvalue_reference_t;
using std::add_volatile;
using std::add_volatile_t;
using std::aligned_storage;
using std::aligned_storage_t;
using std::aligned_union;
using std::aligned_union_t;
using std::alignment_of;
using std::alignment_of_v;
using std::basic_common_reference;
using std::bool_constant;
using std::common_reference;
using std::common_reference_t;
using std::common_type;
using std::common_type_t;
using std::conditional;
using std::conditional_t;
using std::conjunction;
using std::conjunction_v;
#if __cpp_lib_constant_wrapper
using std::constant_wrapper;
using std::cw;
#endif
using std::decay;
using std::decay_t;
using std::disjunction;
using std::disjunction_v;
using std::enable_if;
using std::enable_if_t;
using std::extent;
using std::extent_v;
using std::false_type;
using std::has_unique_object_representations;
using std::has_unique_object_representations_v;
using std::has_virtual_destructor;
using std::has_virtual_destructor_v;
using std::integral_constant;
using std::invoke_result;
using std::invoke_result_t;
using std::is_abstract;
using std::is_abstract_v;
using std::is_aggregate;
using std::is_aggregate_v;
using std::is_arithmetic;
using std::is_arithmetic_v;
using std::is_array;
using std::is_array_v;
using std::is_assignable;
using std::is_assignable_v;
using std::is_base_of;
using std::is_base_of_v;
using std::is_bounded_array;
using std::is_bounded_array_v;
using std::is_class;
using std::is_class_v;
using std::is_compound;
using std::is_compound_v;
using std::is_const;
using std::is_const_v;
using std::is_constant_evaluated;
using std::is_constructible;
using std::is_constructible_v;
using std::is_convertible;
using std::is_convertible_v;
using std::is_copy_assignable;
using std::is_copy_assignable_v;
using std::is_copy_constructible;
using std::is_copy_constructible_v;
using std::is_default_constructible;
using std::is_default_constructible_v;
using std::is_destructible;
using std::is_destructible_v;
using std::is_empty;
using std::is_empty_v;
using std::is_enum;
using std::is_enum_v;
using std::is_final;
using std::is_final_v;
using std::is_floating_point;
using std::is_floating_point_v;
using std::is_function;
using std::is_function_v;
using std::is_fundamental;
using std::is_fundamental_v;
using std::is_integral;
using std::is_integral_v;
using std::is_invocable;
using std::is_invocable_r;
using std::is_invocable_r_v;
using std::is_invocable_v;
using std::is_lvalue_reference;
using std::is_lvalue_reference_v;
using std::is_member_function_pointer;
using std::is_member_function_pointer_v;
using std::is_member_object_pointer;
using std::is_member_object_pointer_v;
using std::is_member_pointer;
using std::is_member_pointer_v;
using std::is_move_assignable;
using std::is_move_assignable_v;
using std::is_move_constructible;
using std::is_move_constructible_v;
using std::is_nothrow_assignable;
using std::is_nothrow_assignable_v;
using std::is_nothrow_constructible;
using std::is_nothrow_constructible_v;
using std::is_nothrow_convertible;
using std::is_nothrow_convertible_v;
using std::is_nothrow_copy_assignable;
using std::is_nothrow_copy_assignable_v;
using std::is_nothrow_copy_constructible;
using std::is_nothrow_copy_constructible_v;
using std::is_nothrow_default_constructible;
using std::is_nothrow_default_constructible_v;
using std::is_nothrow_destructible;
using std::is_nothrow_destructible_v;
using std::is_nothrow_invocable;
using std::is_nothrow_invocable_r;
using std::is_nothrow_invocable_r_v;
using std::is_nothrow_invocable_v;
using std::is_nothrow_move_assignable;
using std::is_nothrow_move_assignable_v;
using std::is_nothrow_move_constructible;
using std::is_nothrow_move_constructible_v;
using std::is_nothrow_swappable;
using std::is_nothrow_swappable_v;
using std::is_nothrow_swappable_with;
using std::is_nothrow_swappable_with_v;
using std::is_null_pointer;
using std::is_null_pointer_v;
using std::is_object;
using std::is_object_v;
using std::is_pod;
using std::is_pod_v;
using std::is_pointer;
using std::is_pointer_v;
using std::is_polymorphic;
using std::is_polymorphic_v;
using std::is_reference;
using std::is_reference_v;
using std::is_rvalue_reference;
using std::is_rvalue_reference_v;
using std::is_same;
using std::is_same_v;
using std::is_scalar;
using std::is_scalar_v;
using std::is_signed;
using std::is_signed_v;
using std::is_standard_layout;
using std::is_standard_layout_v;
using std::is_swappable;
using std::is_swappable_v;
using std::is_swappable_with;
using std::is_swappable_with_v;
using std::is_trivial;
using std::is_trivial_v;
using std::is_trivially_assignable;
using std::is_trivially_assignable_v;
using std::is_trivially_constructible;
using std::is_trivially_constructible_v;
using std::is_trivially_copy_assignable;
using std::is_trivially_copy_assignable_v;
using std::is_trivially_copy_constructible;
using std::is_trivially_copy_constructible_v;
using std::is_trivially_copyable;
using std::is_trivially_copyable_v;
using std::is_trivially_default_constructible;
using std::is_trivially_default_constructible_v;
using std::is_trivially_destructible;
using std::is_trivially_destructible_v;
using std::is_trivially_move_assignable;
using std::is_trivially_move_assignable_v;
using std::is_trivially_move_constructible;
using std::is_trivially_move_constructible_v;
using std::is_unbounded_array;
using std::is_unbounded_array_v;
using std::is_union;
using std::is_union_v;
using std::is_unsigned;
using std::is_unsigned_v;
#if __cpp_lib_is_virtual_base_of
using std::is_virtual_base_of;
using std::is_virtual_base_of_v;
#endif
using std::is_void;
using std::is_void_v;
using std::is_volatile;
using std::is_volatile_v;
using std::make_signed;
using std::make_signed_t;
using std::make_unsigned;
using std::make_unsigned_t;
using std::negation;
using std::negation_v;
using std::rank;
using std::rank_v;
using std::remove_all_extents;
using std::remove_all_extents_t;
using std::remove_const;
using std::remove_const_t;
using std::remove_cv;
using std::remove_cv_t;
using std::remove_cvref;
using std::remove_cvref_t;
using std::remove_extent;
using std::remove_extent_t;
using std::remove_pointer;
using std::remove_pointer_t;
using std::remove_reference;
using std::remove_reference_t;
using std::remove_volatile;
using std::remove_volatile_t;
using std::true_type;
using std::type_identity;
using std::type_identity_t;
using std::underlying_type;
using std::underlying_type_t;
using std::unwrap_ref_decay;
using std::unwrap_ref_decay_t;
using std::unwrap_reference;
using std::unwrap_reference_t;
using std::void_t;
#if __cpp_lib_reference_from_temporary
using std::reference_constructs_from_temporary;
using std::reference_constructs_from_temporary_v;
using std::reference_converts_from_temporary;
using std::reference_converts_from_temporary_v;
#endif
#if __cpp_lib_is_layout_compatible
using std::is_corresponding_member;
using std::is_layout_compatible;
using std::is_layout_compatible_v;
#endif
#if __cpp_lib_is_pointer_interconvertible
using std::is_pointer_interconvertible_base_of;
using std::is_pointer_interconvertible_base_of_v;
using std::is_pointer_interconvertible_with_class;
#endif
#if __cpp_lib_is_scoped_enum
using std::is_scoped_enum;
using std::is_scoped_enum_v;
#endif
#if __cpp_lib_is_implicit_lifetime
using std::is_implicit_lifetime;
using std::is_implicit_lifetime_v;
#endif
#if __cpp_impl_reflection >= 202506L
using std::is_reflection;
using std::is_reflection_v;
#endif
#if __glibcxx_is_structural >= 202603L
using std::is_structural;
using std::is_structural_v;
#endif
} // namespace std

// <typeindex>
export namespace std {
using std::hash;
using std::type_index;
} // namespace std

// <utility>
export namespace std {
using std::as_const;
using std::cmp_equal;
using std::cmp_greater;
using std::cmp_greater_equal;
using std::cmp_less;
using std::cmp_less_equal;
using std::cmp_not_equal;
using std::declval;
using std::exchange;
using std::forward;
#if __cpp_lib_forward_like
using std::forward_like;
#endif
using std::in_range;
using std::index_sequence;
using std::index_sequence_for;
using std::integer_sequence;
using std::make_index_sequence;
using std::make_integer_sequence;
using std::move;
using std::move_if_noexcept;
using std::pair;
using std::swap;
using std::operator==;
using std::operator<=>;
using std::get;
using std::in_place;
using std::in_place_index;
using std::in_place_index_t;
using std::in_place_t;
using std::in_place_type;
using std::in_place_type_t;
using std::make_pair;
using std::piecewise_construct;
using std::piecewise_construct_t;
#if __cpp_lib_to_underlying
using std::to_underlying;
#endif
using std::tuple_element;
using std::tuple_size;
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
namespace rel_ops {
using std::rel_ops::operator!=;
using std::rel_ops::operator>;
using std::rel_ops::operator<=;
using std::rel_ops::operator>=;
} // namespace rel_ops
#pragma GCC diagnostic pop
#if __cpp_lib_unreachable
using std::unreachable;
#endif
#if __cpp_lib_observable_checkpoint
using std::observable_checkpoint;
#endif
} // namespace std

// <variant>
export namespace std {
using std::get;
using std::get_if;
using std::holds_alternative;
using std::variant;
using std::variant_alternative;
using std::variant_alternative_t;
using std::variant_npos;
using std::variant_size;
using std::variant_size_v;
using std::operator==;
using std::operator!=;
using std::operator<;
using std::operator>;
using std::operator<=;
using std::operator>=;
using std::operator<=>;
using std::bad_variant_access;
using std::hash;
using std::monostate;
using std::swap;
using std::visit;
} // namespace std
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

// 23.5.1 <cctype>
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
