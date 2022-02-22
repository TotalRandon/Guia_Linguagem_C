#include <stdio.h>
#include <locale.h>

char VerificaPos(int Num)
{
    char Ret;

    if (Num >= 0)
    {
        Ret = 'p';
    }
    else
    {
        Ret = 'n';
    }

    return Ret;
}

int Num;
char Retorno;
main()
{
    setlocale(LC_ALL, "Portuguese");

    //Leitura de variáveis
    printf("Digite um número: ");
    scanf("%d", &Num);

    //Verifica se Num é positivo ou negativo
    Retorno = VerificaPos(Num);

    //Exibe mensagem
    if (Retorno == 'p')
    {
        printf("Positivo!!");
    }
    else
    {
        printf("Negativo!!");
    }

    return 0;
}