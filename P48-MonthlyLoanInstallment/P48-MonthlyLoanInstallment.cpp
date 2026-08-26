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

float CalculateMonthlyInstallment(float loanAmount, float numberOfMonths)
{
    return loanAmount / numberOfMonths;
}

void PrintMonthlyInstallment(float monthlyInstallment)
{
    cout << "\n----------------------------\n";
    cout << "Monthly Installment = " << monthlyInstallment << endl;
    cout << "----------------------------\n";
}

int main()
{
    float loanAmount = ReadPositiveNumber("Enter the total loan amount: ");
    float numberOfMonths = ReadPositiveNumber("Enter total number of months: ");

    PrintMonthlyInstallment(CalculateMonthlyInstallment(loanAmount, numberOfMonths));

    return 0;
}

