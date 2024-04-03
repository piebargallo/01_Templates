/* The concat() function template from exer 12-4 only supports numerical types. In this exercise, modify your solution 
   to make it work when both arguments are strings, and when one argument is a numerical type while the other is as
   string type. */

#include <iostream>
#include <string>
#include <string_view>

using namespace std;

template <typename T>
concept SupportsToString = requires(const T & t) { to_string(t); };

auto concat(const SupportsToString auto& t1, const SupportsToString auto& t2)
{
	return to_string(t1) + to_string(t2);
}

auto concat(string_view t1, string_view t2)
{
	return string{ t1 } + string{ t2 };
}

auto concat(string_view t1, const SupportsToString auto& t2)
{
	return string{ t1 } + to_string(t2);
}

auto concat(const SupportsToString auto& t1, string_view t2)
{
	return to_string(t1) + string{ t2 };
}

int main()
{
	cout << concat(1, 2.2) << endl;
	cout << concat("Hello ", "World") << endl;
	cout << concat("Hello ", 1) << endl;
	cout << concat(2, " World") << endl;
}