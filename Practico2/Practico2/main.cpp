// main.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include "Operaciones_matematicas.h"

using namespace std;
int main()
{
	int option; 
	cout << "*********************************************" << endl;
	cout << "*Seleccione una opcíon:					 *" << endl;
	cout << "* -Calcular el cuadrado de un numero: 1	 *" << endl;
	cout << "* -Sumar dos numeros : 2					 *" << endl;
	cout << "* -Calcular el area de un circulo : 3		 *" << endl;
	cout << "* -Concatenar el nombre de dos variables: 4 *" << endl;
	cout << "* -Imprimir un texto en pantalla: 5		 *" << endl;
	cout << "* -Comparar dos strings: 6					 *" << endl;
	cout << "* -Realizar una operacion binaria: 7		 *" << endl;
	cout << "* -Realizar una operacion logica: 8		 *" << endl;
	cout << "*********************************************" << endl;
	cin >> option;

	switch (option)
	{
	case 1:
		break;
	case 2:
		break;
	case 3:
		break;
	case 4:
		break;
	case 5:
		break;
	case 6:
		break;
	case 7:
		break;
	case 8:
		break;
	default:
		break;
	}
    return 0;
}

