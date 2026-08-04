#include <iostream>
using namespace std;

float ReadNumber()
{
	int Number = 0;
	cout << "Enter a number: ";
	cin >> Number;
	return Number;
}

float CalculateHalfNumber(float Number)
{
	return (float)Number / 2;
}

void PrintResult(float Number)
{
	cout << "The half of " << Number << " is: " << CalculateHalfNumber(Number) << endl;
}

int main()
{
	PrintResult(ReadNumber());
}
