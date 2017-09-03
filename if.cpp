#include <iostream>
#include <string>
using namespace std;

int main() {
   
   // Please complete the program so that when the users input his age, 
   // the program will show the correspond priesthood office name and duties.

   int age;
   bool MP;
   cout << "My priesthood office: ";
   cin >> age;
   cout << "Melchizedek Priesthood given(1/0): " << endl;
   cin >> MP;

   cout << "I am a deacon/teacher/priest/elder who holds Aaronic/Melchizedek Priesthood." << endl;
   cout << "I have the authority to";
   cout << "pass the sacrament, baptize people, bless the sacrament, and give priesthood blessing to others." << endl;

   cout << "Error: invalid input!" << endl;

   return 0;
}
