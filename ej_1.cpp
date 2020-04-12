//============================================================================
// Name        : ej_1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   /* se ingresan por teclado dos valores numericos enteros a y b
    * se pide calcular e informar por consola el resultado de las operaciones:
    * 1) suma
    * 2) diferencia
    * 3) producto
    * 4)cociente, aceptando que b es distinto de 0.
    */

     cout <<"ingrese un valor:"<< endl;
     int a;
     cin >> a;
     cout <<"ingrese otro valor:"<<endl;
     int b;
     cin >>b;

     int suma;
     suma=a+b;
     cout <<"el resultado de la suma es:" << suma<<endl;
     int diferencia;
     diferencia=a-b;
     cout << "el resultado de la diferencia es:"<<diferencia<<endl;
     int producto;
     producto=a*b;
     cout<<"el resultado del producto es:" << producto<<endl;
     int cociente;
     if(b==0){
        cout<<"error, no es posible dividir por cero."<<endl;
     }
     cociente=a/b;
     cout <<"el resultado de la division es:"<<cociente<< endl;





	return 0;
}
