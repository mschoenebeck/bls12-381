#pragma once

#ifdef __cpp_lib_span
#   include <span>
#else
#ifndef NONSTDSPAN
#define NONSTDSPAN
#   include <limits>
#   include "nonstd/span.hpp"
namespace std {
template <class T, std::size_t Extent= std::numeric_limits<std::size_t>::max()>
using span = nonstd::span<T, Extent>;
} // namespace std
#endif
#endif
