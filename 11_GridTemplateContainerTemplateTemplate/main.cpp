import grid;
#include <vector>
#include <deque>
#include <iostream>

int main()
{
	Grid<int, std::vector> myGrid;
	myGrid.at(1, 2) = 3;
	std::cout << myGrid.at(1, 2).value_or(0) << std::endl;

	Grid<int, std::vector> myGrid2{ myGrid };

	Grid<int, std::deque> myDequeGrid;
}
