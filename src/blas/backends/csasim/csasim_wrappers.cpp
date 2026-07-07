#if __has_include(<sycl/sycl.hpp>)
#include <sycl/sycl.hpp>
#else
#include <CL/sycl.hpp>
#endif

#include "oneapi/math/types.hpp"
#include "oneapi/math/exceptions.hpp"

#include "oneapi/math/blas/detail/csasim/onemath_blas_csasim.hpp"
#include "oneapi/math/detail/export.hpp"
#include "blas/function_table.hpp"

#define WRAPPER_VERSION 1

namespace oneapi {
namespace math {
namespace blas {
namespace csasim {

void asum(sycl::queue& queue, std::int64_t n, sycl::buffer<float, 1>& x, std::int64_t incx,
          sycl::buffer<float, 1>& result) {
    throw oneapi::math::unimplemented("blas", "asum", "for csasim");
}

extern "C" ONEMATH_EXPORT blas_function_table_t onemath_blas_table = { WRAPPER_VERSION, nullptr,
                                                                       nullptr, asum };

} // namespace csasim
} // namespace blas
} // namespace math
} // namespace oneapi