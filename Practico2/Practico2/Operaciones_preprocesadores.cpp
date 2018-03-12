#include "stdafx.h"
#include <iostream>

#define JOIN(a, b) JOIN_AGAIN(a,b)
#define JOIN_AGAIN(a, b) (a##b)
#define STR(s) #s
void concatenate(std::string var1, std::string var2) {
	int JOIN(var1, var2);
	std::cout << "El nombre de la variables concatenadas es :" << STR(JOIN(var1, var2)) << std::endl;
}

