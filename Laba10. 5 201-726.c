#include <stdio.h>
#include <math.h>
main()
{
	int A, x, y, z, g;
	printf("A - ");
	scanf_s("%d", &A);
	x = A / 1000;
	y = A % 100 / 10;
	z = A / 100 % 10;
	g = A % 10;
	while ((x = g) % (y = z))
	{
		printf("Chislo odinakovo sleva na pravo");
		return 0;
	}
}
