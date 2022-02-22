#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 1 - Faça um programa que armazene dados de 2 alunos com os respectivos campos: 
número da matrícula, nome, nota da prova1, nota da prova2 e média final. 
O professor entrará com os dados a serem armazenados exceto a média que será calculada 
e armazenada pelo programa. Sabendo que a média final é 7, imprima no final somente os 
alunos que passaram de ano. */

#define MAX 2

struct Aluno
{
    int nmat;
    char nome[30];
    int nota1;
    int nota2;
    float media_final;
};

void cadastro_alunos(struct Aluno L[MAX])
{
    int i;
    printf("\n======Cadastro de Alunos======\n");
    for (i = 0; i < MAX; i++)
    {
        printf("Número da matrícula do aluno [%d]: ", i);
        scanf("%d", &L[i].nmat);
        printf("Nome: ");
        scanf("%s", L[i].nome);
        printf("Nota 1: ");
        scanf("%d", &L[i].nota1);
        printf("Nota 2: ");
        scanf("%d", &L[i].nota2);
        printf("Média final: ");
        scanf("%f", &L[i].media_final);
        printf("===============================\n");
    }
}

void Imprime_aprovados(struct Aluno L[MAX], char tipoimp)
{
    int i;

    printf("\nImpressão de alunos: \n");
    if (tipoimp == 'M')
    {
        printf("\nImpressão de Alunos Aprovados\n");
    }
    else
    for (i = 0; i < MAX; i++)
    {
        if (tipoimp == 'T' || (tipoimp == 'M' && L[i].media_final >= 7))
        {
            printf("Número da matrícula do aluno [%d]: \n", i);
            printf("Número da matricula: %d\n", L[i].nmat);
            printf("Nome: %s\n", L[i].nome);
            printf("Nota 1: %d\n", L[i].nota1);
            printf("Nota 2: %d\n", L[i].nota2);
            printf("Média final: %f\n", L[i].media_final);
            printf("===============================\n");
        }
    }
}

struct Aluno Lista_Alunos[MAX];
int main()
{
    setlocale(LC_ALL, "Portuguese");

    //system("cls");
    system("clear");
    cadastro_alunos(Lista_Alunos);
    //system("cls");
    system("clear");
    Imprime_aprovados(Lista_Alunos, 'M');
    Imprime_aprovados(Lista_Alunos, 'T');

    return 0;
}