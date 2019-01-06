// Kristy Li
// CSCI 373-01
// Assignment #1: Account Inheritance Hierarchy

// Account.h
// Account class definition

#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
using namespace std;

class Account  // Creating base class Account
{
public:
    Account (double bal); // Constructor that initializes balance

    void setBalance (double bal); // Set balance
    double getBalance (); // Return balance

    double credit (double value); // Member function called credit
    bool debit (double value); // Member function called debit
private:
    double balance; // Data member called balance of data type double
}; // end class Account

#endif
