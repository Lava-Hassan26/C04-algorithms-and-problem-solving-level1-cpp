#include <iostream>
#include <string>

using namespace std;

enum enOperationType { Add = '+', Subtract = '-', Multiply = '*', Divide = '/' };

struct stCalculatorInfo
{
    float number1 = 0;
    float number2 = 0;
    enOperationType operationType = enOperationType::Add;
};

float ReadNumber(string message)
{
    float number = 0;
    cout << message;
    cin >> number;
    return number;
}

enOperationType ReadOperationType()
{
    char op = '+';
    do
    {
        cout << "Enter operation type [+, -, *, /]: ";
        cin >> op;
    } while (op != '+' && op != '-' && op != '*' && op != '/');

    return (enOperationType)op;
}

stCalculatorInfo ReadCalculatorInfo()
{
    stCalculatorInfo calculator;
    calculator.number1 = ReadNumber("Enter number 1: ");
    calculator.number2 = ReadNumber("Enter number 2: ");
    calculator.operationType = ReadOperationType();

    return calculator;
}

float Calculate(stCalculatorInfo calculatorInfo)
{
    switch (calculatorInfo.operationType)
    {
    case enOperationType::Add:
        return calculatorInfo.number1 + calculatorInfo.number2;

    case enOperationType::Subtract:
        return calculatorInfo.number1 - calculatorInfo.number2;

    case enOperationType::Multiply:
        return calculatorInfo.number1 * calculatorInfo.number2;

    case enOperationType::Divide:
        if (calculatorInfo.number2 == 0)
        {
            cout << "\nError: Division by zero! ";
            return 0;
        }
        return calculatorInfo.number1 / calculatorInfo.number2;

    default:
        return 0;
    }
}

void PrintResult(stCalculatorInfo calculatorInfo)
{
    cout << "\n----------------------------\n";
    cout << calculatorInfo.number1 << " "
        << (char)calculatorInfo.operationType << " "
        << calculatorInfo.number2 << " = "
        << Calculate(calculatorInfo) << endl;
    cout << "----------------------------\n";
}

int main()
{
    PrintResult(ReadCalculatorInfo());

    return 0;
}
