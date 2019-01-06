// SavingAccount.h
// SavingAccount class definition

#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H

#include "Account.h"
#include <iostream>

class SavingAccount : public Account // Creating derived class SavingAccount
{
public:
    SavingAccount (double bal, double inter); // Constructor initializes balance and interest rate

    void setInterest (double inter);  // Set interest
    double getInterest (); // Return interest

    double calculateInterest ();
private:
    double interestRate; // Data member interest indicates interest rate (percentage)
};

#endif
