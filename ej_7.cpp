//============================================================================
// Name        : ej_7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*Se ingresan tres valores que representan la longitud de los lados de un triángulo,
informar cuál es el tipo del triángulo ingresado (isósceles, equilátero o escaleno).
 * isósceles, dos lados iguales. equilatero,tres lados iguales. 7
 * escaleno,todos sus lados son desiguales.
 */

int main() {
  int x,y,z;
  cout<<"ingrese el primer lado:"<<endl;
  cin>>x;
  cout<<"ingrese el segundo lado:"<<endl;
  cin>>y;
  cout<<"ingrese el tercer lado:"<<endl;
  cin>>z;

  if(x==z && z==y){
     cout<<"el triangulo es equilatero"<<endl;
  }
  else {
     if ( (x==y) or (y==z) or (z==x)){
        cout <<"el triangulo es isosceles"<<endl;
     }
     else {
        if ((x!=y) && (x!=z)&& (z!=y)){
           cout<<"el triangulo es escaleno"<<endl;
        }
     }

     }










	return 0;
}
