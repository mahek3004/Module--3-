#include <iostream>
using namespace std;

int main() 
{
    // variables
    int age = 20;          // integer variable
    float height = 5.8;    // float variable
    char grade = 'A';      // character variable
    string name = "Mahek"; // string variable

    // constant
    const double PI = 3.14159;  // value cannot be changed

    // Display variables
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << " feet" << endl;
    cout << "Grade: " << grade << endl;

    double radius = 4;
    double area = PI * radius * radius;
    cout << "Area of circle with radius : " << area << endl;
    return 0;
}

