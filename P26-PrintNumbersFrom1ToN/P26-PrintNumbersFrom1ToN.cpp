#include <iostream>
#include <string>

using namespace std;

int ReadNumber(string message)
{
    int number = 0;
    cout << message;
    cin >> number;
    return number;
}

void PrintNumbersFrom1ToN_UsingForLoop(int number)
{
    cout << "\nUsing for loop:\n";
    for (int i = 1; i <= number; i++)
    {
        cout << i << endl;
    }
}

void PrintNumbersFrom1ToN_UsingWhileLoop(int number)
{
    cout << "\nUsing while loop:\n";
    int i = 1;
    while (i <= number)
    {
        cout << i << endl;
        i++;
    }
}

void PrintNumbersFrom1ToN_UsingDoWhileLoop(int number)
{
    cout << "\nUsing do while loop:\n";
    int i = 1;
    do
    {
        cout << i << endl;
        i++;
    } while (i <= number);
}

int main()
{
    int number = ReadNumber("Enter a number: ");

    PrintNumbersFrom1ToN_UsingForLoop(number);
    PrintNumbersFrom1ToN_UsingWhileLoop(number);
    PrintNumbersFrom1ToN_UsingDoWhileLoop(number);

    return 0;
}