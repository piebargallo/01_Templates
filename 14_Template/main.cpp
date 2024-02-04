#include <iostream>
#include <string>

template <typename T>
class SpreadsheetCell
{
public:
	SpreadsheetCell(T t) : m_content{ move(t) } { }
	
	void print()
	{
		std::cout << m_content << std::endl;
	}
private:
	T m_content;
};

SpreadsheetCell(const char*)->SpreadsheetCell<std::string>;

int main()
{
	std::string myString{ "Hello World!" };
	SpreadsheetCell<std::string> cell{ myString };
	cell.print();

	double number{ 1.1 };
	SpreadsheetCell<double> cell2{ number };
	cell2.print();
	return 0;
}
