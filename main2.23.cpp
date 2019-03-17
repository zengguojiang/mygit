#include <iostream>

using namespace std;

int main()
{
    cout << "Input five intergers: ";
    int a,b,c,d,e,min,max;
    cin >>a>>b>>c>>d>>e;
    if (a<=b)
        max=b;
    else
        max=a;
    if(max<=c)
        max=c;
    if(max<=d)
        max=d;
    if(max<=e)
        max=e;
    cout<<"The largest is"<<max<<"\n";
     if (a<=b)
        min=a;
    else
        min=b;
    if(min>=c)
        min=c;
    if(min>=d)
        min=d;
    if(min>=e)
        min=e;
    cout<<"The smallest is"<<min<<"\n";
    return 0;
}
