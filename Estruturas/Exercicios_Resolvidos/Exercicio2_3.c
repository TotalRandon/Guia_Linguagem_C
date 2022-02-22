#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 3) Um comerciante deseja armazenar os dados de 50 produtos, 
que são: código, descrição, quantidade em estoque, quantidade mínima, preço;
Fazer uma listagem (descrição, quantidade em estoque e quantidade mínima) 
que mostre os produtos que estão com o estoque abaixo da quantidade mínima. */

#define produto 30

struct dados
{
    int codigo;
    char descricao[30];
    int quant_estoque;
    int quant_min;
    float preco;
};

void inserirdados(struct dados A[produto])
{
    int cont;
    printf("\n========== Inserir dados: ==========\n");
    for (cont = 0; cont < produto; cont++)
    {
        printf("\nDados do produto [%d]", cont);
        printf("\nCódigo do produto: ");
        scanf("%d", &A[cont].codigo);
        printf("Descrição: ");
        scanf("%s", &A[cont].descricao);
        printf("Quantidade em estoque: ");
        scanf("%d", &A[cont].quant_estoque);
        printf("Quantidade mínima desejada sob estoque: ");
        scanf("%d", &A[cont].quant_min);
        printf("Preço do produto: ");
        scanf("%f", &A[cont].preco);
    }
}

void listagem(struct dados A[produto])
{
    int falta;
    int cont;
    printf("\n========== Lista dos dados: ==========\n");
    for (cont = 0; cont < produto; cont++)
    {
        if (A[cont].quant_estoque < A[cont].quant_min)
        {
            falta = A[cont].quant_estoque - A[cont].quant_min;
            printf("\nEste produto está em quantidades abaixo da minima de estoque!\n\n");
            printf("Descrição: %s\n", A[cont].descricao);
            printf("Quantidade em estoque: %d\n", A[cont].quant_estoque);
            printf("Quantidade mínima desejada sob estoque: %d\n", A[cont].quant_min);
            printf("Situação: Este produtos está %d da quantidade mínima!\n", falta);
            printf("\n======================================\n");
        }
        else
        {
            printf("\nDescrição: %s\n", A[cont].descricao);
            printf("Quantidade em estoque: %d\n", A[cont].quant_estoque);
            printf("Quantidade mínima desejada sob estoque: %d\n", A[cont].quant_min);
            printf("Situação: Este produto está adequando aos níveis de estoque.\n");
            printf("\n======================================\n");
        }
    }
}

struct dados B[produto];
int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("clear");
    //system("cls");
    inserirdados(B);
    system("clear");
    //system("cls");
    listagem(B);

    return 0;
}