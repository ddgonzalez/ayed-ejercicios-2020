//============================================================================
// Name        : ej_13.cpp
// Author      : Dolores Gonzalez 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*Dado un valor entero, informar su factorial.
NOTA: El factorial de un número n (se indica n!) se calcula así: n * n-1 * n-2 * … * 3 *
2 * 1. El factorial de 0 es 1. Por ejemplo: 5! es: 120, 4! es: 24.
 */
int main() {
	int a;

	cout <<"ingrese un numero"<<endl;
	cin>>a;
	int i=1;
	int factorial=1;

	while(i<=a){
	   factorial=factorial*i;
	   i++;
	}
	cout<<"el factorial es:"<<factorial<<endl;

	return 0;
}
