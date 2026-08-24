#include <iostream>
#include <string>

using namespace std;

enum enPrimeNotPrime { Prime = 1, NotPrime = 2 };

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

enPrimeNotPrime IsPrime(int number)
{
    if (number == 1)
        return enPrimeNotPrime::NotPrime;

    int M = number / 2;
    for (int i = 2; i <= M; i++)
    {
        if (number % i == 0)
            return enPrimeNotPrime::NotPrime;
    }

    return enPrimeNotPrime::Prime;
}

void PrintResult(int number)
{
    switch (IsPrime(number))
    {
    case enPrimeNotPrime::Prime:
        cout << "\n" << number << " is a prime number\n";
        break;
    case enPrimeNotPrime::NotPrime:
        cout << "\n" << number << " is NOT a prime number\n";
        break;
    }
}

int main()
{
    PrintResult(ReadPositiveNumber("Enter a positive number: "));

    return 0;
}
