//============================================================================
// Name        : ej_16.cpp
// Author      : Dolores Gonzalez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*Dado un valor entero n, informar el n-�simo t�rmino de la sucesi�n de Fibonacci. Por
ejemplo: si n==6, la salida del programa debe ser 8.
NOTA: los primeros dos t�rminos de la serie de Fibonacci son 1 y 1. Luego, cada
t�rmino se calcula como la suma de los dos t�rminos anteriores. As�, los primeros
t�rminos de la serie son: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55.
 */
int main(){
   int n; // valor del usuario
   cout<<"ingrese el valor a calcular:"<<endl;
   cin >> n;

   int t1=1;
   int t2=1;
   int t3=1;

   int i=2; //lo comienzo en 2 porque los dos primeros terminos ya estan calculados.
   while(i<n){
      t3=t1+t2;
      t1=t2;
      t2=t3;
      i=i+1;
   }
   cout <<t3<<endl;









	return 0;
}
