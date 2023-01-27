#include <stdio.h>
#include <math.h>
#include "tryg.h"

void spytaj_i_oblicz_tryg() {
	double stopnie;
	printf("Podaj kat w stopniach:\n");
	scanf("%lf", &stopnie);

	double radiany = (stopnie * M_PI) / 180;
	printf("Sinus: %lf\n", sin(radiany));
	printf("Cosinus: %lf\n", cos(radiany));
	printf("Tangens: %lf\n", tan(radiany));
}
