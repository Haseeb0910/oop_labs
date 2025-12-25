#ifndef fz
#define fz 

#include<iostream>
#include<string>
using  namespace std;

class BankAcc
{
    private:
    string accNo;
    string holdername;
    double accBalance;
    public:

    //default Constructor
    BankAcc();

    //Parameterized Constructor
    BankAcc(string a , string n , double b);

    //deposit
    void deposit(double amount);

    //withdraw
    void withdraw(double amount);

    //display
    void displayAcc() const;

    //is there sufficient money to withdraw
    bool isSufficient(double amount);
};

#endif