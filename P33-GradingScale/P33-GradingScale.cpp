#include <iostream>

using namespace std;

int ReadNumberInRange(string message, int from, int to)
{
	int number;
	do
	{
		cout << message;
		cin >> number;
	} while (number < from || number > to);
	return number;
}

char GetGradeLetter(short grade)
{
	if (grade >= 90)
		return 'A';
	if(grade >= 80)
		return 'B';
	if (grade >= 70)
		return 'C';
	if (grade >= 60)
		return 'D';
	if (grade >= 50)
		return 'E';
	else
		return 'F';
}

int main()
{
	cout << "\nYour Grade's Letter is " << GetGradeLetter(ReadNumberInRange("Enter your grade: ", 0, 100)) << endl;

	return 0;
}