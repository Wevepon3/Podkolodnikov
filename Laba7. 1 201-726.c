#include<stdio.h>
#include<math.h>
 main()
{
    int a;
    float pi, r;
    pi = 3.14;
    printf("Ugol a, 0<a<360\n a = ");
    scanf_s("%i", &a);
    r = pi * a / 180;
    printf("Ugol v radianah = %.2f\n", r);
 }