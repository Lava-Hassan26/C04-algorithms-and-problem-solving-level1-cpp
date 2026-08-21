#include <iostream>

using namespace std;

int ReadPositiveNumber(string message)
{
	int number;
	do
	{
		cout << message;
		cin >> number;
	} while (number < 0);
	return number;
}

int PowerOfM(int number, int M)
{
	if (M == 0)
		return 1;

	int result = 1;
	for (int i = 0; i < M; i++)
	{
		result *= number;
	}
	return result;
}

int main()
{
	int number = ReadPositiveNumber("Enter the number: ");
	int power = ReadPositiveNumber("Enter the power: ");

	cout << endl << number << "^" << power << " = " << PowerOfM(number, power) << endl << endl;

	return 0;
}
