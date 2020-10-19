#include <stdio.h>
#include <math.h>
main()
{
	int x, y, z;
	printf("x - ");
	scanf_s("%i", &x);
	y = x / 100;
	y = ceil(y);
	z = x - y * 100;
	y = y + 1;
	printf("\n stoletie - %i \n god - %i", y, z);
}

