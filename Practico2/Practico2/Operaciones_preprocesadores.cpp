#include "stdafx.h"
#include <iostream>

#define JOIN(a, b) JOIN_AGAIN(a,b)
#define JOIN_AGAIN(a,b) a##b
#define STR(s) STR_AGAIN(s)
#define STR_AGAIN(s) #s

void concatenate(int var1, int var2) {
	int JOIN(var1, var2) = 0;
	std::cout << "El nombre de la variables concatenadas es : " << STR(JOIN(var1, var2)) << std::endl;
}

void printLiteraL() {
	const char literal[] = "dog";
	std::cout << "Un literal es : " << literal << std::endl; 
}