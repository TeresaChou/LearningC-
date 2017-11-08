#include <iostream>
#include <math.h>
using namespace std;

int main() {

   // Please complete the program so that when use input an integer as the number of blocks on the chess board
   // the program will shows how much wheat should be place on each blocks
   // and the total amount of the wheat.
   // ex:
   // input: 3
   // output:
   // 1 wheat on block 1
   // 2 wheat on block 2
   // 4 wheat on block 3
   // Total wheat: 7

   int a=1,n;
   double s;

   cout << "Please enter an integer as the number of the chess board:";
   cin >> n;

   while (a<=n)
   {
    s=pow(2,a-1);
    cout << s << " wheat on block " << a << endl;
    a++;
   }



   return 0;
}
