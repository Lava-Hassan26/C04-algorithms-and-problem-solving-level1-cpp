#include <iostream>

using namespace std;

struct stPiggyBank
{
    int pennies = 0;
    int nickels = 0;
    int dimes = 0;
    int quarters = 0;
    int dollars = 0;
};

int ReadPositiveNumber(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number < 0);

    return number;
}

stPiggyBank ReadPiggyBank()
{
    stPiggyBank piggyBank;
    piggyBank.pennies = ReadPositiveNumber("Enter total pennies: ");
    piggyBank.nickels = ReadPositiveNumber("Enter total nickels: ");
    piggyBank.dimes = ReadPositiveNumber("Enter total dimes: ");
    piggyBank.quarters = ReadPositiveNumber("Enter total quarters: ");
    piggyBank.dollars= ReadPositiveNumber("Enter total dollars: ");

    return piggyBank;
}

int GetTotalPennies(stPiggyBank piggyBank)
{
    int totalPennies = piggyBank.pennies + 
        piggyBank.nickels * 5 +
        piggyBank.dimes * 10 +
        piggyBank.quarters * 25 +
        piggyBank.dollars * 100;

    return totalPennies;
}

float GetTotalDollars(int totalPennies)
{
    return (float)totalPennies / 100.0f;
}

int main()
{
    stPiggyBank piggyBank = ReadPiggyBank();
    int totalPennies = GetTotalPennies(piggyBank);
    cout << "\nTotal Pennies= " << totalPennies << endl;
    cout << "Total Dollars= " << GetTotalDollars(totalPennies) << endl;

    return 0;
}
