#include <stdio.h>

/* 1) Fazer um programa em C, contendo uma função que receba uma temperatura dada em graus 
Fahrenheit e retorne a temperatura convertida para graus Celsius. C = ((F-32)*5)/9. */

int conversor(int x)
{
    int c;
    c = ((x-32)*5)/9;

    return c;
}


int main ()
{
    int fah;
    int res;
    printf("\nDigite graus Fahrenheit: ");
    scanf("%d", &fah);

    printf("graus celsos: %d\n",conversor(fah));

    return 0;
}