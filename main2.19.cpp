#include <iostream>

using namespace std;

int main()
{
    int x;
    int y;
    int z;
    cout<<"Input three different integers:";
    cin>>x>>y>>z;
    cout<<"Sum is "<<x+y+z<<endl;
    cout<<"Average is "<<(x+y+z)/3<<endl;
    cout<<"Product is "<<x*y*z<<endl;
    if(x<y&&x<z)
        cout<<"Smallest is "<<x<<endl;
    if(y<x&&y<z)
        cout<<"Smallest is "<<y<<endl;
    if(z<x&&z<y)
        cout<<"Smallest is "<<z<<endl;
    if(x>y&&x>z)
        cout<<"Largest is "<<x<<endl;
    if(y>x&&y>z)
        cout<<"Largest is "<<y<<endl;
    if(z>x&&z>y)
        cout<<"Largest is "<<z<<endl;
    return 0;
}
