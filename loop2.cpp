#include <iostream>
using namespace std;

int main()
{

   // Please complete the program so that when the user enter an interger,
   // the program will show its iterated sum and product.
   // For example, if the input is 10
   // the output should be 55 and 3628800
   // for 1+2+3+...+10 = 55 and 1*2*3*...*10 = 3628800


   int a=1,n,s1=0,s2=1;
   cout << "Please enter an interger:";
   cin >> n;
   while (a<=n)
   {
     s1+=a;
     s2*=a;
     a++;

   }
   cout << "1+2+3+...+" << n << "=" << s1 << endl;
   cout << "1*2*3+...*" << n << "=" << s2 << endl;


   return 0;
}
