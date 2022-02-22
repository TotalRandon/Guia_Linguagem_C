#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1) Faça um programa para um concurso de beleza precisa-se armazenar os dados das 30 candidatas,
que são: número da inscrição, nome, altura, peso, naturalidade e estado. Depois de cadastrar, apresentar
somente o nome das candidatas que possuem altura acima de 1.85 e do estado de SP. */

#define candidatos 30

struct inscricao
{
    int n_inscricao;
    char nome[30];
    float altura;
    float peso;
    char naturalidade[30];
    char estado[2];
};

void participantes(struct inscricao A[candidatos])
{
    int cont;
    printf("===== Inscrição dos candidatos: =====\n\n");
    for (cont = 0; cont < candidatos; cont++)
    {
        printf("Candidato [%d] \n", cont);
        printf("Número de inscrição: ");
        scanf("%d", &A[cont].n_inscricao);
        printf("Nome completo: ");
        scanf("%s", &A[cont].nome);
        printf("Altura: ");
        scanf("%f", &A[cont].altura);
        printf("Peso: ");
        scanf("%f", &A[cont].peso);
        printf("Naturalidade: ");
        scanf("%s", &A[cont].naturalidade);
        printf("Estado: ");
        scanf("%s", &A[cont].estado);
        printf("\n");
    }
}

void candidatosaprovados(struct inscricao A[candidatos], char tipo)
{
    int cont;
    printf("======== Lista de Candidatos ========\n\n");
    if (tipo == 'M')
    {
        printf("======== Candidatos aprovados ========\n\n");
    }
    for (cont = 0; cont < candidatos; cont++)
    {
        if (tipo == 'T' || (tipo == 'M' && A[cont].altura >= 1.85) || (tipo == 'M' && A[cont].estado == 'SP'))
        {
            printf("Candidato [%d] \n", cont);
            printf("Número de inscrição: %d\n", A[cont].n_inscricao);
            printf("Nome completo: %s\n", A[cont].nome);
            printf("Altura: %.2f\n", A[cont].altura);
            printf("Peso: %.2f\n", A[cont].peso);
            printf("Naturalidade: %s\n", A[cont].naturalidade);
            printf("Estado: %s\n", A[cont].estado);
            printf("\n\n===================================\n\n");
        }
    }
}

struct inscricao coisa[candidatos];
int main()
{
    setlocale(LC_ALL, "portuguese");

    //system("cls");
    system("clear");
    participantes(coisa);
    //system("cls");
    system("clear");
    candidatosaprovados(coisa, 'T');
    candidatosaprovados(coisa, 'M');

    return 0;
}