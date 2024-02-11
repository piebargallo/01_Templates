module;

export module Numero;

export template <typename T>
class Numero
{
private:
    T m_num;
public:
    Numero(T n) : m_num(n) {} // Constructor

    T getNum() const;
};

template <typename T>
T Numero<T>::getNum() const {
    return m_num;
}