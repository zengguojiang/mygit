#include <iostream>

using namespace std;

bool primeNumber(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;

}
int main()
{
    for(int j=2;j<=10000;j++)
    {
        if(primeNumber(j))
            cout<<j<<"\n";
    }
    return 0;
}
