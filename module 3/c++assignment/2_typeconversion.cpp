#include <iostream>
using namespace std;

int main() 
{
    int a = 10;
    double b = 3.5;

    // Implicit conversion (int -> double)
    // Implicit: compiler automatically kare (int -> double).
    double sum = a + b;  
    cout << "Implicit: " << a << " + " << b << " = " << sum << endl;

    // Explicit conversion (double -> int)
    //Explicit: programmer force kare (double -> int).
    int c = (int)b;   // manually
    cout << "Explicit : " << c << endl;

    return 0;
}

