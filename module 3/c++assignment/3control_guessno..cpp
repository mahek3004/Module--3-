#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

int main()
{
    int num, guess;
    srand(time(NULL));                 
    num = rand() % 100 + 1 ;         // % 100 hoie khali to series 0-99 aave and +1 hoie to 1-100 aave   

    cout << "I am thinking of a number between 1 to 100..." << endl;

    do {
        cout << "Write a number: ";
        cin >> guess;

        if (num < guess) 
		{
            cout << "Your guess is too high!" << endl;
        }
        else if (num > guess) 
		{
            cout << "Your guess is too low!" << endl;
        }
        else 
		{
            cout << "Woooooooooh! You guessed it correct :)" << endl;
        }

    } while (num != guess);

    return 0;
}

