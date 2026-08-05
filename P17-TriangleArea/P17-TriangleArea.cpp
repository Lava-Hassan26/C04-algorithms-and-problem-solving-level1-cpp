#include <iostream>
#include <cmath>
#include <string>

using namespace std;

struct stTriangle
{
    float height = 0;
    float base = 0;
};

float ReadNumber(string message)
{
    float number = 0;
    cout << message;
    cin >> number;
    return number;
}

stTriangle ReadTriangle()
{
    stTriangle triangle;
    triangle.height = ReadNumber("Enter the triangle's height: ");
    triangle.base = ReadNumber("Enter the triangle's base: ");
    return triangle;
}

float CalculateTriangleArea(const stTriangle& triangle)
{
    return 0.5f * triangle.height * triangle.base;
}

void PrintResult(const stTriangle& triangle)
{
    cout << "\nArea = " << CalculateTriangleArea(triangle) << endl;
}

int main()
{
    PrintResult(ReadTriangle());
    return 0;
}
