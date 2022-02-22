#include <stdio.h>

int main()
{
    ///////////////////////////////////////////////////////////////////

    //variaveis: (populares)

    char; // caracteres
    int; // números inteiros
    float; //números reais com pouca precisão
    double; // números reais com precisão
    void; // vazio

    //Variaiveis: (incomuns)

    unsigned char; // caracter sem sinal
    long int; // números inteiros com domínio extendido
    unsigned int; // número inteiro positivo
    unsigned long int; //número inteiro positivo com dominio extendido
    short int; // inteiro com dominio reduzido
    unsigned short int; // inteiro posotivo com dominio positivo 

    //////////////////////////////////////////////////////////////////

    // Exemplo 1:

    char a = 'A';
    int num1 = 1;
    float num2 = 10.599;
    double num3 = 10.599;
    // void não se ultiliza por aqui!

    printf("Variavel char = %c\n", a);
    printf("Variavel int = %d\n", num1);
    printf("Variavel float = %f\n", num2);
    printf("variavel double = %f\n\n", num3);

    num2 = num2 / 100;
    num3 = num3 / 100;

    printf("Calculo / 100 variavel float = %.3f\n", num2);
    printf("Calculo / 100 variavel double = %.3f\n", num3);

    return 0;
}