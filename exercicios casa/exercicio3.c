#include <stdio.h>

/* 3) Escreva um programa em C que possua uma função que recebe a idade de uma pessoa em anos,
meses e dias e retorna essa idade expressa em dias. Considerar que o ano tenha 360 dias e o mês 30 dias. */

int retornodia(int x, int y,int z)
{
    printf("sua idade em dias: %d\n", x = x + y + z);
    return x;
}

int main ()
{
    int ano, mes, dia;
    int total;
    printf("\nDigite a idade expreesa em anos, meses e dias: \n");
    scanf("%d", &ano);
    scanf("%d", &mes);
    scanf("%d", &dia);
    ano = ano * 360;
    mes = mes * 30;
    dia = dia * 1;
    
    retornodia(ano, mes, dia);
    
    return 0;
}