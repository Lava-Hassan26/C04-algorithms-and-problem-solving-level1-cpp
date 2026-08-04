#include <iostream>
using namespace std;

enum enPassFail { Pass = 1, Fail };

void Read3Marks(float arrMark[3])
{
    for (short i = 0; i < 3; i++)
    {
        cout << "Enter Mark[" << i + 1 << "]: ";
        cin >> arrMark[i];
    }
}

float SumOf3Marks(float arrMark[3])
{
    float SumResult = 0;
    for (short i = 0; i < 3; i++)
    {
        SumResult += arrMark[i];
    }
    return SumResult;
}

float AverageOf3Marks(float Sum)
{
    return (float)Sum / 3;
}

enPassFail IsPassed(float Average)
{
    return (Average >= 50) ? enPassFail::Pass : enPassFail::Fail;
}

void PrintResult(float Average)
{
    cout << "\nAverage is: " << Average << endl;
    if (IsPassed(Average) == enPassFail::Pass)
        cout << "\nPassed\n";
    else
        cout << "\nFailed\n";
}

int main()
{
    float arrMark[3];
    Read3Marks(arrMark);
    PrintResult(AverageOf3Marks(SumOf3Marks(arrMark)));
}
