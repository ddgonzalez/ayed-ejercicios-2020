//============================================================================
// Name        : ej_8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
/*Dado un n�mero de 8 d�gitos que representa una fecha con formato aaaammdd, se
pide mostrar por separado el d�a, el mes y el a�o de la fecha ingresada
 */
int main() {
   long fechaUnificada;
       int dia, mes, agno;
       cout << "Ingrese una fecha en formato AAAAMMDD" << endl;
       cin >> fechaUnificada;
       agno = fechaUnificada / 10000;
       mes = (fechaUnificada - agno * 10000) / 100;
       dia = fechaUnificada - agno * 10000 - mes * 100;
       cout << "La fecha seria el dia " << dia << " del mes " << mes << " del anio " << agno;







	return 0;
}
