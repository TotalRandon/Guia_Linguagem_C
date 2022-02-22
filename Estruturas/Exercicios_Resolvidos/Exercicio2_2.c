#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 2) Um apicultor necessita armazenar os dados de 100 colmeias, que são: código,
região, estado, qualificação (forte, médio, fraco), número de abelhas. Após a inserção dos dados,
solicitar ao usuário qual qualificação ele deseja que seja apresentado na tela. Apresentar o código, 
região e o estado. */

#define colmeias 100

struct abeia 
{
    int codigo;
    char regiao[30];
    char estado[2];
    int abelhas;
    char quali[5];
};

void informedados(struct abeia A[colmeias])
{   
    int cont;
    printf("\n========== Informe os dados da colmeia ==========\n");
    for (cont = 0; cont < colmeias; cont ++)
    {
        printf("\n\nDados da colmeia [%d] ", cont);
        printf("\nCódigo da colmeia: ");
        scanf("%d", &A[cont].codigo);
        printf("Região: ");
        scanf("%s", &A[cont].regiao);
        printf("Estado: ");
        scanf("%s", &A[cont].estado);
        printf("Número de abelhas: ");
        scanf("%d", &A[cont].abelhas);
    }        
}

void qualificacoes(struct abeia A[colmeias])
{
    int cont;
    printf("\n========== Qualificações ==========\n");
    for (cont = 0; cont < colmeias; cont++)
    {
        printf("Escolha a qualificação de sua colmeia(fraco, médio ou forte)\n");
        printf("\n\nDados da colmeia [%d] ", cont);
        printf("\n");
        scanf("%s", &A[cont].quali);
        printf("\n");
    }
}

void imprimirdados(struct abeia A[colmeias])
{
    int cont;
    printf("\n========== Lista de dados concluidos ==========\n");
    for (cont = 0; cont < colmeias; cont++)
    {
        printf("\n\nCódigo da colmeia registrada: %d\n", A[cont].codigo);
        printf("Região: %s\n", A[cont].regiao);
        printf("Estado: %s\n", A[cont].estado);
        printf("Qualifição: %s\n", A[cont].quali);
    }
}

struct abeia C[colmeias];
int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("clear");
    //system("cls");
    informedados(C);
    qualificacoes(C);
    system("clear");
    //system("cls");
    imprimirdados(C);


    return 0;
}