#include <stdio.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "Rus");
    int N, i, is, js, j;
    int s[10];
    printf("N = ");
    scanf_s("%d", &N);

    for (i = 1; i <= N; i++)
    {
        printf("s[%d] = ", i);
        scanf_s("%d", &s[i]);
    }

    for (i = 1; i <= N - 1; i++)
    {
        for (j = i + 1; j <= N; j++)
        {
            if (s[i] == s[j])
                is = i;
            js = j;
        }
    }
    if (is > js)
    {
        printf("1-ый номер= %d, 2-ой номер = %d", js, is);
    }
    if (is < js)
    {
        printf("1-ый номер= %d, 2-ой номер = %d", is, js);
    }
    return 0;
}
