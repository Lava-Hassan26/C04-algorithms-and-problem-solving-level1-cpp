#include <iostream>
#include <string>

using namespace std;

struct stBillInfo
{
    float totalBill = 0.0f;
    float cashPaid = 0.0f;
    float remainder = 0.0f;
};

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

stBillInfo ReadBillInfo()
{
    stBillInfo bill;
    bill.totalBill = ReadPositiveNumber("Enter total bill: ");
    bill.cashPaid = ReadPositiveNumber("Enter total cash paid: ");

    return bill;
}

float CalculateRemainder(stBillInfo bill)
{
    return bill.cashPaid - bill.totalBill;
}

void PrintBillInfo(stBillInfo bill)
{
    cout << "\n*****************************\n";
    cout << "Total Bill   : " << bill.totalBill;
    cout << "\nCash Paid    : " << bill.cashPaid;
    cout << "\nRemainder    : " << bill.remainder;
    cout << "\n*****************************\n";
}

int main()
{
    stBillInfo bill = ReadBillInfo();
    bill.remainder = CalculateRemainder(bill);

    PrintBillInfo(bill);

    return 0;
}