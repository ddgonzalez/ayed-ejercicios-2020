//============================================================================
// Name        : ej_18.cpp
// Author      : Dolores Gonzalez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*Dado un valor entero n mostrar el factorial de los primeros n números naturales.
Por ejemplo: si n=7, entonces la salida debe ser: 1, 2, 6, 24, 120, 720, 5040
 */

int main() {
      int a;

      cout <<"ingrese un numero"<<endl;
      cin>>a;
      int i=1;
      int factorial=1;

      while(i<=a){
         factorial=factorial*i;
         cout <<factorial<<' ';
         i++;
      }
      cout<<"el factorial es:"<<factorial<<endl;







	return 0;
}
