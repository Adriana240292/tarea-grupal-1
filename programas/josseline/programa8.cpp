/*	
*	Programa que genera una tabla de multiplicar
*	
*	Universidad Mariano G�lvez de Guatemala
*	Facultad de Ingenier�a en Sistemas
*	
*	Autor:
*	Josseline Adriana Catal�n Ju�rez
*/

#include <iostream>
using namespace std;

void programaOcho()
{
}

int main(){
	int numero;
	
	cout<<"Introducir un numero para crear tabla de multiplicar: ";
	cin>>numero;
	
	cout<<"Tabla de multiplicar del "<<numero<<":"<<endl;
	for (int i=1;i<11;i++){
		cout<<numero<<"x"<<i<<"="<<numero*i<<endl;
	}
	return 0;
	
}
