#include <iostream>
#include <iomanip>
using namespace std;

int reverseDigits( int );

int main()
{
   int number;

   cout << "Enter a number: ";
   cin >> number;

   cout << "The number with its digits reversed is: ";

   cout << reverseDigits( number ) << endl;
}
int reverseDigits( int n )
{
   int reverse = 0;

   while ( n > 0 )
   {
      reverse *= 10;
      reverse += n % 10;
      n /= 10;
   }

   return reverse;
}
