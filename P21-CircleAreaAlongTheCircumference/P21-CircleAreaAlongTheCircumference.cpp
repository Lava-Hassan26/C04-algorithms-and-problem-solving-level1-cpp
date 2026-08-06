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

float ReadCircumference()
{
    return ReadNumber("Enter the circumference of the circle: ");
}

float CalculateCircleAreaAlongCircumference(float circumference)
{
    const float PI = 3.1415926535f;
    return pow(circumference, 2) / (PI * 4.0f);
}

void PrintResult(float result)
{
    cout << "\nCircle Area = " << result << endl;
}

int main()
{
    PrintResult(CalculateCircleAreaAlongCircumference(ReadCircumference()));
    return 0;
}