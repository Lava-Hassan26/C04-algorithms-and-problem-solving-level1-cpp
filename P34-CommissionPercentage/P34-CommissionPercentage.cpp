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

float GetCommissionPercentage(int totalSales)
{
    if (totalSales >= 1000000)
        return 0.01f;
    else if (totalSales >= 500000)
        return 0.02f;
    else if (totalSales >= 100000)
        return 0.03f;
    else if (totalSales >= 50000)
        return 0.05f;
    else
        return 0.00f;
}

float CalculateTotalCommission(int totalSales)
{
    return totalSales * GetCommissionPercentage(totalSales);
}

int main()
{
    int totalSales = ReadPositiveNumber("Enter total sales: ");

    cout << "\nCommission Percentage = " << GetCommissionPercentage(totalSales) * 100 << "%";
    cout << "\nTotal Commission = " << CalculateTotalCommission(totalSales) << endl;

    return 0;
}
