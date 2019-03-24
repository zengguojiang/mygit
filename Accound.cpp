#include<iostream>
#include"008.h"
using namespace std;

  Account::Account()
    {
        if(balance<0)
            cout<<"Your balance is not enough.";
    }
  void Account::credit(int sum)
    {
        cout<<"Now,your balance is: "<<sum<<"\n";
    }
  void Account::debit(int poor)
    {
        if(poor<0)
            poor=balance,
            cout<<"Debit amount exceeded account balance.";
        if(poor>=0)
            cout<<"Now,your balance is: "<<poor;
    }
  void Account::setbalance(int bankbalance)
    {
        balance=bankbalance;
    }
  int Account::getbalance()
    {
        return balance;
    }
