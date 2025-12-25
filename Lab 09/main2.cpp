#include<iostream>
#include"BAS.h"

using namespace std;

int main()
{
    BankAcc b[2];
    for(int i = 0; i<2; i++)
    {
        string accNo;
        string holdername;
        float accbalane;
        cout << "Enter Account number : ";
        cin >> accNo;
        cout << "Enter Account Holder name : ";
        cin >> holdername;
        ;cout << "Enter Account Balance : ";
        cin >> accbalane;
        b[i] = BankAcc(accNo,holdername,accbalane);
    }
    b[0].deposit(9000);
    b[0].withdraw(5000);
    b[0].withdraw(9000);
    b[1].deposit(7070);
    b[1].withdraw(8080);
    b[0].displayAcc();
    b[1].displayAcc();
    
}