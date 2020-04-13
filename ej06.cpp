//============================================================================
// Name        : DEMO.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout<<"ingresa 3 valores"<<endl;
	cin>>a>>b>>c;
	int may,med,men;
	if(a>b && a>c)
	  {
	   may=a;
	   if(b>c){
	      med=b;
	      men=c;
	   }
	   else
	   {
	      med=c;
	      men=b;
	   }
	   }
	else {
	   if(b>a &&b>c){
	      may=b;
	      if(a>c){
	         med=a;
	         men=c;
	      }
	      else {
	         med=c;
	         men=a;
	      }
	   }
	   else {
	      may=c;
	      if (a>b){
	         med=a;
	         men=b;
	      }
	      else {
	         med=b;
	         men=a;
	      }

	   }
	   }
	    cout <<"el valor mayor es:"<< may<< endl;
       cout <<"el valor medio es:"<<med<<endl;
	    cout  <<"el valor menor es:"<<men<<endl;


	return 0;
}
