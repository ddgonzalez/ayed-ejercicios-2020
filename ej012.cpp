//============================================================================
// Name        : ej_12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
using namespace std;
//Dados dos enteros, informar su producto calculándolo mediantes sumas sucesivas.
//Considerar que los valores ingresados serán números positivos o cero.
//Considerar que los valores ingresados también podrían ser negativos
int main() {

       int a, b, suma = 0;
       int contador = 1;

       //Pide y lee los numeros
       cout << "Digite un numero entero: "; cin >> a;
       cout << "Digite un numero entero: "; cin >> b;

       //Ciclo while que realizara una multiplicacion mediante sumas sucesivas. Ej: 5*2, lo que hace es sumar 2 veces 5.
       while ( contador <= b ) //Mientras que contador sea menor o igual que b
       {
           suma += a; //suma = suma + numero
           contador++; //Postincrementa contador
       } //Fin de while

       cout << "\nEl producto calculado mediante sumas sucesivas es: " << suma << endl; //Imprime el resultado




	return 0;
}
