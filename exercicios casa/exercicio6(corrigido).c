#include <stdio.h>

/* 6) Fazer um programa em C que calcule a área e o perímetro de um quadrado a partir do
tamanho do lado. Lado é dado de entrada e os valores de (área e perímetro) são retornados por funções. */

int calculoPerimetroQuadrado(int P)
{
    int perimetro;
    perimetro = P + P;
    return perimetro;
}

int calculoAreaQuadrado(int A)
{
    int area;
    area = A * A;
    return area;
}

int main()
{
    int lado;
    printf("digite o lado do quadrado:\n");
    scanf("%d", &lado);

    printf("Area do quadrado eh: %d\n", calculoAreaQuadrado(lado));
    printf("Perimetro do quadrado eh: %d\n\n", calculoPerimetroQuadrado(lado));

    return 0;
}