#include <iostream>
using namespace std;
class Calculator 
{
public:
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
        if (b == 0) 
		{
            cout << "Error! Division by zero not allowed." << endl;
            return 0;
        }
        return a / b;
    }
};

int main() 
{
    Calculator c;  
    float num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Addition: " << c.add(num1, num2) << endl;
    cout << "Subtraction: " << c.subtract(num1, num2) << endl;
    cout << "Multiplication: " << c.multiply(num1, num2) << endl;
    cout << "Division: " << c.divide(num1, num2) << endl;

    return 0;
}

