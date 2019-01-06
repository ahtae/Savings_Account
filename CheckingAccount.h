// CheckingAccount class definition

#include "Account.h"
#include "SavingAccount.h"

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

class CheckingAccount: public Account // Creating derived class CheckingAccount
{
public:
    CheckingAccount (double bal, double feeCharged); // Constructor that initializes balance and transaction amount

    void setFee (double feeCharged); // Set fee
    double getFee (); // Return fee

    bool ChargeFee (); // / Member function called ChargeFee
private:
    double fee; // Data member of type double that represents the fee charged for the account
};

#endif
