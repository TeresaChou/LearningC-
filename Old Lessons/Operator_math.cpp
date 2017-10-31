#include <iostream>

using namespace std;

int main() {

   // Please complete the following two exercises.
   // One is to claculate BMI with the given height and weight.
   // One is to transform temperature degree from Fahrenheit to Celsius.


   float weight;
   cout << "Enter you weight(kg):";
   cin >> weight;

   float height;
   cout << "Enter you height(meter):";
   cin >> height;


   double a = height, b = weight;
   cout << "Your BMI is " << b/(a*a) << endl << endl;    // 這兩行可以改成：
   // cout << "Your BMI is " << weight/(height*height) << endl << endl;
   // double 跟 float 都可以用來存小數，只是double可以存更精細的值

   float Fahrenheit;
   cout << "Enter temperature degree in Fahrenheit:";
   cin >> Fahrenheit;

   float  c = Fahrenheit;
   cout << Fahrenheit << " Fahrenheit = " << (c-32)*5/9 << " degrees Celsius." << endl;
   // 這兩行可以改成：
   // cout << Fahrenheit << " Fahrenheit = " << (Fahrenheit-32)*5/9 << " degrees Celsius." << endl;

   return 0;


   }

