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

float ReadRadius()
{
    float radius = ReadNumber("Enter the circle's radius: ");
    return radius;
}

float CalculateCircleArea(float radius)
{
    const float PI = 3.1415926535f;
    return (float) pow(radius, 2) * PI;
}

void PrintResult(float result)
{
    cout << "\nCircle Area= " << result << endl;
}

int main()
{
    PrintResult(CalculateCircleArea(ReadRadius()));
    return 0;
}
