#include <iostream>
#include<string>

using namespace std;

int main () {

   // TODO:
   // Please complete this program using variables of int, char, string and float/double



   cout << "Please enter your" << endl;

   string name;
   cout << "Name: ";
   cin >> name;

   int age;
   cout << "Age: ";
   cin >> age;

   char blood_type;
   cout << "Blood Type: ";
   cin >> blood_type;

   float height_meter;
   cout << "Height(meter): ";
   cin >> height_meter;

   double weight_kg;
   cout << "Weight(kg): ";
   cin >> weight_kg;


   bool Happy_Valentines_Day;
   cout << "Jonathan loves Teresa(T/F?)";
   cin >> Happy_Valentines_Day;

   cout << "Hi! I am "<<name << ". I am "<<age << " years old. My blood type is "<<blood_type
        << ". I am "<<height_meter << " meters tall and weight " <<weight_kg<< " kilograms." << "\n Jonathan loves Teresa very much. Happy Valentine's Day!" << endl;

   return 0;
}
