#include <iostream>
#include <string>

using namespace std;

bool ValidateNumberInRange(short number, short from, short to)
{
    return (number >= from && number <= to);
}

short ReadUntilAgeBetween()
{
    short age = 0;
    cout << "Enter your age: ";
    cin >> age;

    while (!ValidateNumberInRange(age, 18, 45))
    {
        cout << "INVALID! Enter a valid age between 18 and 45: ";
        cin >> age;
    }

    return age;
}

void PrintResult(short age)
{
    cout << "\nYour age is " << age << " and it is valid.\n";
}

int main()
{
    PrintResult(ReadUntilAgeBetween());

    return 0;
}