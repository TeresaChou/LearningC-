#include <iostream>
using namespace std;

int main() {

   // Please fill in the quote marks with 'T' or 'F'
   // according to different assigned value
   
   bool True = true, False = false; 

   // This is an exmaple
   cout << !True << " = F" << endl;

   // Now try it yourself!
   cout << False || True << " = " << endl;
   cout << !False && !!True << " = " << endl;
   cout << 100-100 == 0 << " = " << endl;
   cout << 15+15 != 30 << " = " << endl;
   cout << 10 <= 45-35 << " = " << endl;
   cout << 33 > 98 << " = " << endl;
   cout << (45>=10) || (14<8) << " = " << endl;

   return 0;
}
