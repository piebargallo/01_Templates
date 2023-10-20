import grid;
#include <iostream>
#include <memory>

int main()
{
	Grid<int> myIntGrid;       // Uses the non-specialized grid.
	Grid<int*> psGrid{ 2, 2 }; // Uses the partial specialization for pointer types.

	psGrid.at(0, 0) = std::make_unique<int>(1);
	psGrid.at(0, 1) = std::make_unique<int>(2);
	psGrid.at(1, 0) = std::make_unique<int>(3);

	Grid<int*> psGrid2{ psGrid };
	Grid<int*> psGrid3;
	psGrid3 = psGrid2;

	auto& element{ psGrid2.at(1, 0) };
	if (element) {
		std::cout << *element << std::endl;
		*element = 6;
	}
	std::cout << *psGrid.at(1, 0) << std::endl;  // psGrid is not modified.
	std::cout << *psGrid2.at(1, 0) << std::endl; // psGrid2 is modified.
}
