import Area;

#include <iostream>

int main()
{
	Area<int> intArea(4, 4);
	std::cout << "Width: " << intArea.getWidth() << std::endl;
	std::cout << "Heigth: " << intArea.getHeigth() << std::endl;
	return 0;
}