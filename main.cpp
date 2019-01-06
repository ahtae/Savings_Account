// main.cpp
// Test program for Account Inheritance Hierarchy

#include <iostream>
#include <iomanip>

#include "Account.h"
#include "Savingaccount.h"
#include "Checkingaccount.h"

using namespace std;

int main ()
{
    //Creating objects of classes
    Account account (100.0); // Create Account object
    SavingAccount Saccount ( 90.0, .05 ); // Create SavingsAccount object
    CheckingAccount Caccount( 80.0, 2.0 ); // Create CheckingAccount object

    cout << fixed << setprecision ( 2 );

    // Original balance of accounts
    cout << "\nOriginal balance of account: $" << account.getBalance();
    cout << "\nOriginal balance of Saccount: $" << Saccount.getBalance();
    cout << "\nOriginal balance of Cacount: $" << Caccount.getBalance();

    //Debiting
    cout << endl << "\nDebit $17.00 from account.";
    account.debit( 17.0 );
    cout << "\nDebit $32.00 from Saccount.";
    Saccount.debit( 32.0 );
    cout << "\nDebit $55.00 from Caccount.";
    Caccount.debit( 55.0 );

    cout << endl;

    //New balance of accounts
    cout << "\naccount's new balance after debiting: $" << account.getBalance();
    cout << "\nSaccount's new balance after debiting: $" << Saccount.getBalance();
    cout << "\nCacount's new balance after debiting: $" << Caccount.getBalance();

    cout << endl;

    //Crediting
    cout << "\nCredit $23.00 to account.";
    account.credit( 23.0 );
    cout << "\nCredit $45.00 to Saccount.";
    Saccount.credit( 45.0 );
    cout << "\nCredit $35.00 to account.";
    Caccount.credit( 35.0 );

    cout << endl;

    //New balance of accounts
    cout << "\naccount new balance after crediting: $" << account.getBalance();
    cout << "\nSaccount new balance after crediting: $" << Saccount.getBalance();
    cout << "\nCacount new balance after crediting: $" << Caccount.getBalance();

    double interest = Saccount.calculateInterest();
    Saccount.credit ( interest );
    cout << endl;
    cout << "\nNew balance of Saccount after calculating interest: $" << Saccount.getBalance() << endl;

    cout << endl;
    Caccount.ChargeFee();
    cout << "New balance of Caccount after calculating the transaction fee: $" << Caccount.getBalance() << endl;
return 0;
}
