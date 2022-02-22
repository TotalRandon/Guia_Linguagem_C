#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
/* Fazer um programa para simular uma agenda de telefones. Para cada pessoa deve-se ter os seguintes dados:

    - Nome;
    - E-mail;
    - Endereço (Rua, Número, CEP e Bairro);
    - Telefone;
    - Cidade;
    - Estado (2 caracteres, exemplo "SP");
    - Idade;
    - Observações.

    1 - Definir a estrutura acima;

    2 - Declarar a variável agenda (vetor) com capacidade de agendar até 8 pessoas e fazer o procedimento de
    leitura das pessoas;

    3 -Definir uma função que busque as pessoas nascidas em uma cidade fornecida pelo usuário e menores de 12 anos
    Imprimir os dados das pessoas encontradas;

    4 - Definir uma função que encontre a pessoa mais nova da agenda. Imprimir os dados da pessoa;

    5 - Definir uma função de impressão de toda agenda com 2 opções:
        Imprimir nome, endereço, cidade e estado;
        Imprimir todos os dados.

    6 - Definir uma função que imprima todas as pessoas menores de 18 anos;

    7 - Implementar um menu para executar as opções acima.
 */

#define agenda 3 //8

struct dados
{
    char nome[30];
    char email[30];
    int tele;

    char endereço[30];
    char bairro[30];
    int numero_casa;
    int cep;

    char cidade[30];
    char estado[2];
    int idade;
    char obs[100];
};

//Leitura do cadastros dos contatos
void ler_contatos(struct dados A[agenda])
{
    int cont;
    printf("\n========== Cadastro dos contatos: ==========\n");
    for (cont = 0; cont < agenda; cont++)
    {
        printf("Dados do cadastro [%d] \n", cont);
        printf("Nome: ");
        scanf("%s", &A[cont].nome);
        printf("Idade: ");
        scanf("%d", &A[cont].idade);
        printf("E-mail: ");
        scanf("%s", &A[cont].email);
        printf("Telefone: ");
        scanf("%d", &A[cont].tele);
        printf("Endereço: ");
        scanf("%s", &A[cont].endereço);
        printf("Número: ");
        scanf("%d", &A[cont].numero_casa);
        printf("CEP: ");
        scanf("%d", &A[cont].cep);
        printf("Bairro: ");
        scanf("%s", &A[cont].bairro);
        printf("Cidade: ");
        scanf("%s", &A[cont].cidade);
        printf("Estado: ");
        scanf("%s", &A[cont].estado);
        printf("Observações: ");
        scanf("%s", &A[cont].obs);
        printf("\n");
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void imprime_lista_total(struct dados A[agenda])
{
    int cont;
    printf("\n========== Lista de contatos cadastrados: ==========\n");
    for (cont = 0; cont < agenda; cont++)
    {
        printf("\nDados do cadastro [%d] \n", cont);
        printf("Nome: %s\n", A[cont].nome);
        printf("Idade: %d\n", A[cont].idade);
        printf("E-mail: %s\n", A[cont].email);
        printf("Telefone: %d\n", A[cont].tele);
        printf("Endereço: %s\n", A[cont].endereço);
        printf("Número: %d\n", A[cont].numero_casa);
        printf("CEP: %d\n", A[cont].cep);
        printf("Bairro: %s\n", A[cont].bairro);
        printf("Cidade: %s\n", A[cont].cidade);
        printf("Estado: %s\n", A[cont].estado);
        printf("Observações: %s\n\n", A[cont].obs);
    }
    printf("\n====================================================\n");
    system("read -n 1 -s -p "
           "Press any key to continue..."
           "; echo");
    //system("pause");
}

void imprime_lista_parcial(struct dados A[agenda])
{
    int cont;
    printf("\n========== Lista de contatos cadastrados: ==========\n");
    for (cont = 0; cont < agenda; cont++)
    {
        printf("\nDados do cadastro [%d] \n", cont);
        printf("Nome: %s\n", A[cont].nome);
        printf("Endereço: %s\n", A[cont].endereço);
        printf("Cidade: %s\n", A[cont].cidade);
        printf("Estado: %s\n", A[cont].estado);
    }
    printf("\n====================================================\n");
    system("read -n 1 -s -p "
           "Press any key to continue..."
           "; echo");
    //system("pause");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int busca_maisnovo_total(struct dados A[agenda])
{
    int cont, pos = 0; //primeira position
    printf("\n========== Contatos mais novos: ==========\n");
    for (cont = 0; cont < agenda; cont++)
    {
        if (A[cont].idade < A[pos].idade) // verifica se a idade corrente e menor
        {
            pos = cont;
            printf("\nDados do cadastro [%d] \n", cont);
            printf("Nome: %s\n", A[cont].nome);
            printf("Idade: %d\n", A[cont].idade);
            printf("E-mail: %s\n", A[cont].email);
            printf("Telefone: %d\n", A[cont].tele);
            printf("Endereço: %s\n", A[cont].endereço);
            printf("Número: %d\n", A[cont].numero_casa);
            printf("CEP: %d\n", A[cont].cep);
            printf("Bairro: %s\n", A[cont].bairro);
            printf("Cidade: %s\n", A[cont].cidade);
            printf("Estado: %s\n", A[cont].estado);
            printf("Observações: %s\n\n", A[cont].obs);
            return pos;
        }
        else
        {
        }
    }
    printf("\n==========================================\n");
    system("read -n 1 -s -p "
           "Press any key to continue..."
           "; echo");
    //system("pause");
    return pos;
}

int busca_maisnovo_parcial(struct dados A[agenda])
{
    int cont, pos = 0; //primeira position
    printf("\n========== Contatos mais novos: ==========\n");
    for (cont = 0; cont < agenda; cont++)
    {
        if (A[cont].idade < A[pos].idade) // verifica se a idade corrente e menor
        {
            pos = cont;
            printf("\nDados do cadastro [%d] \n", cont);
            printf("Nome: %s\n", A[cont].nome);
            printf("Endereço: %s\n", A[cont].endereço);
            printf("Cidade: %s\n", A[cont].cidade);
            printf("Estado: %s\n", A[cont].estado);
            return pos;
        }
        else
        {
        }
    }
    printf("\n==========================================\n");
    system("read -n 1 -s -p "
           "Press any key to continue..."
           "; echo");
    //system("pause");
    return pos;
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void imprime_menores12_total(struct dados A[agenda], char cidade, int idade)
{
    int cont;
    printf("\n========== Contatos menores de 12 anos: ==========\n");
    for (cont = 0; cont < agenda; cont++)
    {
        if (A[cont].cidade == cidade && A[cont].idade < 12)
        {
            printf("Dados do cadastro [%d] \n", cont);
            printf("Nome: %s\n", A[cont].nome);
            printf("Idade: %d\n", A[cont].idade);
            printf("E-mail: %s\n", A[cont].email);
            printf("Telefone: %d\n", A[cont].tele);
            printf("Endereço: %s\n", A[cont].endereço);
            printf("Número: %d\n", A[cont].numero_casa);
            printf("CEP: %d\n", A[cont].cep);
            printf("Bairro: %s\n", A[cont].bairro);
            printf("Cidade: %s\n", A[cont].cidade);
            printf("Estado: %s\n", A[cont].estado);
            printf("Observações: %s\n\n", A[cont].obs);
        }
        else
        {
        }
    }
    printf("\n==================================================\n");
    system("read -n 1 -s -p "
           "Press any key to continue..."
           "; echo");
    //system("pause");
}

void imprime_menores12_parcial(struct dados A[agenda], char cidade, int idade)
{
    int cont;
    printf("\n========== Contatos menores de 12 anos: ==========\n");
    for (cont = 0; cont < agenda; cont++)
    {
        if (A[cont].cidade == cidade && A[cont].idade < 12)
        {
            printf("Dados do cadastro [%d] \n", cont);
            printf("Nome: %s\n", A[cont].nome);
            printf("Endereço: %s\n", A[cont].endereço);
            printf("Cidade: %s\n", A[cont].cidade);
            printf("Estado: %s\n", A[cont].estado);
        }
        else
        {
        }
    }
    printf("\n==================================================\n");
    system("read -n 1 -s -p "
           "Press any key to continue..."
           "; echo");
    //system("pause");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void imprime_menores18_total(struct dados A[agenda], char cidade, int idade)
{
    int cont;
    printf("\n========== Contatos menores de 18 anos: ==========\n");
    for (cont = 0; cont < agenda; cont++)
    {
        if (A[cont].cidade == cidade && A[cont].idade < 18)
        {
            printf("Dados do cadastro [%d] \n", cont);
            printf("Nome: %s\n", A[cont].nome);
            printf("Idade: %d\n", A[cont].idade);
            printf("E-mail: %s\n", A[cont].email);
            printf("Telefone: %d\n", A[cont].tele);
            printf("Endereço: %s\n", A[cont].endereço);
            printf("Número: %d\n", A[cont].numero_casa);
            printf("CEP: %d\n", A[cont].cep);
            printf("Bairro: %s\n", A[cont].bairro);
            printf("Cidade: %s\n", A[cont].cidade);
            printf("Estado: %s\n", A[cont].estado);
            printf("Observações: %s\n\n", A[cont].obs);
        }
        else
        {
        }
    }
    printf("\n==================================================\n");
    system("read -n 1 -s -p "
           "Press any key to continue..."
           "; echo");
    //system("pause");
}

void imprime_menores18_parcial(struct dados A[agenda], char cidade, int idade)
{
    int cont;
    printf("\n========== Contatos menores de 18 anos: ==========\n");
    for (cont = 0; cont < agenda; cont++)
    {
        if (A[cont].cidade == cidade && A[cont].idade < 18)
        {
            printf("Dados do cadastro [%d] \n", cont);
            printf("Nome: %s\n", A[cont].nome);
            printf("Endereço: %s\n", A[cont].endereço);
            printf("Cidade: %s\n", A[cont].cidade);
            printf("Estado: %s\n", A[cont].estado);
        }
        else
        {
        }
    }
    printf("\n==================================================\n");
    system("read -n 1 -s -p "
           "Press any key to continue..."
           "; echo");
    //system("pause");
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int lobby(struct dados A[agenda])
{
    int num1, num2;
    while (1)
    {
        //system("cls");
        system("clear");
        printf("\n --------------- LOBBY --------------\n");
        printf("|                                    |\n");
        printf("|          Bem Vindo ao Lobby        |\n");
        printf("|                                    |\n");
        printf("|                                    |\n");
        printf(" --------------- LOBBY --------------\n");
        sleep(1);
        //system("cls");
        system("clear");
        printf("\n --------------- LOBBY --------------\n");
        printf("|                                    |\n");
        printf("|        Escolha o que deseja        |\n");
        printf("|            visualizar ?            |\n");
        printf("|                                    |\n");
        printf(" --------------- LOBBY --------------\n");
        sleep(1);
        printf("\nDigite 1 para ver as pessoas menores de 12 anos;\n");
        printf("Digite 2 para ver as pessoas menores de 18 anos;\n");
        printf("Digite 3 para ver o contato mais novo;\n");
        printf("Digite 4 para ver todos os contatos;\n");
        scanf("%d", &num1);
        switch (num1)
        {
        case 1:
            system("clear");
            //system("cls");
            printf("\nDeseja visualizar o cadastro total ou parcial ?\n");
            printf("Digite 1 para total\n");
            printf("Digite 2 para parcial\n");
            scanf("%d", &num2);
            switch (num2)
            {
            case 1:
                imprime_menores12_total(A, A->cidade, A->idade);
                break;
            case 2:
                imprime_menores12_parcial(A, A->cidade, A->idade);
                break;
            default:
                printf("Código invalido!\n");
                return 1;
                break;
            }
            break;
        case 2:
            system("clear");
            //system("cls");
            printf("\nDeseja visualizar o cadastro total ou parcial ?\n");
            printf("Digite 1 para total\n");
            printf("Digite 2 para parcial\n");
            scanf("%d", &num2);
            switch (num2)
            {
            case 1:
                imprime_menores18_total(A, A->cidade, A->idade);
                break;
            case 2:
                imprime_menores18_parcial(A, A->cidade, A->idade);
                break;
            default:
                printf("Código invalido!\n");
                return 1;
                break;
            }
            break;
        case 3:
            system("clear");
            //system("cls");
            printf("\nDeseja visualizar o cadastro total ou parcial ?\n");
            printf("Digite 1 para total\n");
            printf("Digite 2 para parcial\n");
            scanf("%d", &num2);
            switch (num2)
            {
            case 1:
                busca_maisnovo_total(A);
                break;
            case 2:
                busca_maisnovo_parcial(A);
                break;
            default:
                printf("Código invalido!\n");
                return 1;
                break;
            }
            break;
        case 4:
            system("clear");
            //system("cls");
            printf("\nDeseja visualizar o cadastro total ou parcial ?\n");
            printf("Digite 1 para total\n");
            printf("Digite 2 para parcial\n");
            scanf("%d", &num2);
            switch (num2)
            {
            case 1:
                imprime_lista_total(A);
                break;
            case 2:
                imprime_lista_parcial(A);
                break;
            default:
                printf("Código invalido!\n");
                return 1;
                break;
            }
            break;
        default:
            system("clear");
            //system("cls");
            printf("número invalido! fechando o programa...\n\n");
            return 1;
            break;
        }
    }
    return 0;
}

// Principal!!
struct dados B[agenda];
int main()
{
    setlocale(LC_ALL, "Portuguese");

    system("clear");
    //system("cls");
    ler_contatos(B);
    system("clear");
    //system("cls");
    lobby(B);

    return 0;
}