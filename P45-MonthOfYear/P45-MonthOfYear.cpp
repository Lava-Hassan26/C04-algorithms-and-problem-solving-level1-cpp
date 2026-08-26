#include <iostream>
#include <string>

using namespace std;

enum enMonthOfYear
{
    January = 1, 
    February,
    March,
    April, 
    May, 
    June,
    July,
    August,
    September,
    October,
    November,
    December
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

enMonthOfYear ReadMonthOfYear()
{
    return (enMonthOfYear)ReadNumberInRange("Please enter day number (1 to 12): ", 1, 12);
}

string GetMonthOfYear(enMonthOfYear month)
{
    switch (month)
    {
    case enMonthOfYear::January:
        return "January";

    case enMonthOfYear::February:
        return "February";

    case enMonthOfYear::March:
        return "March";

    case enMonthOfYear::April:
        return "April";

    case enMonthOfYear::May:
        return "May";

    case enMonthOfYear::June:
        return "June";

    case enMonthOfYear::July:
        return "July";

    case enMonthOfYear::August:
        return "August";

    case enMonthOfYear::September:
        return "September";

    case enMonthOfYear::October:
        return "October";

    case enMonthOfYear::November:
        return "November";

    case enMonthOfYear::December:
        return "December";

    default:
        return "Wrong Month!";
    }
}

void PrintMonthOfYear(enMonthOfYear month)
{
    cout << "\nIt is " << GetMonthOfYear(month) << endl;
}

int main()
{
    PrintMonthOfYear(ReadMonthOfYear());

    return 0;
}
