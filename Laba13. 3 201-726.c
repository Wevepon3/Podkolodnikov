#include <stdio.h>
#include <math.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL,"Rus");
    int n, i, z;
    printf("N - ");
    scanf_s("%i", &n);
    z = 0;
    for (i = 1; i <= (2 * n - 1); i += 2) {
        z += i;
        printf("%i \n ", z);
    }
    return 0;
}
