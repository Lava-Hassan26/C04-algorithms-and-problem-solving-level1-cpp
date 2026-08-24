#include <iostream>
#include <string>

using namespace std;

float ReadPositiveNumber(string message)
{
    float number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number <= 0);

    return number;
}

float CalculateTotalBill(float totalBill)
{
    totalBill = totalBill * 1.1f; 
    totalBill = totalBill * 1.16f;
    return totalBill;
}

void PrintTotalBill(float totalBill)
{
    cout << "\n**********************\n";
    cout << "Total Bill = " << totalBill;
    cout << "\n**********************\n";
}

int main()
{
    float totalBill = ReadPositiveNumber("Enter total bill: ");

    PrintTotalBill(CalculateTotalBill(totalBill));

    return 0;
}