#include <iostream>

class Euros
{
private:
	int m_euros{};
public:
	Euros(int euros) : m_euros{ euros } {}

	friend bool operator< (const Euros& c1, const Euros& c2)
	{
		return (c1.m_euros < c2.m_euros);
	}

	friend std::ostream& operator<< (std::ostream& ostr, const Euros& c)
	{
		ostr << c.m_euros;
		return ostr;
	}
};

template <typename T>
const T& mayor(T x, T y)
{
	return (x < y) ? y : x;
}

int main()
{
	setlocale(LC_ALL, "es_ES.UTF-8");
	Euros corto{ 4 };
	Euros largo{ 8 };

	Euros masCaro = mayor(corto, largo);
	std::cout << masCaro << " es más caro\n";

	return 0;
}