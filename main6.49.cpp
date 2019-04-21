#include <iostream>

using namespace std;
int pi=3.14;

inline double area(const double x)
{
    return pi*x*x;
}
int main()
{
    double s=0;
    double r=0;
    cout<<"Enter r: ";
    cin>>r;
    cout<<"s= "<<area(r)<<endl;
    return 0;
}
