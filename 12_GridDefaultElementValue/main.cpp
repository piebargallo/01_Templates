import grid;
#include <iostream>
#include <string>

namespace {
	int defaultInt{ 11 };
}

int main()
{
	Grid<int, defaultInt> myIntGrid;
	
	Grid<int, defaultInt> myIntGrid2{ myIntGrid };
	myIntGrid2.at(1, 2) = 3;

	std::cout << myIntGrid.at(1, 2).value_or(-1) << std::endl;
	std::cout << myIntGrid2.at(1, 2).value_or(-1) << std::endl;
}
