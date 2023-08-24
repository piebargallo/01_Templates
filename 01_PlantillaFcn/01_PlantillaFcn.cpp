#include <iostream>

template <typename T>
T mayor(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	std::cout << mayor<int>(1, 2) << std::endl;
	std::cout << mayor<double>(4.4, 5.5) << std::endl;
	return 0;
}