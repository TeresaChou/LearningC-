#include <iostream>
using namespace std;

int main()
{

   // Please use both while loop and for loop to print out a 九九乘法表
   int a,b,c;
   for (a=1;a<10;a++)
   {
    for (b=1;b<10;b++)
     {
       int c = a*b;

        cout << a << "X" << b << "=" << c << '\t';
     }
       cout << endl;

   }
   return 0;
}
