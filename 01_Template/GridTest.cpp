import grid;
#include <vector>
#include <memory>
#include <string>

using namespace std;

void processIntGrid(Grid<int>&) {}

int main()
{
	Grid<int> myIntGrid; 
	Grid<double> myDoubleGrid{ 11, 11 }; 

	myIntGrid.at(0, 0) = 10;
	int x{ myIntGrid.at(0, 0).value_or(0) };

	Grid<int> grid2{ myIntGrid };  
	Grid<int> anotherIntGrid;
	anotherIntGrid = grid2;      

	processIntGrid(myIntGrid);

	Grid<const char*> myStringGrid;
	myStringGrid.at(2, 2) = "hello";

	Grid<vector<int>> gridOfVectors;
	vector<int> myVector{ 1, 2, 3, 4 };
	gridOfVectors.at(5, 6) = myVector;

	auto myGridOnFreeStore{ make_unique<Grid<int>>(2, 2) }; 
	myGridOnFreeStore->at(0, 0) = 10;
	int x2{ myGridOnFreeStore->at(0, 0).value_or(0) };
}
template class Grid<string>;
