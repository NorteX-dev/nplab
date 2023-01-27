#include <stdio.h>
#include "mniejsza.h"
#include "silnia.h"
#include "binarna.h"
#include "tryg.h"

int main() {
	printf("Minimalna liczba: %lf\n", min(5.0, 6.0));
	printf("Silnia przy uzyciu rekurencji: %f\n", silnia(3));
	printf("Silnia przy uzyciu petli: %f\n", silnia_petla(3));

	int dziesietna = get_input();
	int binarna = binary_of(dziesietna);
	printf("Liczba %d w systemie binarnym to: %d\n", dziesietna, binarna);

	spytaj_i_oblicz_tryg();

	return 0;
}
