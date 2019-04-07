#include <iostream>
using namespace std;

int main()
{
   int counter = 0;
   int number;
   int largest;
   int second;

   cout << "Enter the first number: ";
   cin >> largest;

   cout << "Enter next number: ";
   cin >> number;

   if ( number > largest )
   {
      second = largest;
      largest = number;
   }
   else
      second = number;

   counter = 2;

   while ( counter < 10 )
   {
      cout << "Enter next number: ";
      cin >> number;

      if ( number > largest )
      {
         second = largest;
         largest = number;
      }
      else if ( number > second )
         second = number;

      counter++;
   }

   cout << "\nLargest is " <<  largest
      << "\nSecond largest is " << second << endl;
}
