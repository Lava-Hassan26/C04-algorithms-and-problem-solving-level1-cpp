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

float ReadSquareSide()
{
    return ReadNumber("Enter the side of the square: ");
}

float CalculateCircleAreaInscribedInSquare(float side)
{
    const float PI = 3.1415926535f;
    return (PI * pow(side, 2)) / 4.0f;
}

void PrintResult(float result)
{
    cout << "\nCircle Area = " << result << endl;
}

int main()
{
    PrintResult(CalculateCircleAreaInscribedInSquare(ReadSquareSide()));
    return 0;
}