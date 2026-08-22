#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string message)
{
    float number = 0;
    cout << message;
    cin >> number;
    return number;
}

float SumNumbersUntilSentinel()
{
    float number = 0;
    float sum = 0;
    int counter = 1;

    while (true)
    {
        number = ReadNumber("Enter Number " + to_string(counter) + " (-99 to stop): ");

        if (number == -99)
            break;

        sum += number;
        counter++;
    }

    return sum;
}

void PrintResult(float totalSum)
{
    cout << "\n----------------------------\n";
    cout << "Total Sum = " << totalSum << endl;
    cout << "----------------------------\n";
}

int main()
{
    PrintResult(SumNumbersUntilSentinel());

    return 0;
}
