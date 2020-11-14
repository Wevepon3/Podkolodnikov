#include<stdio.h>
#include<math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int K, c, n;
    printf("K = ");
    scanf_s("%d", &K);
    c = K / 7;
    c = floor(c);
    n = K - 7 * c;
    if (n == 0)
    {
        printf("День недели 0 - воскресенье");
    }
    if (n == 1)
    {
        printf("День недели 1 - понедельник");
    }
    if (n == 2)
    {
        printf("День недели 2 - вторник");
    }
    if (n == 3)
    {
        printf("День недели 3 - среда");
    }
    if (n == 4)
    {
        printf("День недели 4 - четверг");
    }
    if (n == 5)
    {
        printf("День недели 5 - пятница");
    }
    if (n == 6)
    {
        printf("День недели 6 - суббота");
    }
    return 0;
}
