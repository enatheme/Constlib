#include <limits>
#include <type_traits>

namespace constlib {

template <typename BASE_TYPE, typename RESULT_TYPE = BASE_TYPE>
constexpr RESULT_TYPE pow(BASE_TYPE base, unsigned int exposant)
{
	RESULT_TYPE result = 1;
	for ( ; exposant > 0 ; result *= base, --exposant);
	return result;
}

static_assert(pow<>(3, 5) == 243);
static_assert(pow<>(4.1, 2) == 16.81);

} // constlib {
