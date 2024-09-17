#include <iostream>

using namespace std;

class BankAccount
{

private:
    // Data member (attribute) is private

    double balance;

public:
    // Constructor to initialize balance
    BankAccount(double initialBalance)
    {

        if (initialBalance >= 0)
        {

            balance = initialBalance;
        }
        else
        {

            balance = 0;

            cout << "Initial balance invalid, set to 0." << endl;
        }
    }

    // Public method to deposit money

    void deposit(double amount)
    {

        if (amount > 0)
        {

            balance += amount;
        }
        else
        {

            cout << "Invalid deposit amount." << endl;
        }
    }

    // Public method to withdraw money

    void withdraw(double amount)
    {

        if (amount > 0 && amount <= balance)
        {

            balance -= amount;
        }
        else
        {

            cout << "Invalid withdrawal amount." << endl;
        }
    }

    // Public method to get the current balance

    double getBalance()
    {

        return balance;
    }
};

int main()
{

    // Create a BankAccount object with an initial balance of 1000

    BankAccount myAccount(1000);

    // Deposit 500

    myAccount.deposit(500);

    // balnace  1500
    cout << "Balance after deposit: " << myAccount.getBalance() << endl;

    // Withdraw 200

    myAccount.withdraw(200);

    cout << "Balance after withdrawal: " << myAccount.getBalance() << endl;

    // check the balance

    cout << "Check Balance: " << myAccount.getBalance() << endl;

    // Attempt to withdraw an invalid amount

    myAccount.withdraw(2000);

    return 0;
}