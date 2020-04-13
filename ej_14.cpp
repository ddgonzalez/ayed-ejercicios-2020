//============================================================================
// Name        : ej_14.cpp
// Author      : Dolores Gonzalez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   cout << "Ayed-ejercicios" << endl;
   int n;
   cout <<"ingrese el numero que quiere comparar:" <<endl;
   cin>>n;

   bool esPrimo=true;
   int i=2;
   while (i<n)
   {
      if (n%i==0){
        esPrimo=false;
      }
      i=i+1;
   }
   if(esPrimo){
      cout <<"es un numero primo"<<endl;
   }
   else {
      cout<<"no es primo"<<endl;
   }





	return 0;
}
