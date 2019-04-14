#include <iostream>

using namespace std;

int celsius(int f)
{
        int k=0;
        k=(f-32)/1.8;
        return k;
}
int fahrenheit(int k)
{
        int f=0;
        f=1.8*k+32;
        return f;
}
int main()
{
        int i=0;
        int j=32;
        int k=0;
        int F=0;
        cout<<"k\tF\n";
        for( ;i<=100;i++)
        {
            F=fahrenheit(i);
            cout<<i<<"\t"<<F<<"\n"<<endl;
        }

        cout<<"F\tk\n";
        for(;j<=212;j++)
        {
            k=celsius(j);
            cout<<j<<"\t"<<k<<"\n"<<endl;
        }



        return 0;
}
