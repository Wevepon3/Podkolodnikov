
#include<stdio.h>
#include<math.h>
 main()
{
    int A, B;
    float x;
    printf("A*x + B = 0\n");
    printf("koef A = ");
    scanf_s("%d", &A);
    printf("koef B = ");
    scanf_s("%d", &B);
    printf("%d*x + %d = 0\n", A, B);
    x = -B / A;
    printf("x = %.2f", x);
}