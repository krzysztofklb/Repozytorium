#include <stdio.h>

int main() {

float paliwo,trasa,spalanie;
printf ("Podaj cene paliwa");
scanf(paliwo);

printf ("Podaj spalanie");
scanf (spalanie);
printf ("Podaj trase");
scanf(trasa);
printf("Za paliwo zapłacisz: %.2f zł", (((trasa*spalanie)/100)*paliwo));
	return 0;
}
