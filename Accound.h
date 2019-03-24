#include<iostream>
using namespace std;
class Account
{
public:
    explicit Account();
    void credit(int sum);
    void debit(int poor);
    void setbalance(int bankbalance);
    int getbalance();
private:
    int balance=1;
};
