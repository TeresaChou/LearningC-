#include <iostream>
using namespace std;

int main() {

   // Please fill in the quote marks with 'T' or 'F'
   // according to different assigned value

   bool True = true, False = false;

   // This is an exmaple
   cout << !True << " = F" << endl;

  // Now try it yourself!

   cout << (False || True) << " = T " << endl;

   cout << (!False && !!True) << " = T " << endl;

   cout << (100-100 == 0 )<< " = T " << endl;

   cout << (15+15 != 30) << " = F " << endl;

   cout << (10 <= 45-35) << " = T " << endl;

   cout << (33 > 98) << " = F " << endl;

   cout <<((45>=10) || (14<8))<< " = T " << endl;

   return 0;
}
