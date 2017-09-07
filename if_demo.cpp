#include <iostream>
#include <string>
using namespace std;

int main() {
   
   // Please complete the program so that when the users input his age, 
   // the program will show the correspond priesthood office name and duties.

   int age;
   char MP;
   cout << "My priesthood office: ";
   cin >> age;
   if(age >= 18) {
      cout << "Melchizedek Priesthood given(1/0): " << endl;
      cin >> MP;
      if(MP == 'Y' || MP == 'y') cout << "";
      else if(MP == 'N' || MP == 'n')  cout << "";
      else cout << "Invalid input!";
   }

   return 0;
}
