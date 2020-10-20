#include<stdio.h>
#include<math.h>
main()
{
	int A, x, y, z;
	printf("A - ");
	scanf_s("%i", &A);
	x = A / 100;
	y = A / 10;
	z = A % 2;
	while (y == 0)
	{
		printf("Chislo odnoznachnoe");
        return 0;
	}
    while ((y > 0) && (x < 0))
    {
        printf("Chislo dvuanachnoe\n");
        return 0;
    }
    while (x != 0)
    {
        printf("Chislo trehznacnoe\n");
        return 0;
    }
    while (z == 0)
    {
        printf("Chetnoe\n");
        return 0;
    }
    while (z == 1)
    {
        printf("Ne chetnoe\n");
        return 0;
    }
}