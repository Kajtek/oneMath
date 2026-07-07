#pragma once

#include "oneapi/math/types.hpp"
#include "oneapi/math/detail/backends.hpp"
#include "oneapi/math/detail/backend_selector.hpp"
#include "onemath_blas_csasim.hpp"

namespace oneapi {
namespace math {
namespace blas {

void asum(backend_selector<backend::csasim> selector, std::int64_t n, sycl::buffer<float, 1>& x,
          std::int64_t incx, sycl::buffer<float, 1>& result) {
    oneapi::math::blas::csasim::asum(selector.get_queue(), n, x, incx, result);
}

} // namespace blas
} // namespace math
} // namespace oneapi
