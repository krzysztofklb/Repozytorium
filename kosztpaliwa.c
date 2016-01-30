#include <stdio.h>

int main() {

float paliwo,trasa,spalanie;
printf ("Podaj cene paliwa");
scanf("%f", &paliwo);

printf ("Podaj spalanie");
scanf ("%f", &spalanie);
printf ("Podaj trase");
scanf("%f", &trasa);
printf("Za paliwo zapłacisz: %.2f zł", (((trasa*spalanie)/100)*paliwo));

printf("Cos tam napisalem.\n");

	return 0;
}
