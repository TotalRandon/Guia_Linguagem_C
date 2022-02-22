#include <stdio.h>

/* 2) Faça uma função que receba um valor e se este estiver entre 0 e 10,
inclusive os dois extremos, retornará 0, caso contrário, retornará 1. */

int comparador(int x)
{
    if (x >= 10 || x <= 0)
    {
        printf("numero invalido!\n");
        return 0;
    }
    else
    {
        return 1;
    }
    return 0;
}

int main()
{
    int num1;
    printf("\nDigite um numero entre 0 a 10: ");
    scanf("%d", &num1);

    printf("return %d\n\n", comparador(num1));

    return 0;
}