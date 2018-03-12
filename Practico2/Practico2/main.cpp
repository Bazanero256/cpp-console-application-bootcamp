// main.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include "Operaciones_matematicas.h"
#include "Operaciones_string.h"
#include "Operaciones_binarias.h"
#include "Operaciones_preprocesadores.h"
#include "Operaciones_logicas.h"

int main()
{	
	int option;
	int userNumber;
	int squareNumber;
	int fstNumber;
	int scdNumber;
	int sumBoth;
	int resultBinary;
	char str1[] = " ";
	char str2[] = " ";
	bool resultStr;
	double radius;
	double area;
	std::cout << "**********************************************" << std::endl;
	std::cout << "*Seleccione una opcíon:                      *" << std::endl;
	std::cout << "* 1 - Calcular el cuadrado de un numero.     *" << std::endl;
	std::cout << "* 2 - Sumar dos numeros.                     *" << std::endl;
	std::cout << "* 3 - Calcular el area de un circulo.        *" << std::endl;
	std::cout << "* 4 - Concatenar el nombre de dos variables. *" << std::endl;
	std::cout << "* 5 - Imprimir un literal en pantalla.       *" << std::endl;
	std::cout << "* 6 - Comparar dos strings.                  *" << std::endl;
	std::cout << "* 7 - Realizar una operacion binaria.        *" << std::endl;
	std::cout << "* 8 - Realizar una operacion logica.         *" << std::endl;
	std::cout << "**********************************************" << std::endl;
	std::cin >> option;

	switch (option)
	{
	case 1:
		std::cout << "Ingrese el numero a elevar al cuadrado : ";
		std::cin >> userNumber;
		squareNumber = square(userNumber);
		std::cout << "El cuadrado de " << userNumber << " es : " << squareNumber << std::endl;
		break;
	case 2:
		std::cout << "Ingrese el primer numero para sumar : ";
		std::cin >> fstNumber;
		std::cout << "Ingrese el segundo numero para sumar : ";
		std::cin >> scdNumber;
		sumBoth = sum(fstNumber, scdNumber);
		std::cout << "La suma de " << fstNumber << " y " << scdNumber << " es : " << sumBoth << std::endl; 
		break;
	case 3:
		std::cout << "Ingrese el radio del circulo para calcular su area : ";
		std::cin >> radius; 
		area = circleArea(radius);
		std::cout << "El area de un circulo de radio " << radius << " es :" << area << std::endl;
		break;
	case 4:
		std::cout << "Ingrese el nombre de la primera variable: ";
		std::cin >> str1;
		std::cout << "Ingrese el nombre de la segunda variable: ";
		std::cin >> str2;
		concatenate(str1, str2);
		break;
	case 5:
		break;
	case 6:
		std::cout << "Ingrese el primer string a comparar";
		std::cin >> str1;
		std::cout << "Ingrese el segundo string a comparar";
		std::cin >> str2;
		resultStr = areEqual(str1, str2);
		if (resultStr) {
			std::cout << "Los strings son iguales" << std::endl;
		}
		else {
			std::cout << "Los strings no son iguales" << std::endl; 
		}
		break;
	case 7:
		std::cout << "Eliga el numero de la operacion binaria quiere realizar " << std::endl;
		std::cout << "********************************************" << std::endl;
		std::cout << "* 1 - Operacion AND                        *" << std::endl;
		std::cout << "* 2 - Operacion OR                         *" << std::endl;
		std::cout << "* 3 - Correr 2 lugares a la izquierda      *" << std::endl;
		std::cout << "* 4 - Correr 2 lugares a la derecha        *" << std::endl;
		std::cout << "********************************************" << std::endl;
		std::cin >> option;
		switch (option)
		{
		case 1:
			std::cout << "Ingrese el valor(numerico) del primer valor que quiere comparar :";
			std::cin >> fstNumber;
			std::cout << "Ingrese el valor(numerico) del segundo valor que quiere comparar :";
			std::cin >> scdNumber;
			resultBinary = bAnd(fstNumber, scdNumber);
			std::cout << "El resultado de la operacion es : " << resultBinary << std::endl;
			break;
		case 2:
			std::cout << "Ingrese el valor(numerico) del primer valor que quiere comparar :";
			std::cin >> fstNumber;
			std::cout << "Ingrese el valor(numerico) del segundo valor que quiere comparar :";
			std::cin >> scdNumber;
			resultBinary = bOr(fstNumber, scdNumber);
			std::cout << "El resultado de la operacion es : " << resultBinary << std::endl;
			break;
		case 3:
			std::cout << "Ingrese el valor(numerico) del primer valor que quiere comparar :";
			std::cin >> fstNumber;
			resultBinary = sl2(fstNumber);
			std::cout << "El resultado de la operacion es : " << resultBinary << std::endl;
			break;
		case 4:
			std::cout << "Ingrese el valor(numerico) del primer valor que quiere comparar :";
			std::cin >> fstNumber;
			resultBinary = sr2(fstNumber);
			std::cout << "El resultado de la operacion es : " << resultBinary << std::endl;
			break;
		default:
			std::cout <<"El valor ingresado es incorrecto. Saliendo del programa."<< std::endl;
			break;
		}
		break;
	case 8:
		std::cout << "Ingrese un valor para la variable 1 : "; 
		std::cin >> fstNumber; 
		std::cout << "Ingrese un valor para la variable 2 : ";
		std::cin >> scdNumber;
		std::cout << "el Valor de la variable 1 es " << fstNumber << "y el de la variable 2 es " << scdNumber << std::endl;
		swap(fstNumber, scdNumber);
		std::cout << "el Valor de la variable 1 es " << fstNumber << "y el de la variable 2 es " << scdNumber << std::endl;

		break;
	default:
		break;
	}
    return 0;
}

