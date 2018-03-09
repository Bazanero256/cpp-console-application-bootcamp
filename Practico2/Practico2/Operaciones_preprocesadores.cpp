#include "stdafx.h"
#include <string>

#define JOIN(a, b) (a##b)

int concate(char var1, char var2) {
	int JOIN(var1, var2) = 2;
	return JOIN(var1, var2);
}