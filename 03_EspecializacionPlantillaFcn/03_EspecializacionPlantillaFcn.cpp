#include <iostream>

template <typename T>
class Almacen
{
private:
    T m_valor{};
public:
    Almacen(T valor) : m_valor{ valor } {}

    void imprimir()
    {
        std::cout << m_valor << '\n';
    }
};

template <>
void Almacen<double>::imprimir()
{
    std::cout << std::scientific << m_valor << '\n';
}

int main()
{
    // Define algunas unidades de almacenamiento
    Almacen<int> iValor{ 12 };
    Almacen<double> dValor{ 12.6 };

    // Imprime algunos valores
    iValor.imprimir();
    dValor.imprimir();

    return 0;
}
