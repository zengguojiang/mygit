#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    int sum = 0;
    int difference=0;
    int product=0;
    int quotient=0;
    cout << "Enter two integers: ";
    cin >> x >> y;
    sum = x + y;
    difference = x - y;
    product = x * y;
    quotient = x / y;
    cout << "The sum is " <<sum << endl;
    cout << "The difference is " <<difference << endl;
    cout << "The product is " <<product << endl;
    cout << "The quotient is " <<quotient << endl;
    return 0;
}
