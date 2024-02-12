import Area;

#include <iostream>

int main()
{
	Area<int, 4, 4> intArea;
	std::cout << "Width: " << intArea.getWidth() << std::endl;
	std::cout << "Heigth: " << intArea.getHeigth() << std::endl;
	return 0;
}