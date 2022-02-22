#include <stdio.h>

/* 11) Faça um programa receba dois números e execute as seguintes funções:
• Verificar se o número digitado é positivo ou negativo. Sendo que o valor de
retorno será 1 se positivo, 0 se negativo ou -1 se for igual a 0. Obedeça ao protótipo da função:
int verifica(int num)
• Receber dois números inteiros positivos por parâmetro e retorne
a soma dos N números inteiros existentes entre eles.

int soma_entre(int num1, int num2) */


int soma_entre(int num1, int num2)
{
    int total;
    total = num1 + num2;
    return total; 
}

int verifica(int num)
{
    if (num > 0)
    {
        printf("eh positivo!\n");
        return 1;
    }
    else
    {
        if (num < 0)
        {
            printf("eh negativo!\n");
            return 0;
        }
        else
        {
            printf("eh igual a 0\n");
            return -1;
        }
    }
    return num;
}

int main()
{
    int x, y;
    printf("digite 2 numeros inteiros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    verifica(x);
    verifica(y);

    printf("\n%d\n", soma_entre(x,y));

    return 0;
}