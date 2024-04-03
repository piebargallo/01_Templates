/* Write a KeyValuePair class template with two template parameters: Key and Value. The class should have two private
   data members to store a key and a value. Provide a constructor accepting a key and a value, and add appropiate 
   getters and setters. Test your class by creating a few instantiations in ypur main() function and try class template
   argument deduction, CTAD.*/

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

	KeyValuePair kv2{ "John Doe", 123456 };
	cout << format("{} = {}\n", kv2.getKey(), kv2.getValue());
}