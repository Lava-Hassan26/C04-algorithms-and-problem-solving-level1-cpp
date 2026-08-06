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

void ReadTriangleSides(float& side1, float& side2, float& side3)
{
    side1 = ReadNumber("Enter the side1 of the triangle: ");
    side2 = ReadNumber("Enter the side2 of the triangle: ");
    side3 = ReadNumber("Enter the side3 of the triangle: ");
}

float CalculateCircleAreaDescribedAroundArbTriangle(float side1, float side2, float side3)
{
    const float PI = 3.1415926535f;

    float p = (side1 + side2 + side3) / 2.0f;
    float baseResult = 4.0f * sqrt(p * (p - side1) * (p - side2) * (p - side3));
    float r = (side1 * side2 * side3) / baseResult;

    return PI * pow(r, 2);
}

void PrintResult(float result)
{
    cout << "\nCircle Area = " << result << endl;
}

int main()
{
    float side1 = 0, side2 = 0, side3 = 0;
    ReadTriangleSides(side1, side2, side3);
    PrintResult(CalculateCircleAreaDescribedAroundArbTriangle(side1, side2, side3));

    return 0;
}