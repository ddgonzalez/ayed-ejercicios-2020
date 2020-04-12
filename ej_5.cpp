//============================================================================
// Name        : EJ5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int a,b;
	cout<<"ingrese dos valores numericos enteros:"<<endl;
	cin>>a>>b;
	if(a==b){
	   cout<<"ambos valores son iguales."<<endl;
	}
	else if(a>b){
	   cout<<a<<"es mayor que"<<b<<endl;
	}

	if(a<b){
	   cout<<a<<"es menor que"<<b<<endl;
	}
	if(b>a){
	   cout<<b<<"es mayor que"<<a<<endl;
	}
	else if (b<a){
	   cout<<b<<"es menor que"<<a<<endl;

	}
	return 0;
}
