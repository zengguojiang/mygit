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
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    if(primeNumber(x))
        cout<<"It is a prime number!";
    else
        cout<<"It is not a prime number!";

    return 0;
}
