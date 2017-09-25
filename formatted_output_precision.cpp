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
   cout << "              cout : pi = " << pi << endl;
   cout.precision(10);
   cout << " cout.precision(10): pi = " << pi << endl;
   cout << "   setprecision(20): pi = " << setprecision(20) << pi << endl;
   cout << "cout full precision: pi = " << setprecision(numeric_limits<double>::digits10 + 1) << pi << endl << endl;
   cout << "numeric_limits< double >::digits10 = " << numeric_limits<double>::digits10 << endl << endl;

   cout << "---------------------------------------------------" << endl << endl;

   // This is Part II.
   // By assigning PI to diffrent data type, it shows that these data types have
   // different capacity of storing floating points with precise precision.
   // Note that there three data type are all for floating points storing.
   // The only different is the memory size.
   // The bigger the memory is, the more precisely the floating points can be stored.
   // ( You can use sizeof() to check out their sizes.)

   const float floatPI = 3.1415927;                            // float:  7 digits of precision
   const double doublePI = 3.141592653589793;                  //double: 15 digits of precision
   const long double longDoublePI = 3.141592653589793238; //long double: 15 digits of precision

   cout.precision(6);
   cout << setw(16) << "floatPI = " << floatPI << endl;
   cout << setw(16) << "doublePI = " << doublePI << endl;
   cout << setw(16) << "longDoublePI = " << longDoublePI << endl << endl;

   cout << "cout.precision(10):" << endl;
   cout.precision(10);
   cout << setw(16) << "floatPI = " << floatPI << endl;
   cout << setw(16) << "doublePI = " << doublePI << endl;
   cout << setw(16) << "longDoublePI = " << longDoublePI << endl << endl;

   cout << "setprecision(12):" << endl;
   cout << setw(16) << "floatPI = " << setprecision(12) << floatPI << endl;
   cout << setw(16) << "doublePI = " << setprecision(12) << doublePI << endl;
   cout << setw(16) << "longDoublePI = " << setprecision(12) << longDoublePI << endl << endl;

   cout << "setprecision( numeric_limits<dataType>::digits10 + 1 ):" << endl;
   cout << setw(16) << "floatPI = " << setprecision(numeric_limits<float>::digits10 + 1) << floatPI << endl;
   cout << setw(16) << "doublePI = " << setprecision(numeric_limits<double>::digits10 + 1) << doublePI << endl;
   cout << setw(16) << "longDoublePI = " << setprecision(numeric_limits<long double>::digits10 + 1) << longDoublePI << endl;
   cout << "cout.precision() by default = " << cout.precision() << endl;

   // TODO:
   // Now is your turn!
   // Please redo the Part I (you don't need to do part II, it's for your reference.)
   // using printf in <cstdio>

   return 0;
}
