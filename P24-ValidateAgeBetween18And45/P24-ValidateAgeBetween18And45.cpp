#include <iostream>
#include <string>

using namespace std;

short ReadAge(string message)
{
    short age = 0;
    cout << message;
    cin >> age;
    return age;
}

bool ValidateNumberInRange(short number, short from, short to)
{
    return (number >= from && number <= to);
}

void PrintResult(short age)
{
    if (ValidateNumberInRange(age, 18, 45))
        cout << age << " is a valid age\n";
    else
        cout << age << " is invalid age\n";
}

int main()
{
    PrintResult(ReadAge("Enter your age: "));

    return 0;
}