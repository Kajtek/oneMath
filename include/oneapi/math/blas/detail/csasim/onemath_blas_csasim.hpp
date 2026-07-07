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