#include <iostream>
using namespace std;

struct stDriverInfo
{
    short Age = 0;
    bool HasDrivingLicense = false;
    bool HasRecommendation = false;
};

stDriverInfo ReadDriverInfo()
{
    stDriverInfo DriverInfo;

    cout << "Enter Your Age: ";
    cin >> DriverInfo.Age;
    cout << "Do You Have a Driving License? (1 = Yes , 0 = No) ";
    cin >> DriverInfo.HasDrivingLicense;
    cout << "Do You Have a Recommendation? (1 = Yes , 0 = No) ";
    cin >> DriverInfo.HasRecommendation;

    return DriverInfo;
}

bool IsHired(const stDriverInfo& DriverInfo)
{
    return (DriverInfo.Age >= 21 && DriverInfo.HasDrivingLicense == true || DriverInfo.HasRecommendation);
}

void PrintResult(const stDriverInfo& DriverInfo)
{
    if (IsHired(DriverInfo))
        cout << "\nHired\n";
    else
        cout << "\nRejected\n";
}

int main()
{
    PrintResult(ReadDriverInfo());
}
