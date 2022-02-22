#include <stdio.h>

/* 7) Escreva uma função chamada METADE que divida um valor do tipo real 
(passado como parâmetro) pela metade. A função deve retornar essa metade. 
Na função principal, leia 2 números reais e, usando a função METADE, imprima 
a metade de cada um deles. */

float metade(float a)
{
    a = a/2;
    return a;
}

int main()
{
    float num1, num2, r1, r2;
    printf("Digite 2 numeros e aparecera a medade deles:\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    
    r1 = metade(num1);
    r2 = metade(num2);

    printf("\n%.2f\n%.2f\n", r1, r2);

    return 0;
}