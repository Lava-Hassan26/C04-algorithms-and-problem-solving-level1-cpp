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

void ReadIsoscelesTriangle(float& side, float& base)
{
    side = ReadNumber("Enter the side of the isosceles triangle: ");
    base = ReadNumber("Enter the base of the isosceles triangle: ");
}

float CalculateCircleAreaByIsoscelesTriangle(float side, float base)
{
    const float PI = 3.1415926535f;
    return ((PI * pow(base, 2)) / 4.0f) * ((2.0f * side - base) / (2.0f * side + base));
}

void PrintResult(float result)
{
    cout << "\nCircle Area = " << result << endl;
}

int main()
{
    float side = 0, base = 0;
    ReadIsoscelesTriangle(side, base);
    PrintResult(CalculateCircleAreaByIsoscelesTriangle(side, base));

    return 0;
}