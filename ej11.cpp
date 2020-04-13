//============================================================================
// Name        : ej_11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
   int mes,anio;
   cout<<"ingrese un año y luego un mes:"<<endl;
   cin>>anio>>mes;

   if(mes==1 or mes==3 or mes==5 or mes==7 or mes==8 or mes==10 or mes==12){
      cout<<"el mes tiene 31 dias"<<endl;


   }else {
      if(mes==4 or mes==6 or mes==9 or mes==11){
         cout<<"el mes tiene 30 dias"<<endl;
      }
      else {
         if(mes==2){
            if((anio%4==0 and anio%100!=0) or anio%400==0){
               cout<<"el mes tiene 29 dias"<<endl;
            }
            else{
               cout<<"el mes tiene 28 dias"<<endl;
            }
         }
      }
   }






	return 0;
}
