#include <stdio.h>

/* 5) Faça um programa que receba 2 notas de um aluno e calcule a média aritmética
esse aluno através de uma função que retorne este resultado. 
Seu programa deverá ter uma outra função que retorne o conceito do aluno, conforme a tabela abaixo:
Nota
Conceito
De 0,0 a 4,9    D
De 5,0 a 6,9    C
De 7,0 a 8,9    B
De 9,0 a 10     A */

float conceito(float x1)
{
    if (x1 >= 0 && x1 <= 4.9)
    {
        printf("Nota D\n\n");
    }
    else
    {
        if (x1 >= 5.0 && x1 <= 6.9)
        {
            printf("Nota C\n\n");
        }
        else
        {
            if (x1 >= 7.0 && x1 <= 8.9)
            {
                printf("Nota B\n\n");
            }
            else
            {
                printf("Nota A\n\n");
            }
        }
    }
    return x1;
}

float notafinal(float x, float y)
{
    float media;
    media = (x + y) / 2;
    printf("media: %.2f\n", media);

    conceito(media);

    return media;
}

int main(void)
{
    float nota1, nota2;
    printf("Digite as notas do aluno:\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);

    notafinal(nota1, nota2);

    return 0;
}