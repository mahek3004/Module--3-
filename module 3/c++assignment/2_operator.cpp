#include <iostream>
using namespace std;

int main() 
{
    int a = 10, b = 3;

    cout << "=== Arithmetic Operators ===" << endl;
    cout << "a + b = " << (a + b) << endl;
    cout << "a - b = " << (a - b) << endl;
    cout << "a * b = " << (a * b) << endl;
    cout << "a / b = " << (a / b) << endl;
    cout << "a % b = " << (a % b) << endl;

    cout << "\n=== Relational Operators ===" << endl;
    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b : " << (a > b) << endl;
    cout << "a < b : " << (a < b) << endl;
    cout << "a >= b: " << (a >= b) << endl;
    cout << "a <= b: " << (a <= b) << endl;

    cout << "\n=== Logical Operators ===" << endl;
    cout << "(a > 5 && b < 5): " << (a > 5 && b < 5) << endl;
    cout << "(a > 5 || b > 5): " << (a > 5 || b > 5) << endl;
    cout << "!(a == b): " << !(a == b) << endl;

    cout << "\n=== Bitwise Operators ===" << endl;
    cout << "a & b = " << (a & b) << endl;  // AND
    cout << "a | b = " << (a | b) << endl;  // OR
    cout << "a ^ b = " << (a ^ b) << endl;  // XOR
    cout << "~a = " << (~a) << endl;    	// NOT
    cout << "a << 1 = " << (a << 1) << endl;// Left Shift
    cout << "a >> 1 = " << (a >> 1) << endl;// Right Shift

    return 0;
}

