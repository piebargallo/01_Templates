#include <iostream>

template<typename... Args>
int sum(Args... args) {
	return (args + ...);
}

int main()
{
	int result1 = sum(1, 2, 3, 4);
	std::cout << "Result1 = " << result1 << std::endl;

	double result2 = sum(4.4, 2.2);
	std::cout << "Result2 = " << result2 << std::endl;

	return 0;
}