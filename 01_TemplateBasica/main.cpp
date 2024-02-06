#include <iostream>

template <typename T>
T max(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x{ 4 }, y{ 6 };
    int* p_x{ &x }, * p_y{ &y };

    std::cout << max(5.0, 6.0) << std::endl;        // 6
    std::cout << max(5.0f, 6.0f) << std::endl;      // 6
    std::cout << max(x, y) << std::endl;            // 6
    std::cout << max(&x, &y) << std::endl;          // 0xc4771ff69c
    std::cout << max(p_x, p_y) << std::endl;        // 0x7dcf5ffbbc
    std::cout << max("Hola", "Mundo") << std::endl; // Hola

    return 0;
}