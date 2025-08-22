#include <iostream>
using namespace std;

// Global variable
int num = 20;

void show() 
{
    cout << "Inside show, Global num = " << num << endl;  // 20 thse print
}

int main() 
{
    // Local variable
    int num = 40;

    cout << "Inside main, Local num = " << num << endl; //40 print thse
    cout << "Inside main, Global num = " << ::num << endl; //20 thse print 

    show();

    return 0;
}

