#include <stdio.h>

int condicaoN(float x)
{
    if (x >= 1 && x <= 2147483647)
    {
        return x;
    }
    else
    {
        return 0;
    }
}

int condicaoV(float y)
{
    if (y >= 1 && y <= 2147483647)
    {
        return y;
    }
    else
    {
        return 0;
    }
}

int main()
{
    float n, v;
    char i = '%';
    float p;
    scanf("%f %f", &n, &v);
    n = condicaoN(n);
    v = condicaoV(v);
    p = ((100 * v) / n);
    printf("%.2f", p);
    printf("%c\n", i);
    return 0;
}