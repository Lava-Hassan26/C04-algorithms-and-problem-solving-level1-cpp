#include <iostream>
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

float GetTotalMonth(float loanAmount, float monthlyPayment)
{
    return(float)loanAmount / monthlyPayment;
}

int main()
{
    float loanAmount = ReadPositiveNumber("Enter the loan amount: ");
    float monthlyPayment = ReadPositiveNumber("Enter the monthly payment: ");

    cout << "\nTotal months= " << GetTotalMonth(loanAmount, monthlyPayment) << endl;

	return 0;
}
