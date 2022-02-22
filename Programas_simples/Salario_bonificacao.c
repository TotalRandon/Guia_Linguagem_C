#include <stdio.h>

void main () 
{
    float salario;
    printf("Qual e o salario: ");
    scanf("%f", &salario);
    if (salario <= 3000)
    {
        salario = salario * 1.2;
    }
    else 
    {
        salario = salario * 1.1;
    }
    printf("Novo salario: %.2f", salario);
    printf("\n");
}