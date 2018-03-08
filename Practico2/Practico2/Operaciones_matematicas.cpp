#include "Operaciones_matematicas.h"
#define PI 3.1415926

int square(int a) {
	return a * a;
}

int sum(int a, int b) {
	return(a + b);
}

double circleArea(double r) {
	return PI * r^2;
}

int max(int a, int b) {
	if (a >= b) {
		return a;
	}
	else {
		return b;
	}
}
