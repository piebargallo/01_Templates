// Abbreviated function template syntax
#include <iostream>

template <typename T>
decltype(auto) add(const T& t1, const T& t2)
{
	return t1 + t2;
}

int main()
{
	std::cout << "Sum is: " << add<double>(2.2, 2.2) << std::endl;
	return 0;
}