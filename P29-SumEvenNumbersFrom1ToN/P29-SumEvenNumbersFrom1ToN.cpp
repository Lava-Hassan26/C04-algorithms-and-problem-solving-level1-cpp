#include <iostream>
#include <string>

using namespace std;

enum enNumberType { Odd = 1, Even = 2 };

int ReadNumber(string message)
{
    int number = 0;
    cout << message;
    cin >> number;
    return number;
}

enNumberType CheckNumberType(int number)
{
    return (number % 2 == 0) ? enNumberType::Even : enNumberType::Odd;
}

int SumEvenNumbersFrom1ToN(int number)
{
    int evenNumbersSum = 0;
    for (int i = 1; i <= number; i++)
    {
        if (CheckNumberType(i) == enNumberType::Even)
        {
            evenNumbersSum += i;
        }
    }
    return evenNumbersSum;
}

void PrintResult(int sum)
{
    cout << "\nSumming even numbers...\n";
    cout << "Result = " << sum << endl;
}

int main()
{
    PrintResult(SumEvenNumbersFrom1ToN(ReadNumber("Enter a number: ")));

    return 0;
}
