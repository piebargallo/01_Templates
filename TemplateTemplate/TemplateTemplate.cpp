#include <vector>
#include <list>

template<template <typename Contained,
	typename Alloc = std::allocator<Contained>>
	typename ResultType>
	auto get_data() {
	// do something intelligent
	ResultType<double> result;

	if constexpr (requires { result.reserve(1); }) {
		result.reserve(3);
	}
	result.push_back(1.1);
	result.push_back(2.2);

	return result;
}

int main()
{
	auto data = get_data<std::vector>();
	auto data2 = get_data<std::list>();
}