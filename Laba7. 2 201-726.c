#include<stdio.h>
#include<math.h>
 main()
{
    int a;
    float pi, r;
    pi = 3.14;
    printf("Ugol a, 0<a<3.14\n a = ");
    scanf_s("%i", &a);
    r = 180 * a / pi;
    printf("Ugol v radianah = %.2f\n", r);
 }