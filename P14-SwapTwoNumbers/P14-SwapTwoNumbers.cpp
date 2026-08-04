 #include <iostream>
using namespace std;

float ReadNumber(string message)
{
    float number = 0;
    cout << message;
    cin >> number;
    return number;
}

void SwapNumbers(float& num1, float& num2)
{
    float temp = 0;
    temp = num1;
    num1 = num2;
    num2 = temp;
}

void PrintResult(float num1, float num2)
{
    cout << "After Swaping:\n";
    cout << num1 << endl;
    cout << num2 << endl;
}

int main()
{
    float num1 = ReadNumber("Enter first number: ");
    float num2 = ReadNumber("Enter second number: ");
    SwapNumbers(num1, num2);
    PrintResult(num1, num2);
}
