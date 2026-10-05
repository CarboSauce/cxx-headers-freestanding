#include <atomic>
#include <bit>
#include <climits>
#include <compare>
#include <concepts>
#include <coroutine>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <debugging>
#include <exception>
#include <functional>
#include <initializer_list>
#include <iterator>
#include <limits>
#include <memory>
#include <new>
#include <ratio>
#include <source_location>
#include <tuple>
#include <type_traits>
#include <typeinfo>
#include <utility>
#include <version>

int main() {
  std::function<int()> test_func = []() { return 1; };
  std::shared_ptr<int> test_shared_ptr = std::make_shared<int>(0);
  std::allocator<int> tes_allocator;
  return *test_shared_ptr + 10;
}
