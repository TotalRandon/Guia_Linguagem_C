#include <stdio.h>

/* 6) Fazer um programa em C que calcule a área e o perímetro de um quadrado a partir do
tamanho do lado. Lado é dado de entrada e os valores de (área e perímetro) são retornados por funções. */

int calculoPerimetroQuadrado(int P)
{
    int perimetro;
    printf("Perimero do quadrado eh: %d\n", perimetro = P + P);
    return perimetro;
}

int calculoAreaQuadrado(int A)
{
    int area;
    printf("Area do Quadrado eh: %d\n", area = A * A);
    return area;
}

int main()
{
    int lado;
    printf("digite o lado do quadrado:\n");
    scanf("%d", &lado);

    calculoAreaQuadrado(lado);
    calculoPerimetroQuadrado(lado);

    return 0;
}