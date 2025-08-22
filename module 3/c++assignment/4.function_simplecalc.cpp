#include <iostream>
using namespace std;

// Function prototypes 
float add(float a, float b);
float subtract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

int main() 
{
    float num1,num2;
    int choice;

    cout << "Simple Calculator using Functions\n";
    cout << "---------------------------------\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin  >> choice;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (choice) 
    {
        case 1:
            cout << "Result = " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result = " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result = " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result = " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

// Function definitions
float add(float a, float b) 
{
    return a + b;
}

float subtract(float a, float b) 
{
    return a - b;
}

float multiply(float a, float b) 
{
    return a * b;
}

float divide(float a, float b) 
{
    if (b != 0)
        return a / b;
    else 
    {
        cout << "Error! Division by zero." << endl;
        return 0;
    }
}

