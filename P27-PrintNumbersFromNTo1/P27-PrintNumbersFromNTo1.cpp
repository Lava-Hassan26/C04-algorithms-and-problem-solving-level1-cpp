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

void PrintNumbersFromNTo1_UsingForLoop(int number)
{
    cout << "\nUsing for loop:\n";
    for (int i = number; i > 0; i--)
    {
        cout << i << endl;
    }
}

void PrintNumbersFromNTo1_UsingWhileLoop(int number)
{
    cout << "\nUsing while loop:\n";
    int i = number;
    while (i > 0)
    {
        cout << i << endl;
        i--;
    }
}

void PrintNumbersFromNTo1_UsingDoWhileLoop(int number)
{
    cout << "\nUsing do while loop:\n";
    int i = number;
    do
    {
        cout << i << endl;
        i--;
    } while (i > 0);
}

int main()
{
    int number = ReadNumber("Enter a number: ");

    PrintNumbersFromNTo1_UsingForLoop(number);
    PrintNumbersFromNTo1_UsingWhileLoop(number);
    PrintNumbersFromNTo1_UsingDoWhileLoop(number);

    return 0;
}
