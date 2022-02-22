#include <stdio.h>

/* 12) Escrever uma função void estacao(int dia, int mes), que exibe no vídeo qual
a estação do ano da data passada por parâmetro. Lembrando que a 
primavera começa no dia 23 de setembro;
o verão em 21 de dezembro; 
o outono em 21 de março;
o inverno em 21 de junho;

estacao(25,10); /* 25/10 é primavera. 
estacao(29,12); /* 29/12 é verão. */

void estacao(int dia, int mes)
{
    if (mes == 10 || mes == 11 || (mes == 9 && dia >= 23 || (mes == 12 && dia < 21)))
    {
        printf("(%d/%d) é primavera.\n", dia, mes);
    }
    else
    {
        if ( mes == 1 || mes == 2 || (mes == 12 && dia >= 21 || (mes == 3 && dia < 21)))
        {
            printf("(%d/%d) é verão.\n", dia, mes);
        }
        else
        {
            if ( mes == 4 || mes == 5 || (mes == 3 && dia >= 21 || (mes == 6 && dia < 21)))
            {
                printf("(%d/%d) é outono.\n", dia, mes);
            }
            else
            {
                printf("(%d/%d) é inverno.\n", dia, mes);
            }
        }
    }
}

int main()
{
    int num1, num2;
    printf("Digite um dia e um mes:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    estacao(num1, num2);

    return 0;
}