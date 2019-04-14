#include <iostream>
using namespace std;

bool multiple( int, int );

int main()
{
   int x;
   int y;

   for ( int i = 1; i <= 3; i++ )
   {
      cout << "Enter two integers: ";
      cin >> x >> y;

      if ( multiple( x, y ) )
         cout << " true " << "\n\n";
      else
         cout << " false " << "\n\n";
   }

   cout << endl;
}

bool multiple( int a, int b )
{
   return !( b % a );
}
