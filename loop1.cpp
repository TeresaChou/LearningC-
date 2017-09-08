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

   // You did a great job! but there is some redundancy
   // You can do it like this:
   
   int c;
   for(int a=1; a<10; a++)    // 直接宣告在裏面 
   {
      for(int b=1; b<10; b++)
      {
         c = a*b;             // 這邊不用再宣告一次
         cout << a << "X" << b << "=" << c << '\t';
      }
      cout << endl;
   }

   return 0;
}
