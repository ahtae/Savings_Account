// SavingAccount.cpp
// Class SavingAccount member-function definitions

#include <iostream>
#include "Account.h"
#include "SavingAccount.h"

using namespace std;


SavingAccount::SavingAccount (double bal, double inter) : Account (bal) // Constructor initializes the balance and interest rate
{
     if (inter < 0.0)
     {
         inter = 0.0;
     }

     else
    {
        interestRate = inter;
    }
}

void SavingAccount::setInterest(double inter) // Set interest                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              {                                                                                                                                                                                                                                 	inter *= bal;	                                                                    }
{
    interestRate = inter; // Re-sets the interest rate
}

double SavingAccount::getInterest()
{
    return interestRate; // Return the current interest rate
}

double SavingAccount::calculateInterest ()
{
    return getBalance() *interestRate; // Member function calculateInterest shows amount of interest earned by account
}
