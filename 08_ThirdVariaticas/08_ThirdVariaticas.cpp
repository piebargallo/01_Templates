#include <iostream>

template <typename T, typename... Args>
T sum(T a, Args... args)
{
	if constexpr (sizeof...(args) == 0)
		return a;
	else
		return a + sum(args...);
}

int main()
{
	int result1 = sum(1, 2, 3, 4);
	std::cout << "result1 = " << result1 << std::endl;

	double result2 = sum(1.1, 2.2, 4.4);
	std::cout << "result2 = " << result2 << std::endl;

	return 0;
}