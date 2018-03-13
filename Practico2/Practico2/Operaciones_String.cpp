#include "Operaciones_string.h"
#include "stdafx.h"
#include <iostream>

bool areEqual(std::string string1, std::string string2)
{
	return string1.compare(string2); //returns 0 if the two strings are equal.
}
