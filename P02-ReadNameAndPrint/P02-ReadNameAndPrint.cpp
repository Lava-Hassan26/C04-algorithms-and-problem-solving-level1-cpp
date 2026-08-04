#include <iostream>
#include <string>
using namespace std;

string ReadName(string Message)
{
    string Name = "";
    cout << Message;
    getline(cin, Name);

    return Name;
}

void PrintName(string Name)
{
    cout << "Your name is: " << Name << endl;
}

int main()
{
    PrintName(ReadName("Enter Your Name: "));

    return 0;
}
