#include <iostream>

using namespace std;

int tripleByValue(int);
int tripleByReference(int&);
int main()
{
    int count=1;
    cout<<"Count= "<<count<<" before tripleByValue\n";
    cout<<"Count returned by tripleByValue: "<<tripleByValue(count)<<endl;
    cout<<"Count= "<<count<<" after tripleByValue\n"<<endl;

    cout<<"Count= "<<count<<" before tripleByReference\n";
    cout<<"Count returned by tripleByValue: "<<tripleByReference(count)<<endl;
    cout<<"Count= "<<count<<" after tripleByReference\n"<<endl;
}
int tripleByValue(int num)
{
    return num*=3;
}
int tripleByReference(int &numRef)
{
    return numRef*=3;
}
