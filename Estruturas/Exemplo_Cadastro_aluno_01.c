#include <stdio.h>
#include <locale.h>

#define MAX 2

struct aluno
{
    char nome[20];
    int idade;
    int ano_aniversario;
    float media_geral;
};


void Ler_Estrutura(struct aluno L[MAX])
{
    int Cont;
        
    printf("\n***** Cadastro de Alunos ****\n");
    for (Cont=0;Cont<MAX;Cont++)
    {
        printf("\nDados do aluno [%d]: ", Cont);
        printf("\nNome: ");
        scanf("%s",L[Cont].nome);
        printf("Idade: ");
        scanf("%d",&L[Cont].idade);
        printf("Ano aniversário: ");
        scanf("%d",&L[Cont].ano_aniversario);
        printf("Média geral: ");
        scanf("%f",&L[Cont].media_geral);
    }        
}

void Imprimir_Estrutura(struct aluno L[MAX])
{
    int Cont;
    
    printf("\n***** Impressão de Alunos ****\n");
    for (Cont=0;Cont<MAX;Cont++)
    {
        printf("\n\nDados do aluno [%d]: ", Cont);
        printf("\nNome: %s", L[Cont].nome);
        printf("\nIdade: %d", L[Cont].idade);
        printf("\nAno aniversário: %d", L[Cont].ano_aniversario);
        printf("\nMédia geral: %f", L[Cont].media_geral);
    }            
}

/* Leitura e impressão de estruturas
Ler_Estrutura(Lista_Alunos)
Imprimir_Estrutura(Lista_Alunos)
*/

struct aluno Lista_Alunos[MAX];
int main ()
{
    setlocale(LC_ALL, "Portuguese");
    
    //system("cls");
    system("clear");
    Ler_Estrutura(Lista_Alunos);  
    //system("cls");
    system("clear");  
    Imprimir_Estrutura(Lista_Alunos);    

    return 0;
}