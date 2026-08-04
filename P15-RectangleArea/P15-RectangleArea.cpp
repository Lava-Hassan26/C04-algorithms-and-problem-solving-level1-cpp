#include <iostream>
using namespace std;

struct stRectangle
{
	float height = 0;
	float width = 0;
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
	rectangle.height = ReadNumber("Enter the rectangle's height: ");
	rectangle.width = ReadNumber("Enter the rectangle's width: ");

	return rectangle;
}

float CalculateRectangleArea(const stRectangle& rectangle)
{
	return rectangle.height * rectangle.width;
}

void PrintResult(const stRectangle& rectangle)
{
	cout << "\nArea= " << CalculateRectangleArea(rectangle) << endl;
}

int main()
{
	PrintResult(ReadRectangle());

	return 0;
}
