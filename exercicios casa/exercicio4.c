#include <stdio.h>

/* 4) Faça uma função que recebe a idade de um nadador por parâmetro e imprima 
a categoria desse nadador de acordo com a tabela abaixo:


Idade                           Categoria
5 a 7 anos                      Infantil  A
8 a 10 anos                     Infantil  B
11 a 13 anos                    Juvenil   A
14 a 17 anos                    Juvenil   B
Maiores de 18 anos (inclusive)  Adulto

A função deve ter o seguinte protótipo: void nadador(int idade) */

void nadador(int idade)
{
    if (idade >= 5 && idade <= 7)
    {
        printf("Categoria Infantil A\n");
    }
    else
    {
        if (idade >= 8 && idade <= 10)
        {
            printf("Categoria Infantil B\n");
        }
        else
        {
            if (idade >= 11 && idade <= 13)
            {
                printf("Categoria Juvenil A\n");
            }
            else
            {
                if (idade >= 14 && idade <= 17)
                {
                    printf("Categoria Juvenil B\n");
                }
                else
                {
                    if (idade >= 18)
                    {
                        printf("Categoria Adulto\n");
                    }
                    else
                    {
                        printf("Idade invalida!\n");
                    }
                }
            }
        }
    }
}

main(void)
{
    int num1;
    printf("\nQual a idade do nadador ?\n");
    printf("Recomendado nadadores a partir de 5 anos.\n");
    scanf("%d", &num1);

    nadador(num1);

    return 0;
}