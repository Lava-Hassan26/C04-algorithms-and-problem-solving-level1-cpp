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
    short counter = 3;

    do
    {
        counter--;
        pinCode = ReadPinCode("Please enter ATM PIN: ");

        if (pinCode == correctPin)
        {
            return true;
        }
        else
        {
            system("color 4F");
            cout << "\nWrong PIN, you have " << counter << " more try(ies)\n";
        }

    } while (counter >= 1 && pinCode != correctPin);

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
    else
    {
        cout << "\n----------------------------\n";
        cout << "Your card is blocked! Call your bank for help.";
        cout << "\n----------------------------\n";
    }

    return 0;
}
