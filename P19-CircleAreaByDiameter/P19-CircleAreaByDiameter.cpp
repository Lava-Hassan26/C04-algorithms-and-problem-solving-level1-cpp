#include <iostream>
#include <cmath>
#include <string>

using namespace std;

float ReadNumber(string message)
{
    float number = 0;
    cout << message;
    cin >> number;
    return number;
}

float ReadDiameter()
{
    return ReadNumber("Enter the diameter of the circle: ");
}

float CalculateCircleAreaByDiameter(float diameter)
{
    const float PI = 3.1415926535f;
    return (PI * pow(diameter, 2)) / 4.0f;
}

void PrintResult(float result)
{
    cout << "\nCircle Area = " << result << endl;
}

int main()
{
    PrintResult(CalculateCircleAreaByDiameter(ReadDiameter()));
    return 0;
}