#include <iostream>

import Numero;

int main()
{
    // Instanciamos un objeto de tipo entero
    Numero<int> numeroInt(4);

    // Instanciamos un objeto de tipo double
    Numero<double> numeroDouble(3.14);

    std::cout << "int Numero = " << numeroInt.getNum() << std::endl;
    std::cout << "double Numero = " << numeroDouble.getNum() << std::endl;

    return 0;
}