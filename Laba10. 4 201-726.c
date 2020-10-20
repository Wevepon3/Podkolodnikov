#include <stdio.h>
#include <math.h>
main()
{
	int A, x, y, z;
	printf("A - ");
	scanf_s("%i", &A);
	x = A / 100;
	y = A % 100 / 10;
	z = A % 10;
	if ((x > y) & (y > z))
	{
		printf("Ubuvaet");
	}
	if ((x < y) & (y < z))
	{
		printf("Vozrastaet");
	}
}


