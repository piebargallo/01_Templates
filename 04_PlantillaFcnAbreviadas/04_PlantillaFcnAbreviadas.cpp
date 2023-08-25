#include <iostream>

auto mayor(auto x, auto y)
{
	return (x > y) ? x : y;
}

int main()
{
	std::cout << mayor(4, 4.4) << std::endl;

	return 0;
}