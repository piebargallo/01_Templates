#include <cstring>
#include <iostream>

// Template general
template <typename T>
T max(T a, T b)
{
    std::cout << "Template general (T)" << std::endl;
    return (a > b) ? a : b;
}

// Sobrecarga en crudo para *char con preferencia
const char* max(const char* a, const char* b)
{
    std::cout << "Sobrecarga en crudo (char*)" << std::endl;
    return (strlen(a) > strlen(b)) ? a : b;
}


int main()
{
    int x{ 10 }, y{ 5 };
    std::cout << max("Hola", "Adios") << std::endl;
    std::cout << max(x, y) << std::endl;
    std::cout << max(&x, &y) << std::endl;
    return 0;
}