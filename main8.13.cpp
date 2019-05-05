#include <iostream>

using namespace std;

int main()
{
    char string1[80];
    char string2[80];

    cout<<"Enter two strings: ";
    cin>>string1>>string2;

    cout<<string1<<endl;


    int i=0;

    while(string1[i]!='\0')
        ++i;
    for(int j=0;(string1[i]=string2[j]);++i,++j)
        ;

    cout<<string1<<endl;
}

}
