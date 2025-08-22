#include <iostream>
using namespace std;

int main() 
{
    int A[2][2], B[2][2], Sum[2][2];

    // Input matrix A
    cout << "Enter elements of 1st 2x2 matrix (A):" << endl;
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++) 
		{
            cin >> A[i][j];
        }
    }

    // Input matrix B
    cout << "Enter elements of 2nd 2x2 matrix (B):" << endl;
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++) 
		{
            cin >> B[i][j];
        }
    }

    // Display Result
    cout << "Resultant Matrix after Addition:" << endl;
    for (int i = 0; i < 2; i++) 
	{
        for (int j = 0; j < 2; j++) 
		{
			Sum[i][j] = A[i][j] + B[i][j];
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


