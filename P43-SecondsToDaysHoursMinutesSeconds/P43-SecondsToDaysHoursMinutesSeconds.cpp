#include <iostream>
#include <string>

using namespace std;

struct stTaskDuration
{
    int days = 0;
    int hours = 0;
    int minutes = 0;
    int seconds = 0;
};

int ReadNonNegativeNumber(string message)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number < 0);

    return number;
}

stTaskDuration SecondsToTaskDuration(int totalSeconds)
{
    stTaskDuration taskDuration;
    int remainder = 0;

    const int secondsPerDay = 24 * 3600;
    const int secondsPerHour = 3600;
    const int secondsPerMinute = 60;

    taskDuration.days = totalSeconds / secondsPerDay;
    remainder = totalSeconds % secondsPerDay;

    taskDuration.hours = remainder / secondsPerHour;
    remainder = remainder % secondsPerHour;

    taskDuration.minutes = remainder / secondsPerMinute;
    remainder = remainder % secondsPerMinute;

    taskDuration.seconds = remainder;

    return taskDuration;
}

void PrintTaskDurationDetails(stTaskDuration taskDuration)
{
    cout << "\n----------------------------\n";
    cout << taskDuration.days << ":"
        << taskDuration.hours << ":"
        << taskDuration.minutes << ":"
        << taskDuration.seconds << endl;
    cout << "----------------------------\n";
}

int main()
{
    int totalSeconds = ReadNonNegativeNumber("Enter total seconds: ");
    PrintTaskDurationDetails(SecondsToTaskDuration(totalSeconds));

    return 0;
}
