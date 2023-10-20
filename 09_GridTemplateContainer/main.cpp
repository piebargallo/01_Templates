import grid;
#include <vector>
#include <deque>
#include <iostream>
#include <optional>

int main()
{
	Grid<int, std::vector<std::optional<int>>> myIntVectorGrid;
	Grid<int, std::deque<std::optional<int>>> myIntDequeGrid;

	myIntVectorGrid.at(3, 4) = 5;
	std::cout << myIntVectorGrid.at(3, 4).value_or(0) << std::endl;

	myIntDequeGrid.at(1, 2) = 3;
	std::cout << myIntDequeGrid.at(1, 2).value_or(0) << std::endl;

	Grid<int, std::vector<std::optional<int>>> grid2{ myIntVectorGrid };
	grid2 = myIntVectorGrid;
}
