/* Take your solution from exer 12-1 and make the appropiate changes to only allow integer types as the type of the
   key and omly floating-point types as the type of the value. */

import key_value_pair;
#include <iostream>
#include <string>
#include <format>
using std::cout;
using std::endl;
using std::string;
using std::format;

int main()
{
	KeyValuePair<int, double> kv1{ 11, 2.33 };
	cout << format("{} = {}\n", kv1.getKey(), kv1.getValue());
}