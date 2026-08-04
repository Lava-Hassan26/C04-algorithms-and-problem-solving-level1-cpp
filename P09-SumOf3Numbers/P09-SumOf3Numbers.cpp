#include <iostream>
using namespace std;

float ReadNumber(string message)
{
    float Number = 0;
    cout << message;
    cin >> Number;
    return Number;
}

void Read3Numbers(float& Number1, float& Number2, float& Number3)
{
    Number1 = ReadNumber("Enter Number1: ");
    Number2 = ReadNumber("Enter Number2: ");
    Number3 = ReadNumber("Enter Number3: ");
}

float SumOf3Numbers(float Number1, float Number2, float Number3)
{
    return Number1 + Number2 + Number3;
}

void PrintResult(float Result)
{
    cout << "\n\nResult= " << Result << endl;
}

int main()
{
    float Number1 = 0, Number2 = 0, Number3 = 0;
    Read3Numbers(Number1, Number2, Number3);
    PrintResult(SumOf3Numbers(Number1, Number2, Number3));

    return 0;
}
