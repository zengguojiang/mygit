#include <iostream>

using namespace std;

bool iseven(int i)
{
    int j=0;
    j=i%2;
    if(j==0)
        return true;
    else
        return false;

}

int main()
{
    int integer=0;
    cout<<"Enter a integer: ";
    cin>>integer;
    if(iseven(integer))
        cout<<integer<<" is an even number"<<endl;
    else
        cout<<integer<<" is not an even number"<<endl;
    return 0;
}
