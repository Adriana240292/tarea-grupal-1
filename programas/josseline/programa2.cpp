/*	
*	Programa que determina si un n�mero es Par o Impar
*	
*	Universidad Mariano G�lvez de Guatemala
*	Facultad de Ingenier�a en Sistemas
*	
*	Autor:
*	Josseline Adriana Catal�n Ju�rez
*/

#include <iostream>
using namespace std;

int main() {
    int numero;

    
    cout << "Introduce un numero: ";
    cin >> numero;

    
    if (numero % 2 == 0) {
        cout << "El numero " << numero << " es par." << endl;
    } else {
        cout << "El numero " << numero << " es impar." << endl;
    }

    return 0;
}

