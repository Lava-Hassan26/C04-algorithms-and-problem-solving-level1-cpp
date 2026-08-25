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

stTaskDuration ReadTaskDuration()
{
    stTaskDuration taskDuration;
    taskDuration.days = ReadNonNegativeNumber("Enter total days: ");
    taskDuration.hours = ReadNonNegativeNumber("Enter total hours: ");
    taskDuration.minutes = ReadNonNegativeNumber("Enter total minutes: ");
    taskDuration.seconds = ReadNonNegativeNumber("Enter total seconds: ");

    return taskDuration;
}

int TaskDurationInSeconds(stTaskDuration taskDuration)
{
    int totalSeconds = 0;

    totalSeconds += taskDuration.days * 24 * 3600;
    totalSeconds += taskDuration.hours * 3600;
    totalSeconds += taskDuration.minutes * 60;
    totalSeconds += taskDuration.seconds;

    return totalSeconds;
}

void PrintTaskDurationInSeconds(stTaskDuration taskDuration)
{
    cout << "\n----------------------------\n";
    cout << "Task Duration In Seconds = " << TaskDurationInSeconds(taskDuration) << " Seconds\n";
    cout << "----------------------------\n";
}

int main()
{
    stTaskDuration taskDuration = ReadTaskDuration();
    PrintTaskDurationInSeconds(taskDuration);

    return 0;
}
