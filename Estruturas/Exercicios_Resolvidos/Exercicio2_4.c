#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 4) Para uma locadora de vídeo deve-se armazenar os dados de 500 filmes, 
que são: código, título, gênero, categoria e valor da locação. 
Calcular o valor total a ser pago pelo cliente, pedindo ao mesmo a quantidade
de filmes alugados e o(s) respectivo(s) código(s) de cada um deles. */

#define filmes 3//500

struct dados
{
    int codigo;
    char titulo[30];
    char genero[30];
    char categoria[30];
    float val_loca;
};

//dados iniciais
void armazen(struct dados A[filmes])
{
    int cont;
    printf("\n========== Inserir dados dos filmes ==========\n");
    for (cont = 0; cont < filmes; cont++)
    {
        printf("\nDados do filme [%d]", cont);
        printf("\nCódigo do filme: ");
        scanf("%d", &A[cont].codigo);
        printf("Título: ");
        scanf("%s", &A[cont].titulo);
        printf("Gênero: ");
        scanf("%s", &A[cont].genero);
        printf("Categoria: ");
        scanf("%s", &A[cont].categoria);
        printf("Valor da locação: ");
        scanf("%f", &A[cont].val_loca);
    }
}

// função global
int quant;

// dados da compra do cliente
void cliente(struct dados A[filmes])
{
    int cont;
    printf("\nInforme a quantidade de filmes o clienter deseja alugar: ");
    scanf("%d", &quant);
    printf("\n========== Inserir dados dos filmes alugados ==========\n");
    for (cont = 0; cont < quant; cont++)
    {
        printf("\nDados do filme [%d]", cont);
        printf("\nCódigo do filme: ");
        scanf("%d", &A[cont].codigo);
        {
            printf("Título: %s\n", A[cont].titulo);
            printf("Gênero: %s\n", A[cont].genero);
            printf("Categoria: %s\n", A[cont].categoria);
            printf("Valor da locação: %.2f\n\n", A[cont].val_loca);
        }
    }
}

// Valor total da compra do cliente
void listacompra(struct dados A[filmes])
{
    float total;
    int cont;
    printf("\n========== Filmes alugados ==========\n");
    for (cont = 0; cont < quant; cont++)
    {
        printf("\nCódigo do filme: %d\n", A[cont].codigo);
        printf("Título: %s\n", A[cont].titulo);
        printf("Gênero: %s\n", A[cont].genero);
        printf("Categoria: %s\n", A[cont].categoria);
        printf("Valor da locação: %.2f\n\n", A[cont].val_loca);
    }
    total = A->val_loca + A->val_loca; // efetuando a conta errada!
    printf("Valor total da compra = %.2f\n\n", total);
}

struct dados B[filmes];
int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("clear");
    //system("cls");
    armazen(B);
    system("clear");
    //system("cls");
    cliente(B);
    system("clear");
    //system("cls");
    listacompra(B);

    return 0;
}