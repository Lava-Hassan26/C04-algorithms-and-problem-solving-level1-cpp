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

float HoursToDays(float hours)
{
    return hours / 24.0f;
}

float HoursToWeeks(float hours)
{
    return hours / 168.0f;
}

float DaysToWeeks(float days)
{
    return days / 7.0f;
}

void PrintResult(float hours)
{
    float numberOfDays = HoursToDays(hours);
    float numberOfWeeks = HoursToWeeks(hours);

    cout << "\n----------------------------\n";
    cout << "Total Hours = " << hours << endl;
    cout << "Total Days  = " << numberOfDays << endl;
    cout << "Total Weeks = " << numberOfWeeks << endl;
    cout << "----------------------------\n";
}

int main()
{
    float numberOfHours = ReadPositiveNumber("Enter total hours: ");
    PrintResult(numberOfHours);

    return 0;
}
