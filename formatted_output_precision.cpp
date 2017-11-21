#include <iostream>
#include <iomanip>
#include <cmath>
#include <limits>
#include <cstdio>
using namespace std;

// When you start doin this exercise, first build and run this file, read it carefully,
// then check for the todo part at the end of the code.

int main()
{
   double pi = M_PI;    // M_PI is a constant stored in <cmath>

   // This is Part I.
   // It shows you how to print out float points with different precision
   // using cout

   cout << "cout.precision() by default = " << cout.precision() << endl;
   printf("printf by default pi =%6lf\n",pi);
   printf(" %.10lf\n",pi);
   printf(" cout.precision(10): pi = %.10f\n", pi);
   printf(" setprecision(20): pi = %.20f\n",pi);
   cout << "cout full precision: pi = " << setprecision(numeric_limits<double>::digits10 + 1) << pi << endl << endl;
   printf(" full precision: pi = %.15f\n",pi);
   //cout << "numeric_limits< double >::digits10 = " << numeric_limits<double>::digits10 << endl << endl;
   printf("numeric_limits< double >::digits10 = %d\n",numeric_limits<double>::digits10);
   printf("---------------------------------------------------\n\n");

   // This is Part II.
   // By assigning PI to diffrent data type, it shows that these data types have
   // different capacity of storing floating points with precise precision.
   // Note that there three data type are all for floating points storing.
   // The only different is the memory size.
   // The bigger the memory is, the more precisely the floating points can be stored.
   // ( You can use sizeof() to check out their sizes.)



   // TODO:
   // Now is your turn!
   // Please redo the Part I (you don't need to do part II, it's for your reference.)
   // using printf in <cstdio>

   return 0;
}
