#include <stdio.h>

/* 8) Crie um programa que apresente um menu de seleções no programa principal 
(função main) permitindo o usuário escolher uma das quatro operações aritméticas. 
Em seguida, solicite os dois operandos, calcule e exiba o resultado da operação 
escolhida para dois valores informados.
Exemplo de tela:

======================
| escolha uma opcao: |
| 1 - somar          |
| 2 - subtrair       |
| 3 - multiplicar    |
| 4 - dividir        |
====================== */

float somar(float a1, float a2)
{
    return a1 + a2;
}

float subtrair(float b1, float b2)
{
    return b1 - b2;
}

float multiplicar(float c1, float c2)
{
    return c1 * c2;
}

float divisao(float d1, float d2)
{
    return d1 / d2;
}

int main()
{
    float num1, num2, result;
    int x;
    printf("digite dois operandos: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    printf("escolha uma opcao: \n");
    printf("1 - somar\n");
    printf("2 - subtrair\n");
    printf("3 - multiplicar\n");
    printf("4 - dividir\n\n");
    scanf("%d", &x);
    switch (x)
    {
    case 1:
        result = somar(num1, num2);
        break;
    case 2:
        result = subtrair(num1, num2);
        break;
    case 3:
        result = multiplicar(num1, num2);
        break;
    case 4:
        result = divisao(num1, num2);
        break;
    default:
        result = printf("codigo invalido!\n");
        break;
    }
    printf("\nresultado da operacao eh: %.2f\n", result);    
    return 0;
}