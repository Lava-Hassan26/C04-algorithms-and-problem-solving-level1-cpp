#include <iostream>
#include <string>
using namespace std;

struct stInfo
{
    string FirstName = "";
    string LastName = "";
};

stInfo ReadInfo()
{
    stInfo Info;
    cout << "Enter Your First Name: ";
    getline(cin, Info.FirstName);
    cout << "Enter Your Last Name: ";
    getline(cin, Info.LastName);

    return Info;
}

string GetFullName(const stInfo& Info, bool Reverse)
{
    if (Reverse)
        return Info.LastName + " " + Info.FirstName;
    else
        return Info.FirstName + " " + Info.LastName;
}

void PrintFullName(string FullName)
{
    cout << "Full Name: " << FullName << endl;
}

int main()
{
    PrintFullName(GetFullName(ReadInfo(), 0));
} 

