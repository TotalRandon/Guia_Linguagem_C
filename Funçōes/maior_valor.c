#include <stdio.h>
#include <locale.h>

int MaiorValor(int Valor1, int Valor2){
    int Maior;
    
    if (Valor1 > Valor2 )
    {
        Maior = Valor1;
    }
    else
    {
        Maior = Valor2;
    }
    
    return Maior;
}

void MaiorValor2(int Valor1, int Valor2){ //procedimento
    int Maior;
    
    if (Valor1 > Valor2 )
    {
        Maior = Valor1;
    }
    else
    {
        Maior = Valor2;
    }
    
    printf("\nO maior valor é: %d", Maior);    
}


int Num1, Num2, Maior;
main () {
    setlocale (LC_ALL,"Portuguese");

    //Leitura de variáveis
    printf("Digite o primeiro número: ");
    scanf("%d", &Num1);
    printf("Digite o segundo número: ");
    scanf("%d", &Num2);
    
    //Calcula o maior valor
    Maior = MaiorValor(Num1, Num2);

    //Exibe o maior valor
    printf("\nO maior valor é: %d", Maior);
    
    //MaiorValor2(Num1, Num2);
        
    return 0;
}