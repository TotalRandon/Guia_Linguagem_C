#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* 9) Faça as seguintes funções:
• uma função para exibir o menu, permitir que o usuário escolha e devolver o número da opção escolhida,
• quatro funções para representar as quatro operações aritméticas. Cada uma deverá receber os dois números 
(operandos) e devolver o resultado da operação. No programa principal, exiba o resultado.

Obs.: use o comando switch, no programa principal, para classificar a opção escolhida. */

int menu()
{
    //sistema executavel unix = system("clear");
    //sistema executavel windows = system("cls");

    char enter;
    printf("=============================\n");
    printf("|                           |\n");
    printf("|     Bem                   |\n");
    printf("|                           |\n");
    printf("=============================\n");
    sleep(1);
    //system("cls");
    system("clear");
    printf("=============================\n");
    printf("|                           |\n");
    printf("|     Bem vindo             |\n");
    printf("|                           |\n");
    printf("=============================\n");
    sleep(1);
    //system("cls");
    system("clear");
    printf("=============================\n");
    printf("|                           |\n");
    printf("|     Bem vindo ao          |\n");
    printf("|                           |\n");
    printf("=============================\n");
    sleep(1);
    //system("cls");
    system("clear");
    printf("=============================\n");
    printf("|                           |\n");
    printf("|     Bem vindo ao menu!    |\n");
    printf("|                           |\n");
    printf("=============================\n");
    sleep(1);
    printf("pressione enter para iniciar...");
    scanf("%c", &enter);
}

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
    menu();
    float num1, num2, result;
    int x;
    printf("digite dois operandos: \n\n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    while (1)
    {
        printf("\nescolha uma opcao: \n");
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
            result = printf("codigo invalido, fechando o programa...\n");
            return 0;
            break;
        }
        printf("\nresultado da operacao eh: %.2f\n", result);
    }
    return 1;
}