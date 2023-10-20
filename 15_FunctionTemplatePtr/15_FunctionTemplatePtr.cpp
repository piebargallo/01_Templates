#include <cstddef>
#include <cstring>
#include <iostream>
#include <array>

static const size_t NOT_FOUND{ static_cast<size_t>(-1) };

template <typename T>
size_t Find(const T& value, const T* arr, size_t size)
{
	std::cout << "original" << std::endl;
	for (size_t i{ 0 }; i < size; i++) {
		if (arr[i] == value) {
			return i; // found it; return the index
		}
	}
	return NOT_FOUND; // failed to find it; return NOT_FOUND
}

template <typename T>
size_t Find(T* value, T* const* arr, size_t size)
{
	std::cout << "ptr overload" << std::endl;
	for (size_t i{ 0 }; i < size; i++) {
		if (*arr[i] == *value) {
			return i; // found it; return the index
		}
	}
	return NOT_FOUND; // failed to find it; return NOT_FOUND
}

size_t Find(const char* value, const char** arr, size_t size)
{
	std::cout << "overload" << std::endl;
	for (size_t i{ 0 }; i < size; i++) {
		if (strcmp(arr[i], value) == 0) {
			return i; // found it; return the index
		}
	}
	return NOT_FOUND; // failed to find it; return NOT_FOUND
}

int main()
{
	size_t res{ NOT_FOUND };

	int myInt{ 3 }, intArray[]{ 1, 2, 3, 4 };
	size_t sizeArray{ std::size(intArray) };
	res = Find(myInt, intArray, sizeArray);      // calls Find<int> by deduction
	res = Find<int>(myInt, intArray, sizeArray); // calls Find<int> explicitly

	double myDouble{ 5.6 }, doubleArray[]{ 1.2, 3.4, 5.7, 7.5 };
	sizeArray = std::size(doubleArray);
	res = Find(myDouble, doubleArray, sizeArray);         // calls Find<double> by deduction
	res = Find<double>(myDouble, doubleArray, sizeArray); // calls Find<double> explicitly

	const char* word{ "two" };
	const char* words[]{ "one", "two", "three", "four" };
	sizeArray = std::size(words);
	res = Find<const char*>(word, words, sizeArray);  // calls Find<const char*> explicitly
	res = Find(word, words, sizeArray);		          // calls overloaded Find for const char*s

	int* intPointer{ &myInt }, * pointerArray[]{ &myInt, &myInt };
	sizeArray = std::size(pointerArray);
	res = Find(intPointer, pointerArray, sizeArray);    // calls the overloaded Find for pointers
}
