#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 3 - Elabore um programa que possua 10 registros c/ os seguintes campos: 
nome da mercadoria, preço unitário, quantidade comprada e preço total da compra. 
O preço total da compra será calculado pelo programa e o restante dos campos 
o usuário é que irá digitar. Imprima no final o total da compra, ou seja, 
o preço final das 10 mercadorias adquiridas. */

#define Registro 2

struct produtos
{
    char mercadoria[30];
    float preço_unit;
    int quant_comp;
    float Total_comp;
};


void cadatro(struct produtos P[Registro])
{
    int cont;
    printf("\n========== Cadastro dos produtos: ==========\n");
    for (cont = 0; cont < Registro; cont++)
    {
        printf("\n Nome da mercadoria: ");
        scanf("%s",P[cont].mercadoria);
        printf("\n Preço unitario do produto: ");
        scanf("%f", &P[cont].preço_unit);
        printf("\n Informe a quantidade: ");
        scanf("%d", &P[cont].quant_comp);
    }
}

void totalpreçomercadoria(struct produtos P[Registro])
{
    P->Total_comp = P->preço_unit * P->quant_comp;
    printf("\n========== Preço dos produtos: ==========\n");
    printf("Preço total das mercadorias: %.2f\n\n", P->Total_comp);
}


struct produtos Mercado[Registro];
int main()
{
    setlocale(LC_ALL, "portuguese");

    //system("cls");
    system("clear");
    cadatro(Mercado);
    //system("cls");
    system("clear");
    totalpreçomercadoria(Mercado);

    return 0;
}