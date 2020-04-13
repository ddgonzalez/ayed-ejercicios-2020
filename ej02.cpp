//============================================================================
// Name        : ej_2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   /*Se ingresan por teclado dos valores numéricos enteros: a y b, se pide calcular e
   informar el cociente a/b, validando que b sea distinto de cero; en tal caso, mostrar
   un mensaje de error en la consola.
    *
    */

      int a,b,cociente;
      cout<<"ingrese un valor:"<<endl; // pedimos el primer valor.
      cin>>a; //guardamos en el espacio almacenado a.
      cout<<"ingrese un segundo valor"<<endl;
      cin>>b;
      if(b==0){
         cout<<"error, no se puede realizar la division."<<endl;
      } //el if tiene que ir antes del cociente porque esto es secuencial, si lo pongo despues no funcionaria. hay que comprobar primero a b.
      cociente=a/b;
      cout<<"el resultado del cociente es:"<<cociente<<endl;

	return 0;
}
