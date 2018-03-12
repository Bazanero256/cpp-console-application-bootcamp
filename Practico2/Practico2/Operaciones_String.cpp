#include "Operaciones_string.h"
#include "stdafx.h"
#include <iostream>

bool areEqual(char* a, char* b)
{
	bool result = true;
	if (sizeof(a) != sizeof(b)) {
		result = false;
	}
	else {
		int i = 0;
		while ((i < sizeof(a)) && result) {
			i++;
			result = a[i] == b[i];
		}
	}
	return result;
}
