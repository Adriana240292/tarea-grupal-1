/*	
*	Programa que genera todas las tablas de multiplicar del 1 al 10
*	
*	Universidad Mariano G�lvez de Guatemala
*	Facultad de Ingenier�a en Sistemas
*	
*	Autor:
*	Josseline Adriana Catal�n Ju�rez
*/

#include <iostream>
using namespace std;

int main(){
	for (int i=1;i<=10;i++){
		cout<<"Tabla de multiplicar del "<<i<<":"<<endl;
	for (int j=1;j<=10;j++)
		cout<<i<<"x"<<j<<"="<<i*j<<endl;
	}
	
	cout<<endl;
	
}
