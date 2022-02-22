#include <stdio.h>

void main ()
{
    float ValorCompra, ValorDinheiro, troco;

    printf("Digite o valor da compra: ");
    scanf("%f",&ValorCompra);
    printf("Digite o valor em dinheiro: ");
    scanf("%f",&ValorDinheiro);
    troco = ValorDinheiro - ValorCompra;
    printf("Troco: %.2f\n",troco);

}