#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail };

float ReadNumber(string message)
{
    float Number = 0;
    cout << message;
    cin >> Number;

    return Number;
}

enPassFail IsPassed(float mark)
{
    return (mark >= 50) ? enPassFail::Pass : enPassFail::Fail;
}

void PrintResult(float mark)
{
    if (IsPassed(mark) == enPassFail::Pass)
        cout << "Result: Passed\n";
    else
        cout << "Result: Failed\n";
}

int main()
{
    PrintResult(ReadNumber("Enter the mark: "));
}
