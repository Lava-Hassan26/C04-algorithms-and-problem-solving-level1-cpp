#include <iostream>
using namespace std;

enum enNumberType { Odd = 1, Even };

int ReadNumber(string Message)
{
    int Number = 0;
    cout << Message;
    cin >> Number;
    return Number;
}

enNumberType CheckNumberType(int Number)
{
    if ((Number % 2) == 0)
        return enNumberType::Even;
    else
        return enNumberType::Odd;

}

void PrintNumberType(int Number)
{
    if (CheckNumberType(Number) == enNumberType::Even)
        cout << "\nEven Number\n";
    else
        cout << "\nOdd Number\n";
}

int main()
{
    PrintNumberType(ReadNumber("Enter a number to check its type: "));
}
