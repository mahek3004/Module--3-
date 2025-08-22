#include<iostream>
using namespace std;

int main() 
{
    int n;

    // Input : size of array
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];  // Declare array
    int sum = 0;

    // Input: array elements
    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
        sum += arr[i]; // calculate sum
    }

    // Calculate average
    float average = (float)sum / n;

    // Output results
    cout << "Sum = " << sum << endl;
    cout << "Average = " << average << endl;

    return 0;
}

