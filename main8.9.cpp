#include <iostream>

using namespace std;

int main()
{
    long *longPtr,value1=200000,value2=100000;
    longPtr=&value1;
    cout<<longPtr;
    value2=*longPtr;
    cout<<"\n"<<value2;
    cout<<"\n"<<&value1;
    cout<<"\n"<<&longPtr;

}
