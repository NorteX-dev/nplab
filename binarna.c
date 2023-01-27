#include <stdio.h>
#include "binarna.h"

int get_input() {
	int x;
	printf("Podaj liczbe dziesietna do przekonwertowania na binarna:\n");
	scanf("%d", &x);
	if(x < 0) {
		printf("Liczba musi byc dodatnia.\n");
		return get_input();
	}
	return x;
}

int binary_of(int x) {
	int binarna = 0;
	int reszta;
	int i = 1;
	while (x != 0) {
		reszta = x % 2; // zwraca 1 albo 0
		x /= 2;
		binarna += reszta * i;
		i *= 10;
	}
	return binarna;
}