#include <string>
#include "BAS.h"
using namespace std;

BankAcc::BankAcc()
{
   accNo = "";
   holdername = "";
   accBalance = 0;
}

BankAcc::BankAcc(string a , string n , double b)
{
    accNo = a;
    holdername = n;
    accBalance = b;
}

void BankAcc::deposit(double amount)
{
  accBalance += amount;
  cout << "Amount is deposited " << endl;
}

void BankAcc::withdraw(double amount)
{
  if(isSufficient(amount))
  {
    accBalance -= amount;
    cout << "Amount is Withdrawal " << endl;
  }
  else
  {
    cout << "You don't have sufficient balance for this withdrawal " << endl;
  }
}

void BankAcc::displayAcc() const
{
    cout << "Account Number is : " << accNo << endl; 
    cout << "Account Holder name is : " << holdername << endl; 
    cout << "Account Balance is : " << accBalance << endl; 
}

bool BankAcc::isSufficient(double amount)
{
    if(amount <= accBalance)
    {
        return true;
    }
    return false;
}



