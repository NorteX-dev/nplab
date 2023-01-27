#include "silnia.h"

float silnia(float x) {
	if (x == 0) return 1;
	return x * silnia(x - 1);
}

float wynik = 1;
float silnia_petla(float x) {
	int i;
	for (i = 1; i <= x; i++) {
		wynik *= i;
	}
	return wynik;
}
