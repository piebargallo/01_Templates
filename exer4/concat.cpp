/* Write a function template called concat() with two template type parameters t1 and t2. The function first converts
   t1 and t2 to a string and the returns the concatenation of those two strings. For this exercise, focus only on
   numerical input like integers and floating-point numbers for which std::to_string() is supported. Create and use
   a proper concept to make sure users of the function template don´t try to use it with unsupported types. Try to
   write your function template without using the template keyword. */

#include <iostream>
#include <string>

using namespace std;

template <typename T>
concept SupportsToString = requires(const T & t) { to_string(t); };

auto concat(const SupportsToString auto& t1, const SupportsToString auto& t2)
{
	return to_string(t1) + to_string(t2);
}

int main()
{
	cout << concat(2, 2.2) << endl;
}