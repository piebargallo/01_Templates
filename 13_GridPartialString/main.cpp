import grid;
#include <iostream>
#include <string>

int main()
{
	{
		Grid<int, 10, 10> myGrid;
		Grid<int, 10, 10> anotherGrid;

		myGrid.at(2, 3) = 45;
		anotherGrid = myGrid;

		std::cout << anotherGrid.at(2, 3).value_or(0) << std::endl;
	}

	{
		Grid<int, 2, 2> myIntGrid;				// Uses the original Grid
		Grid<const char*, 2, 2> myStringGrid;	// Uses the partial specialization
		myStringGrid.at(1, 1) = "Hello";
		Grid<const char*, 2, 2> myStringGridCopy{ myStringGrid };
		myStringGridCopy.at(1, 1) = "World.";

		std::cout << myStringGrid.at(1, 1).value_or("") << std::endl;
		std::cout << myStringGridCopy.at(1, 1).value_or("") << std::endl;
	}
}
