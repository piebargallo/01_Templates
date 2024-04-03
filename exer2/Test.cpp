/* The KeyValuePair class template from exer 12-1 supports all kind of data types for both its key and value template
   type parameters. For example, the following instantiates the class template with std::string as the type for both
   the key and the value:
   
   KeyValuePair<std::string, std::string> kv { "Jonh Doe", "New York" };
   
   However, using const char* as the type will result in data members of type const char*, wich is not what we want.
   
   Write a class template specialization for const char* keys and values that converts the given strings 
   to std::strings; */

import key_value_pair;
#include <iostream>
#include <string>
#include <format>

using namespace std;

int main()
{
	KeyValuePair<int, double> kv1{ 11, 2.33 };
	cout << format("{} = {}\n", kv1.getKey(), kv1.getValue());

	KeyValuePair kv2{ "John Doe", 123456 };
	cout << format("{} = {}\n", kv2.getKey(), kv2.getValue());

	KeyValuePair<const char*, const char*> kv3{ "John Doe", "New York" };
	cout << format("{} = {}\n", kv3.getKey(), kv3.getValue());
}
