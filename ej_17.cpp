//============================================================================
// Name        : ej_17.cpp
// Author      : Dolores Gonzalez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
//Dados tres valores enteros: n, a y b, informar el n-ésimo múltiplo de a que no es
/*múltiplo de b.
Por ejemplo: si n=10, a=5, b=3 entonces el n-ésimo múltiplo de 5 que no es
múltiplo de 3 es: 70; y surge de la siguiente lista de múltiplos de 5:
múltiplos de 5 = { 5, 10, 15, 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70 }
*/
int main() {
   int n,a,b;
	cout<<"ingrese los valores:"<<endl;
	cin>>n>>a>>b;

	int mA=a;
	int i=0; //contador
	while(i<n){
	   {
	      if (mA%b!=0) //comprobar si es multiplo de A pero no de B.
	      {
	         cout <<mA<<endl;
	         i=i+1;
	      }
	      mA=mA+a;
	   }
	}











	return 0;
}
