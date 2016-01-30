#include <stdio.h>

int main() {

float paliwo,trasa,spalanie;
paliwo=3.77;
spalanie=6.2;
trasa=45.7;
printf("Za paliwo zapłacisz: %.2f zł", (((trasa*spalanie)/100)*paliwo));

printf("Cos tam napisalem.\n");

	return 0;
}
