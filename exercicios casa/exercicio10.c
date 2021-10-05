#include <stdio.h>

/* 10) Crie um programa que leia três números. Para cada número, imprima o dobro.
Use uma função que recebe como parâmetro um número inteiro e devolve o seu dobro.
O valor calculado deve ser impresso na função principal. */


int dobrador(int x)
{
    x = x * 2;
    return x;
}

int main()
{
    int num1, num2, num3;
    int total1, total2, total3;
    printf("Digite 3 numeros para dobrar seu valor:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);

    total1 = dobrador(num1);
    total2 = dobrador(num2);
    total3 = dobrador(num3);
    printf("\n%d\n%d\n%d\n", total1, total2, total3);

    return 0;
}