// CheckingAccount.cpp
// Class CheckingAccount member-function definitions

#include <iostream>
#include "CheckingAccount.h"

using namespace std;

CheckingAccount::CheckingAccount (double bal, double feeCharged) : Account (bal) // Constructor receives initial balance and parameter indicating fee amount
{
    if (feeCharged > 0.0) // Sets the transaction fee
    {
        fee = feeCharged;
    }
    else
    {
        fee = 0.0;
    }
}

void CheckingAccount::setFee (double feeCharged) // Set fee
{
    feeCharged = fee;
}

double CheckingAccount::getFee () // Return fee
{
    return fee;
}

bool CheckingAccount::ChargeFee ()
{
    Account::setBalance (getBalance() - fee); // Subtract transaction fee from balance
    cout << "Transaction fee: $" << fee << endl;

    if ( getBalance() != getBalance() ) // Checks if there is a sufficient fund for withdrawal
    {
        return true; // Function returns true if the transaction fee is charged
        cout << "The transaction fee has been charged." << endl;
    }
    else
    {
        return false; // Function returns false if the transaction fee is not charged
        cout << "The transaction fee has not been charged." << endl;
    }
}
