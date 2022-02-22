/* 
Vovó Maria ganhou de aniversário um presente de seu netinho Juca Xaves, 
uma fritadeira elétrica. Como seu netinho é um tremendo “mão de vaca”, 
comprou o aparelho na China, que veio com o menu de opções em Chinês e a 
regulagem de temperatura em fahrenheit (oF). Dessa forma vovó não 
onsegue utilizar o aparelho e pediu sua ajuda para desenvolver um programa 
que realize a conversão de suas receitas que encontram-se com modo de 
preparo em graus Celsius (oC), para graus fahrenheit (oF).

Entrada:
A entrada é composta de um único número inteiro n, representando a unidade oC.

Saída:
A saída deve ser apresentada da seguinte forma: “X graus celsius equivale a 
Y graus fahrenheit ”, onde X é o valor de entrada e Y é o valor inteiro de 
saída do seu programa. Não esqueça de imprimir o fim da linha após a saída, 
caso contrário receberá um “presentation error”.
*/

#include <stdio.h>

int main()
{
    int c, f;
    scanf("%d", &c);
    f = (9 * c + 160) / 5;
    printf("%d graus celsius equivale a %d graus fahrenheit\n", c, f);
    return 0;
}