#include <iostream>

using namespace std;

double minimum(double x,double y,double z)
{
    double res=0;
    res=x;
    if(y<x)
    res=y;
    if(z<y)
    res=z;
    return res;
}
int main()
{
    double i=0;
    double j=0;
    double k=0;
    cout<<"Enter 3 numbers: ";
    cin>>i>>j>>k;
    cout<<"The smallest number is "<<minimum(i,j,k)<<endl;
    return 0;
}
