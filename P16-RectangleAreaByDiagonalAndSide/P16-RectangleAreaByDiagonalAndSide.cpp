#include <iostream>
#include <cmath>
using namespace std;

struct stRectangle
{
	float diagonal = 0;
	float side = 0;
};

float ReadNumber(string message)
{
	float number = 0;
	cout << message;
	cin >> number;
	return number;
}

stRectangle ReadRectangle()
{
	stRectangle rectangle;
	rectangle.diagonal = ReadNumber("Enter the rectangle's diagonal: ");
	rectangle.side = ReadNumber("Enter the rectangle's side: ");

	return rectangle;
}

float CalculateRectangleAreaByDiagonalAndSide(const stRectangle& rectangle)
{
	return rectangle.side * (sqrt(pow(rectangle.diagonal, 2) - pow(rectangle.side, 2)));
}

void PrintResult(const stRectangle& rectangle)
{
	cout << "\nArea= " << CalculateRectangleAreaByDiagonalAndSide(rectangle) << endl;
}

int main()
{
	PrintResult(ReadRectangle());

	return 0;
}
