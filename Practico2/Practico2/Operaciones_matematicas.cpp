#include "Operaciones_matematicas.h"
#include "stdafx.h"
#define PI 3.1415926

int square(int a) {
	return a * a;
}

int sum(int a, int b) {
	return(a + b);
}

double circleArea(double r) {
	return PI * r*r;
}

int max(int a, int b) {
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}
