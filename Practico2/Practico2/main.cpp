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
	int fstNumber;
	int scdNumber;
	int sumBoth;
	std::string str1 = " ";
	std::string str2 = " ";
	bool resultStr;

	std::cout << "**********************************************" << std::endl;
	std::cout << "*Seleccione una opcíon:                      *" << std::endl;
	std::cout << "* 1 - Calcular el cuadrado de un numero.     *" << std::endl;
	std::cout << "* 2 - Sumar dos numeros.                     *" << std::endl;
	std::cout << "* 3 - Calcular el area de un circulo.        *" << std::endl;
	std::cout << "* 4 - Comprobar el maximo entre dos numeros  *" << std::endl;
	std::cout << "* 5 - Concatenar el nombre de dos variables. *" << std::endl;
	std::cout << "* 6 - Imprimir un literal en pantalla.       *" << std::endl;
	std::cout << "* 7 - Comparar dos strings.                  *" << std::endl;
	std::cout << "* 8 - Realizar una operacion binaria.        *" << std::endl;
	std::cout << "* 9 - Realizar una operacion logica.         *" << std::endl;
	std::cout << "**********************************************" << std::endl;
	std::cin >> option;

	switch (option)
	{
	case 1:
		int userNumber;
		int squareNumber;
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
		double radius;
		double area;
		std::cout << "Ingrese el radio del circulo para calcular su area : ";
		std::cin >> radius; 
		area = circleArea(radius);
		std::cout << "El area de un circulo de radio " << radius << " es :" << area << std::endl;
		break;
	case 4:
		int maxNumber;
		std::cout << "Ingrese el primer numero para comparar : ";
		std::cin >> fstNumber;
		std::cout << "Ingrese el segundo numero para comparar : ";
		std::cin >> scdNumber;
		maxNumber = max(fstNumber, scdNumber);
		std::cout << "El maximo entre  " << fstNumber << " y " << scdNumber << " es : " << maxNumber << std::endl;
		break;
	case 5:
		fstNumber = 0; 
		scdNumber = 0;
		concatenate(fstNumber, scdNumber);
		break;
	case 6:
		printLiteraL();
		break;
	case 7:
	
		std::cout << "Ingrese el primer string a comparar (hasta 255 caracteres) :" << std::endl;
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::getline(std::cin, str1);
		std::cout << "Ingrese el segundo string a comparar (hasta 255 caracteres) :" <<std::endl;
		std::getline(std::cin, str2);
		resultStr = areEqual(str1, str2);
		if (resultStr) {
			std::cout << "Los strings son iguales" << std::endl;
		}
		else {
			std::cout << "Los strings no son iguales" << std::endl; 
		}
		break;
	case 8:
		unsigned int firstBinaryNumber;
		unsigned int secondBinaryNumber;
		unsigned int resultBinary;
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
			std::cin >> firstBinaryNumber;
			std::cout << "Ingrese el valor(numerico) del segundo valor que quiere comparar :";
			std::cin >> secondBinaryNumber;
			resultBinary = bAnd(firstBinaryNumber, secondBinaryNumber);
			std::cout << "El resultado de la operacion es : " << resultBinary << std::endl;
			break;
		case 2:
			std::cout << "Ingrese el valor(numerico) del primer valor que quiere comparar :";
			std::cin >> firstBinaryNumber;
			std::cout << "Ingrese el valor(numerico) del segundo valor que quiere comparar :";
			std::cin >> secondBinaryNumber;
			resultBinary = bOr(firstBinaryNumber, secondBinaryNumber);
			std::cout << "El resultado de la operacion es : " << resultBinary << std::endl;
			break;
		case 3:
			std::cout << "Ingrese el valor(numerico) del primer valor que quiere comparar :";
			std::cin >> firstBinaryNumber;
			resultBinary = sl2(firstBinaryNumber);
			std::cout << "El resultado de la operacion es : " << resultBinary << std::endl;
			break;
		case 4:
			std::cout << "Ingrese el valor(numerico) del primer valor que quiere comparar :";
			std::cin >> firstBinaryNumber;
			resultBinary = sr2(firstBinaryNumber);
			std::cout << "El resultado de la operacion es : " << resultBinary << std::endl;
			break;
		default:
			std::cout <<"El valor ingresado es incorrecto. Saliendo del programa."<< std::endl;
			break;
		}
		break;
	case 9:
		std::cout << "Ingrese un valor para la variable 1 : "; 
		std::cin >> fstNumber; 
		std::cout << "Ingrese un valor para la variable 2 : ";
		std::cin >> scdNumber;
		std::cout << "el Valor de la variable 1 es " << fstNumber << "y el de la variable 2 es " << scdNumber << std::endl;
		swap(fstNumber, scdNumber);
		std::cout << "el Valor de la variable 1 es " << fstNumber << "y el de la variable 2 es " << scdNumber << std::endl;
		break;
	default:
		std::cout << "Ingreso una option incorrecta. Exiting..." << std::endl;
		break;
	}
    return 0;
}

