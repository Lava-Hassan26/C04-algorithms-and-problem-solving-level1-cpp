#include <iostream>
#include <string>

using namespace std;

int ReadPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}

long long FactorialOfN(int number)
{
    long long factorialResult = 1;

    for (int i = 1; i <= number; i++)
    {
        factorialResult *= i;
    }

    return factorialResult;
}

void PrintResult(long long result)
{
    cout << "\nFactorial = " << result << endl;
}

int main()
{
    PrintResult(FactorialOfN(ReadPositiveNumber("Enter a positive number: ")));

    return 0;
}