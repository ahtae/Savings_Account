// Account.cpp
// Class Account member-function definitions

#include <iostream>
#include "Account.h"
using namespace std;

Account::Account ( double bal )
{
    if (bal >= 0.0) // Constructor checks if initial balance is more than 0
    {
        balance = bal;
    }
    else
    {
        cout << "\nInvalid Balance. Balance will be set to 0." << endl; // Displays an error message.
        bal = 0.0; // If initial balance is less than zero, balance is set to zero
    }
}

double Account::credit ( double value )
{
    if (value > 0.0)
    {
        balance += value; // Allows user to add value to balance if condition is satisfied
    }
    else
    {
        cout << "\nInvalid value." << value;
    }
    return balance;
}

bool Account::debit ( double value )
{
    bool enoughFund;
    if ( balance > value) // Checks if there is a sufficient fund for withdrawal
    {
        enoughFund = true; // Indicates success of withdrawal
        balance -= value;
    }
    else
    {
        enoughFund = false; // Indicates failure of withdrawal
        cout << "Insufficent funds for the withdrawal. Debit amount exceeds the funds available in your eligible account." << endl;
    }
    return enoughFund;
}

void Account::setBalance ( double bal ) //Set balance
{
    balance = bal; // Re-initializes the account’s balance.
}

double Account::getBalance()
{
    return balance; // Returns the account's current balance
}
