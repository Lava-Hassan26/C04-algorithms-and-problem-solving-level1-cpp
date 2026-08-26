#include <iostream>
#include <string>

using namespace std;

enum enDayOfWeek
{
    Sunday = 1,
    Monday = 2,
    Tuesday = 3,
    Wednesday = 4,
    Thursday = 5,
    Friday = 6,
    Saturday = 7
};

int ReadNumberInRange(string message, int from, int to)
{
    int number = 0;
    do
    {
        cout << message;
        cin >> number;
    } while (number < from || number > to);

    return number;
}

enDayOfWeek ReadDayOfWeek()
{
    return (enDayOfWeek)ReadNumberInRange("Please enter day number (1 to 7): ", 1, 7);
}

string GetDayOfWeek(enDayOfWeek day)
{
    switch (day)
    {
    case enDayOfWeek::Sunday:
        return "Sunday";

    case enDayOfWeek::Monday:
        return "Monday";

    case enDayOfWeek::Tuesday:
        return "Tuesday";

    case enDayOfWeek::Wednesday:
        return "Wednesday";

    case enDayOfWeek::Thursday:
        return "Thursday";

    case enDayOfWeek::Friday:
        return "Friday";

    case enDayOfWeek::Saturday:
        return "Saturday";

    default:
        return "Not a valid day";
    }
}

void PrintDayOfWeek(enDayOfWeek day)
{
    cout << "\nIt is " << GetDayOfWeek(day) << endl;
}

int main()
{
    PrintDayOfWeek(ReadDayOfWeek());

    return 0;
}
