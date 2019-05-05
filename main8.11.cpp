#include <iostream>

using namespace std;

int main()
{
       int *number;
    cout<<*number;

    double *realPtr;
    double *integerPtr;

    integerPtr=&realPtr;
    cout<<integerPtr;

    int *x,y;
    x=&y;


   char s[]="this is a character array";
    char *sPtr=s;
    for( ;*sPtr!='\0';++sPtr)
        cout<<*sPtr;
    short *numPtr,result;

    void *genericPtr=&numPtr;
    result=*genericPtr+7;
    double x=19.34;

    double *xPtr=&x;
    cout<<*xPtr<<endl;
}
