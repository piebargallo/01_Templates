#include <iostream>

template <typename T>
constexpr T pi = T(3.14159);

int main()
{
	double pi_double = pi<double>;
	float pi_float = pi<float>;
	long double pi_long_double = pi<long double>;

	std::cout << "pi (double) = " << pi_double << std::endl;
	std::cout << "pi (float) = " << pi_float << std::endl;
	std::cout << "pi (long double) = " << pi_long_double << std::endl;

	return 0;
}