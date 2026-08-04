#include <iostream>
using namespace std;

float ReadNumber(string message)
{
    float number = 0;
    cout << message;
    cin >> number;

    return number;
}

float MaxOfThreeNumbers(float number1, float number2, float number3)
{
    return (number1 > number2) ? number1 : (number2 > number3) ? number2 : number3;
}

void PrintResult(float number1, float number2, float number3)
{
    cout << "\nThe max number is: " << MaxOfThreeNumbers(number1, number2, number3);
}

int main()
{
    PrintResult(ReadNumber("\nEnter Number3: "), ReadNumber("\nEnter Number2: "), ReadNumber("\nEnter Number1: "));
}
