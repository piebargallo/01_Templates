import grid;
#include <vector>
#include <deque>
#include <iostream>
#include <optional>

int main()
{
	Grid<int, std::deque<std::optional<int>>> myDequeGrid;
	Grid<int, std::vector<std::optional<int>>> myVectorGrid;
	Grid<int> myVectorGrid2{ myVectorGrid };
}
