#include <iostream>
#include"008.h"
using namespace std;
int main()
{
    int a;
    int bankbalance,number1,number2,sum,poor;
    Account myAccount;

    cout<<"Enter your balance: ";
    cin>>bankbalance;
    myAccount.setbalance(bankbalance);

    cout<<"What do you want to do?\n",
    cout<<"0:get money.\n",
    cout<<"1:add money.\n";
    cin>>a;
    if(a)
        {
            cout<<"How much you want to add: ";
            cin>>number1;
            sum=number1+bankbalance;
        5myAccount.credit(sum);
        }
    else
        {
            cout<<"How much you want to get: ";
            cin>>number2;
            poor=bankbalance-number2;
            myAccount.debit(poor);
        }

}
