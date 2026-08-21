#include <iostream>

using namespace std;

int ReadPositiveNumber(string message)
{
	int number;
	do
	{
		cout << message;
		cin >> number;
	} while (number <= 0);
	return number;
}

void PowerOf2_3_4(int number)
{
	int p2 = 0, p3 = 0, p4 = 0;
	p2 = number * number;
	p3 = p2 * number;
	p4 = p3 * number;

	cout << "\n\nPower Of 2= " << p2 << endl;
	cout << "Power Of 3= " << p3 << endl;
	cout << "Power of 4= " << p4 << endl;
}

int main()
{
	PowerOf2_3_4(ReadPositiveNumber("Enter a number: "));
}
