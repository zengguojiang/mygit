#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number1=0;
    int number2=0;

    cout << "Enter two integers to compare: ";
    cin >> number1 >> number2;

    if ( number1 == number2 )
    cout <<"The numbers are equal"<< endl;

    if ( number1 < number2 )
    cout << number2 << "is large" << endl;

    if ( number1 > number2 )
    cout << number1 << "is large" << endl;
}

