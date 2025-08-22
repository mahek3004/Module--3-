#include <iostream>
using namespace std;

int main() 
{
    int marks;
    cout << "Enter student's marks (0-100): ";
    cin >> marks;

    if (marks >= 90 && marks <= 100)
    {
        cout << "Grade: A" << endl;
    }
    else if (marks >= 75 && marks < 90)
    {
        cout << "Grade: B" << endl;
    }
    else if (marks >= 60 && marks < 75)
    {
        cout << "Grade: C" << endl;
    }
    else if (marks >= 40 && marks < 60)
    {
        cout << "Grade: D" << endl;
    }
    else if (marks >= 0 && marks < 40)
    {
        cout << "Grade: F (Fail)" << endl;
    }
    else
    {
        cout << "Invalid marks! Please enter between 0 and 100." << endl;
    }

    return 0;
}

