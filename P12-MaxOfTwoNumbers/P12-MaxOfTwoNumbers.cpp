#include <iostream>
using namespace std;

float ReadNumber(string message)
{
    float number = 0;
    cout << message;
    cin >> number;

    return number;
}

float MaxOfTwoNumbers(float number1, float number2)
{
    return (number1 > number2) ? number1 : number2;
}

void PrintResult(float number1, float number2)
{
    cout << "\nThe max number is: " << MaxOfTwoNumbers(number1, number2);
}

int main()
{
    PrintResult(ReadNumber("\nEnter Number2: "), ReadNumber("\nEnter Number1: "));
}
