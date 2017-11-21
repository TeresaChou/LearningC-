#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

/***********************************
 * First, you can simple build an run this file.
 * It shows the size(bytes number) of some common used data type.
 * Then, please get familiar with how printf works,
 * and
 ***********************************/

int main()
{
   cout<<"Size of different data types:"<<endl<<endl;

   cout<<setw(14)<<"bool"<<setw(4)<< sizeof(bool)<<" bytes = "<<setw(4)<< 8*sizeof(bool)<<" bits"<<endl;
   cout<<setw(14) <<"char"<<setw(4)<< sizeof(char)<<" bytes = "<<setw(4)<< 8*sizeof(char)<<" bits"<<endl;
   cout<<setw(14) <<"short"<<setw(4)<< sizeof(short)<<" bytes = "<<setw(4)<< 8*sizeof(short)<<" bits"<<endl; //short
   cout<<setw(14) <<"int"<<setw(4)<< sizeof(int)<<" bytes = "<<setw(4)<< 8*sizeof(int)<<" bits"<<endl; //int
   cout<<setw(14) <<"unsigned int"<<setw(4)<< sizeof(unsigned int)<<" bytes = "<<setw(4)<< 8*sizeof(unsigned int)<<" bits"<<endl; //unsigned int
   cout<<setw(14) <<"long"<<setw(4)<< sizeof(long)<<" bytes = "<<setw(4)<< 8*sizeof(long)<<" bits"<<endl; //long
   cout<<setw(14) <<"float"<<setw(4)<< sizeof(float)<<" bytes = "<<setw(4)<< 8*sizeof(float)<<" bits"<<endl; //float
   cout<<setw(14) <<"double"<<setw(4)<< sizeof(double)<<" bytes = "<<setw(4)<< 8*sizeof(double)<<" bits"<<endl; //double
   cout<<setw(14) <<"long double"<<setw(4)<< sizeof(long double)<<" bytes = "<<setw(4)<< 8*sizeof(long double)<<" bits"<<endl; // long double


   // TODO: type your code here!

   return 0;
}
