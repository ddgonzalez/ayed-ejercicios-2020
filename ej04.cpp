//============================================================================
// Name        : ej_4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*Se ingresa por teclado dos valores numéricos enteros, diferentes entre sí. informar
cuál es el mayor.
 */
int main() {

   int a,b;

   cout <<"ingrese un valor"<<endl;
   cin>>a;
   cout<<"ingrese otro valor"<<endl;
   cin>>b;

   if (a==b){
      cout <<"ambos valores son iguales."<<endl;
      }
   else if(a>b){
      cout <<"el mayor entre ambos es:" <<a<<endl;
   }
   else{
      cout<<"el mayor entre ambos es:"<<b<<endl;
   }

	return 0;
}
