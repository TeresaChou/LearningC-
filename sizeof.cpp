#include <iostream>
#include <cstdio>
using namespace std;

/***********************************
 * First, you can simple build an run this file.
 * It shows the size(bytes number) of some common used data type.
 * Then, please get familiar with how printf works,
 * and 
 ***********************************/

int main()
{
   printf("Size of different data types:\n\n");

   printf("%14s%4d bytes = %4d bits\n", "bool", sizeof(bool), 8*sizeof(bool));
   printf("%14s%4d bytes = %4d bits\n", "char", sizeof(char), 8*sizeof(char));
   printf("%14s%4d bytes = %4d bits\n", "short", sizeof(short), 8*sizeof(short));
   printf("%14s%4d bytes = %4d bits\n", "int", sizeof(int), 8*sizeof(int));
   printf("%14s%4d bytes = %4d bits\n", "unsigned int", sizeof(unsigned int), 8*sizeof(unsigned int));
   printf("%14s%4d bytes = %4d bits\n", "long", sizeof(long), 8*sizeof(long));
   printf("%14s%4d bytes = %4d bits\n", "float", sizeof(float), 8*sizeof(float));
   printf("%14s%4d bytes = %4d bits\n", "double", sizeof(double), 8*sizeof(double));
   printf("%14s%4d bytes = %4d bits\n", "long double", sizeof(long double), 8*sizeof(long double));

   
   // TODO: type your code here!

   return 0;
}
