#ifndef _ONEMATH_BLAS_CSASIM_HPP_
#define _ONEMATH_BLAS_CSASIM_HPP_

#if __has_include(<sycl/sycl.hpp>)
#include <sycl/sycl.hpp>
#else
#include <CL/sycl.hpp>
#endif

#include <cstdint>

namespace oneapi {
namespace math {
namespace blas {
namespace csasim {

void asum(sycl::queue& queue, std::int64_t n, sycl::buffer<float, 1>& x, std::int64_t incx,
          sycl::buffer<float, 1>& result);
}
} // namespace blas
} // namespace math
} // namespace oneapi

#endif //_ONEMATH_BLAS_CSASIM_HPP_
