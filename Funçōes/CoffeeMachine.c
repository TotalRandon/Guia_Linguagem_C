#include <stdio.h>

int andar1(int b1, int b2, int b3)
{
    int total;
    b1 = 0;
    b2 = b2 * 2;
    b3 = b3 * 4;
    
    return total = b1 + b2 + b3;
}

int andar2(int c1, int c2, int c3)
{
    int total;
    c1 = c1 * 2;
    c2 = 0;
    c3 = c3 * 2;

    return total = c1 + c2 + c3;
}

int andar3(int e1, int e2, int e3)
{
    int total;
    e1 = e1 * 4;
    e2 = e2 * 2;
    e3 = 0;

    return total = e1 + e2 + e3;
}

int main()
{
    int a1, a2, a3;
    int coffe;

    scanf("%d", &a1);
    scanf("%d", &a2);
    scanf("%d", &a3);
    if (a1 > a2 && a1 > a3)
    {
        coffe = andar1(a1, a2, a3);
    }
    else if (a2 > a1 && a2 > a3)
    {
        coffe = andar2(a1, a2, a3);
    }
    else
    {
        coffe = andar3(a1, a2, a3);
    }
    printf("%d\n", coffe);
    return 0;
}

/* 
- Raciocinio:
possui então 3 andares, nestes andares dar o numero de pessoas 
em cada andar, andar:
a1, a2, a3;
nisto devemos ver quanto tempo (em minutos) consiguimos usar
o melhor posicionamento da maquina de cafe nos andares.

Observacoes:
- funcionarios bebem 1 cafe por dia
- cada funcionario dos andares leva 2 min para ir e voltar
- 2 andares para levar tempo
- sera um andar que vai estar a maquina

Ex: 
- possui 60 pessoas no predio divididos em
10p a1
20p a2
30p a3 (maquina aqui)

a1 leva 4 min para ir e voltar
a2 leva 2 min para ir e voltar

Calculo:

30p a3 = 0 min
20p a2 = 20 * 2 = 40 min
10p a1 = 10 * 4 = 40 min

Total = 80 min
*/


