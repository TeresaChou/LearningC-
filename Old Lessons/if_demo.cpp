#include <iostream>
#include <string>
using namespace std;

int main() {
   
   // Please complete the program so that when the users input his age, 
   // the program will show the correspond priesthood office name and duties.

   int age;
   char MP = 'N';

   cout << "My priesthood office\nPlesae enter your age: ";
   cin >> age;

   if(age < 12)      // not yet received priesthood
      cout << "You should be prepared to receive the Aronic Preisthood!" << endl;
   else {

      if (age >= 18) {
         cout << "Melchizedek Priesthood given(Y/N): ";
         cin >> MP;
      }

      // position
      cout << "I'm ";
      if(age >= 16) {
         if (MP == 'Y' || MP == 'y')   cout << "an elder ";
         else if (MP == 'N' || MP == 'n') cout << "a priest ";
      }
      else if(age>=14)  cout << "a teacher ";
      else  cout << "a deacon ";

      // priesthood
      cout << "who holds the ";
      if (MP == 'Y' || MP == 'y')   cout << "Melchizedek Priesthood." << endl;
      else if (MP == 'N' || MP == 'n') cout << "Aaronic Priesthood." << endl;

      // duties
      cout << "I have the authority to pass the sacrament";
      if(age > 14)   cout << ", prepare the sacrament";
      if(age > 16)   cout << ", bless the sacrament, baptize people";
      if(MP == 'Y' || MP == 'y') cout << ", give priesthood blessings and confirmations";

      cout << '.' << endl;   
   }
   return 0;
}
