#include <iostream>
#include <string>
using namespace std;

int main() {

   // Please complete the program so that when the users input his age,
   // the program will show the correspond priesthood office name and duties.

   int age;
   char MP;

   cout << "My priesthood office \nPlesae enter your age: ";
   cin >> age;
   if (age >= 18)
    {
    cout << "Melchizedek Priesthood given(Y/N): ";
    cin >> MP;

    if (MP == 'Y' || MP == 'y')
    cout << "I'm an elder who holds the Melchizdek Priesthood.\nI have the authority to give the priesthood blessing and perform confirmation." << endl;
    else if (MP == 'N' || MP == 'n')
    cout << "I'm a priest who holds the Aaronic Priesthood.\nI have the authority to pass, prepare, bless the sacrament, and baptize people. " << endl;

   }
   else if ((age<18) && (age>=16))
    cout << "I'm a priest who holds the Aaronic Priesthood.\nI have the authority to pass, prepare, bless the sacrament and baptize people." << endl;
   else if ((age<16) && (age>=14))
    cout << "I'm a teacher who holds the Aaronic Priesthood.\nI have the authority to pass and prepare the sacrament. " << endl;
   else if ((age<14) && (age>=12))
    cout << "I'm a deacon who holds the Aaronic Priesthood.\nI have the authority to pass the sacrament. " << endl;
   else if (age<12)
    cout << "You should be prepared to receive the Aronic Preisthood!" << endl;
   else
     {
        cout << "Error: invalid input!" << endl;
     }



   return 0;
}
