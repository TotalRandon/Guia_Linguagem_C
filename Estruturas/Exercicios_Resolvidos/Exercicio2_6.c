#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* 6) Cadastrar 20 estruturas com o nome do município, seu estado e sua população.
Mostrar todos os municípios cadastrados do estado de Paraná (PR) e os dados do município
que contém a maior população. */

#define maximo 3//20

struct municipios
{
    char municipio[30];
    int populacao;
};

void cadastro_municipios(struct municipios A[maximo])
{
    int cont;
    printf("\n==================== Informações do estado de Parana (PR) ====================\n");
    printf("Informe os 20 primeiros municipios e seus respectivos númeross populacionais.\n");
    for (cont = 0; cont < maximo; cont++)
    {

        printf("\nMunicipio [%d] : ", cont);
        scanf("%s", &A[cont].municipio);
        printf("População: ");
        scanf("%d", &A[cont].populacao);
    }
}

void mostra_municipio(struct municipios A[maximo])
{
    int cont;
    printf("\n==================== Todos os municipios cadastrados de (PR) ====================\n");
    for (cont = 0; cont < maximo; cont++)
    {
        printf("\nMunicipio [%d] %s: ", cont, A[cont].municipio);
        printf("População: %d", A[cont].populacao);
    }
}

void maiormunicipio(struct municipios A[maximo])
{
    int cont;
    printf("\n\n==================== Municipio Mais populoso ====================\n");
    for (cont = 0; cont < maximo; cont++)
    {
        if (A[cont].populacao > A[cont].populacao)
        {
            printf("\nMunicipio [%d] %s: ", cont, A[cont].municipio);
            printf("População: %d\n", A[cont].populacao);
        }
        else
        {
            printf("\npassou aqui!\n");
        }
    }
}

struct municipios B[maximo];
int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("clear");
    //system("cls");
    cadastro_municipios(B);
    system("clear");
    //system("cls");
    mostra_municipio(B);
    maiormunicipio(B);

    return 0;
}

/* 
20 Primeios municipios de (PR):

1 - curituba = 1.948.628
2 - Londrina = 575 377
3 - Maringá = 430.157
4 - Ponta Grossa = 355.336
5 - Cascavel = 332.333
6 - Sao Jose dos Pinhais = 329.058
7 - Foz do Iguaçu = 258.248
8 - Colombo = 246.540
9 - Guarapuava = 182.664
10 - Parananguá = 156.174
11 - Araucária = 146.214
12 - Toledo = 142.645
13 - Apucarana = 136.234
14 - Campo largo = 133.865
15 - Pinhais = 133.490
16 - Arapongas = 124.810
17 - Almirante Tamandaré = 120.041
18 - Piraquara = 114.970
19 - Umuarama = 112.500
20 - Cambé = 107.004 

*/