#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;

template<typename T>
constexpr T pi = T{ 3.14159265358979323L };

int main()
{
	cout << std::setprecision(9) << pi<double> << endl;
	cout << std::setprecision(9) << pi<float> << endl;
	return 0;
}

// Output 3.14159265
//        3.14159274