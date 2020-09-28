#include <stdio.h>
main()
{
	float p = 3.14, L, d;
	printf("d = L / p ");
	printf("\nL - ");
	scanf_s("%f", &L);
	d = L / p;
	printf("%f", d);
}