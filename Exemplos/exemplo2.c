#include <stdio.h>

int main(void) //funcao principal.
{
    float calcularAreaRetangulo(float x, float y);

    float area = calcularAreaRetangulo(10.0, 20.0); //chama a funcao//retorna aqui
    printf("\nA area do retangulo eh: %.2f\n\n", area);

    return 0;
}

float calcularAreaRetangulo(float base, float altura) //funcao criada para calcular.
{
    float area = base * altura; //calcula

    return area; //retorna area
}