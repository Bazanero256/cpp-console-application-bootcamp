// main.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include "Operaciones_matematicas.h"

using namespace std;
int main()
{	

	
	int option;
	int userNumber;
	int squareNumber;
	int fstNumber;
	int scdNumber;
	int sumBoth;
	double radius;
	double area;
	cout << "**********************************************" << endl;
	cout << "*Seleccione una opcíon:                      *" << endl;
	cout << "* 1 - Calcular el cuadrado de un numero.     *" << endl;
	cout << "* 2 - Sumar dos numeros.                     *" << endl;
	cout << "* 3 - Calcular el area de un circulo.        *" << endl;
	cout << "* 4 - Concatenar el nombre de dos variables. *" << endl;
	cout << "* 5 - Imprimir un literal en pantalla.       *" << endl;
	cout << "* 6 - Comparar dos strings.                  *" << endl;
	cout << "* 7 - Realizar una operacion binaria.        *" << endl;
	cout << "* 8 - Realizar una operacion logica.         *" << endl;
	cout << "**********************************************" << endl;
	cin >> option;

	switch (option)
	{
	case 1:
		cout << "Ingrese el numero a elevar al cuadrado : ";
		cin >> userNumber;
		squareNumber = square(userNumber);
		cout << "El cuadrado de " << userNumber << " es : " << squareNumber << endl;
		break;
	case 2:
		cout << "Ingrese el primer numero para sumar : ";
		cin >> fstNumber;
		cout << "Ingrese el segundo numero para sumar : ";
		cin >> scdNumber;
		sumBoth = sum(fstNumber, scdNumber);
		cout << "La suma de " << fstNumber << " y " << scdNumber << " es : " << sumBoth << endl; 
		break;
	case 3:
		cout << "Ingrese el radio del circulo para calcular su area : ";
		cin >> radius; 
		area = circleArea(radius);
		cout << "El area de un circulo de radio " << radius << " es :" << area << endl;
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

