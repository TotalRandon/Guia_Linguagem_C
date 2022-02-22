#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 5) Cadastrar 10 estruturas a seguir: o horário de partida de vôos, 
com os dados: código, horário de partida, quantidade de passageiros, valor da passagem, origem e destino.
Solicitar ao usuário a origem e mostrar todos os dados dos vôos que possuem esta origem.
Mostrar, também, todos os vôos que possuem horário de partida pela manhã. */

#define viagem 2//10

struct aircompany
{
    int code;
    int inicio_voo;
    int quant_passag;
    float preco;
    char origem[20];
    char destino[20];
};

void infovoos(struct aircompany A[viagem])
{

    int cont;
    printf("\n========== Infomações de viagem ==========\n");
    for (cont = 0; cont < viagem; cont++)
    {
        A[cont].inicio_voo >= 0 && A[cont].inicio_voo <= 23;

        printf("\nCódigo do voo: ");
        scanf("%d", &A[cont].code);
        printf("Horário de partida (Digite em numero inteiro): ");
        scanf("%d", &A[cont].inicio_voo);
        printf("Quantos passageiros: ");
        scanf("%d", &A[cont].quant_passag);
        printf("Preço da passagem: ");
        scanf("%f", &A[cont].preco);
        printf("Origem: ");
        scanf("%s", &A[cont].origem);
        printf("Destino: ");
        scanf("%s", &A[cont].destino);
    }
}

void passageiro(struct aircompany A[viagem])
{
    int cont;
    printf("\n========== Cadastro de Viagens ==========\n");
    for (cont = 0; cont < viagem; cont++)
    {
        printf("Informe a origem da viagem: ");
        scanf("%s", &A[cont].origem);
        {
            printf("\nCódigo do voo: \n", A[cont].code);
            printf("Horário de partida (Digite em numero inteiro): \n", A[cont].inicio_voo);
            printf("Quantos passageiros: \n", A[cont].quant_passag);
            printf("Preço da passagem: \n", A[cont].preco);
            printf("Origem: \n", A[cont].origem);
            printf("Destino: \n", A[cont].destino);
        }
    }
}

void horamanha(struct aircompany A[viagem])
{
    int cont;
    printf("\n========== Horários disponíveis (Manhã) ==========\n");
    for (cont = 0; cont < viagem; cont++)
    {
        if (A[cont].inicio_voo >= 6 || A[cont].inicio_voo <= 12)
        {
            printf("\nCódigo do voo: \n", A[cont].code);
            printf("Horário de partida (Digite em numero inteiro): \n", A[cont].inicio_voo);
            printf("Quantos passageiros: \n", A[cont].quant_passag);
            printf("Preço da passagem: \n", A[cont].preco);
            printf("Origem: \n", A[cont].origem);
            printf("Destino: \n", A[cont].destino);
        }
    }
}

struct aircompany B[viagem];
int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("clear");
    //system("cls");
    infovoos(B);
    system("clear");
    //system("cls");
    passageiro(B);
    system("clear");
    //system("cls");
    horamanha(B);

    return 0;
}