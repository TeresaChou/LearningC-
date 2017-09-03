#include <iostream>
#include <string>
using namespace std;

int main() {
   
   // Please complete the program so that when the users input a priesthood office, 
   // the program will print out the correspond office name and duties.

   string office;
   bool MP;
   cout << "My priesthood office: ";
   cin >> office;
   cout << "I hold the Melchizedek Priesthood(1/0): " << endl;
   cin >> MP;

   cout << "I am a deacon/teacher/priest/elder who holds Aaronic/Melchizedek Priesthood." << endl;
   cout << "I have the authority to";
   cout << "pass the sacrament, baptize people, bless the sacrament, and give priesthood blessing to others." << endl;

   cout << "Error: invalid input!" << endl;

   return 0;
}
