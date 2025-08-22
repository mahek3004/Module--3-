#include <iostream>
using namespace std;

class BankAccount 
{
    private:
        double balance;  

    public:
    BankAccount(double initialBalance = 0) 
	{
        if(initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    void deposit(double amount) 
	{
        if(amount > 0) 
		{
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    void withdraw(double amount) 
	{
        if(amount > 0 && amount <= balance) 
		{
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
		else 
		{
            cout << "Invalid withdrawal or insufficient balance!" << endl;
        }
    }

    double getBalance() 
	{
        return balance;
    }
};

int main() 
{
    BankAccount account1(1000);

    account1.deposit(500);      
    account1.withdraw(200);     

    cout << "Current Balance: " << account1.getBalance() << endl;

    return 0;
}
