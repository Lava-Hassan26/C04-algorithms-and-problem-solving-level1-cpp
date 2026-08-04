#include <iostream>
using namespace std;

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

void PrintResult(float Average)
{
    cout << "\n\nThe Result of the Average is: " << Average << endl;
}

int main()
{
    float arrMark[3];
    Read3Marks(arrMark);
    PrintResult(AverageOf3Marks(SumOf3Marks(arrMark)));
}

