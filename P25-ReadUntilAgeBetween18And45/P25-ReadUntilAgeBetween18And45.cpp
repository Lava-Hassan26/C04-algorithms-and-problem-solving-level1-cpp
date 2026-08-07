#include <iostream>
#include <string>

using namespace std;

bool ValidateNumberInRange(short number, short from, short to)
{
    return (number >= from && number <= to);
}

short ReadUntilAgeBetween(short from, short to)
{
    short age = 0;
    cout << "Enter your age: ";
    cin >> age;

    while (!ValidateNumberInRange(age, from, to))
    {
        cout << "INVALID! Enter a valid age between "<< from << " and " << to <<": ";
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
    PrintResult(ReadUntilAgeBetween(18,45));

    return 0;
}
