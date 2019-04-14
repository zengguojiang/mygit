#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double hypotenuse( double, double );

int main()
{
   double side1;
   double side2;

   cout << fixed;

   for ( int i = 1; i <= 3; i++ )
   {
      cout << "\nEnter two sides of right triangle: ";
      cin >> side1 >> side2;

      cout << "Hypotenuse:  " << setprecision( 1 )
         << hypotenuse( side1, side2 ) << endl;
   }
}

double hypotenuse( double s1, double s2 )
{
   return sqrt( s1 * s1 + s2 * s2 );
}
