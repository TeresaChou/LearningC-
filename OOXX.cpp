#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
   char turn = 'O';
   char blocks[3][3] = {'-','-','-','-','-','-','-','-','-'};
   bool win = false, input_success = false;
   int p0, p1, count = 0;
   while(!win) {
      if(count >= 9) {
         cout << "Tie!" << endl;
         break;
      }
      while(!input_success) {
         printf("Now it's %c's turn: ", turn);
         cin >> p0 >> p1;
         if( ) {     // TODO: complete this condition to make sure the blocks is not filled twice.
            cout << "This block has already been filled. Please enter another one." << endl;
         }
         else input_success = true;
      }
      
      // TODO: type your code here to complete the OOXX game!

      count++;
   }

   return 0;
}
