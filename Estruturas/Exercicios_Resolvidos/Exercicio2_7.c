#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 7)Tendo um registro contendo Matrícula do Aluno (MA) do aluno, tipo de participação (A, B, C ou D) 
e Sócio da SBC (S – sim ou N – não), desenvolver um programa para calcular o valor que cada aluno vai 
pagar para participar da semana de informática, sabendo-se que:

Tipo de participacao:    Valor a pagar:   

A - 1 curso             R$ 30,00
B - 2 cursos            R$ 60,00
C - 3 cursos            R$ 90,00
D - outros              R$ 100,00

Para os sócios da SBC o valor a pagar terá um desconto de 50%. O programa deverá permitir
a entrada de vários registros (no máximo 200) até que uma condição de finalização seja satisfeita.
Calcular e exibir também o total geral arrecadado com o evento e quantos alunos se matricularam em
cada um dos tipos de participação. */

#define registro 2 //200

struct dados
{
    int MA;
    char tipo_par[1];
    char socio[1];
    float preço;
};

void cadastro_alunos(struct dados A[registro])
{
    int cont;
    printf("\n==================== Registro dos participantes ====================\n");
    for (cont = 0; cont < registro; cont++)
    {

        printf("\nRegistro [%d] \n", cont);
        printf("Número da matrícula: ");
        scanf("%d", &A[cont].MA);
        printf("Tipo A - 1 curso    R$ 30,00\n");
        printf("Tipo B - 2 cursos   R$ 60,00\n");
        printf("Tipo C - 3 cursos   R$ 90,00\n");
        printf("Tipo D - outros     R$ 100,00\n");
        printf("Tipo de participação: ");
        scanf("%s", &A[cont].tipo_par);
        printf("\n\nParticipação do sócio da SBC: (S - sim, N - não): \n");
        scanf("%s", &A[cont].socio);
    }
}

void preço_lista(struct dados A[registro])
{
    int cont;
    printf("\n==================== Lista de participantes ====================\n");
    for (cont = 0; cont < registro; cont++)
    {
        if (A[cont].tipo_par == 'A' || A[cont].tipo_par == 'a')
        {
            A[cont].preço == 30;
            printf("\nRegistro [%d] \n", cont);
            printf("Número da matrícula: %d\n", A[cont].MA);
            printf("Tipo de participação: %s\n", A[cont].tipo_par);
            printf("Valor a ser pago: %.2f\n", A[cont].preço);
        }
        else
        {
            if (A[cont].tipo_par == 'B' || A[cont].tipo_par == 'b')
            {
                A[cont].preço == 60;
                printf("\nRegistro [%d] \n", cont);
                printf("Número da matrícula: %d\n", A[cont].MA);
                printf("Tipo de participação: %s\n", A[cont].tipo_par);
                printf("Valor a ser pago: %.2f\n", A[cont].preço);
            }
            else
            {
                if (A[cont].tipo_par == 'C' || A[cont].tipo_par == 'c')
                {
                    A[cont].preço == 90;
                    printf("\nRegistro [%d] \n", cont);
                    printf("Número da matrícula: %d\n", A[cont].MA);
                    printf("Tipo de participação: %s\n", A[cont].tipo_par);
                    printf("Valor a ser pago: %.2f\n", A[cont].preço);
                }
                else
                {
                    A[cont].preço == 100;
                    printf("\nRegistro [%d] \n", cont);
                    printf("Número da matrícula: %d\n", A[cont].MA);
                    printf("Tipo de participação: %s\n", A[cont].tipo_par);
                    printf("Valor a ser pago: %.2f\n", A[cont].preço);
                }
            }
        }
        if (A[cont].socio == 'S' || A[cont].socio == 's')
        {
            A[cont].preço = A[cont].preço / 2;
            printf("\nRegistro [%d] \n", cont);
            printf("Número da matrícula: %d\n", A[cont].MA);
            printf("Tipo de participação: %s\n", A[cont].tipo_par);
            printf("Valor a ser pago: %.2f\n", A[cont].preço);
        }
        else
        {
            printf("\nRegistro [%d] \n", cont);
            printf("Número da matrícula: %d\n", A[cont].MA);
            printf("Tipo de participação: %s\n", A[cont].tipo_par);
            printf("Valor a ser pago: %.2f\n", A[cont].preço);
        }
    }
}

void lista_cadastro(struct dados A[registro])
{
    int cont;
    printf("\n==================== Lista de participantes ====================\n");
    for (cont = 0; cont < registro; cont++)
    {
        printf("\nRegistro [%d] \n", cont);
        printf("Número da matrícula: %d\n", A[cont].MA);
        printf("Tipo de participação: %s\n", A[cont].tipo_par);
        printf("Valor a ser pago: %.2f\n", A[cont].preço);
    }
}

struct dados B[registro];
int main()
{
    setlocale(LC_ALL, "Portuguese");

    cadastro_alunos(B);
    preço_lista(B);
    //lista_cadastro(B);

    return 0;
}