#include <iostream>
#include <string>

using namespace std;

string ReadPinCode(string message)
{
    string pinCode = "";
    cout << message;
    cin >> pinCode;
    return pinCode;
}

bool Login()
{
    string pinCode = "";
    const string correctPin = "1234";

    do
    {
        pinCode = ReadPinCode("Enter ATM PIN: ");

        if (pinCode == correctPin)
        {
            return true;
        }
        else
        {
            cout << "\nWrong PIN!\n";
            system("color 4F");
        }

    } while (pinCode != correctPin);

    return false;
}

void PrintBalance()
{
    system("color 2F");
    cout << "\n----------------------------\n";
    cout << "Your Account Balance is: 7500";
    cout << "\n----------------------------\n";
}

int main()
{
    if (Login())
    {
        PrintBalance();
    }

    return 0;
}
