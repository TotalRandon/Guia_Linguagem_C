#include <stdio.h>

void imprimamensagem(void)//funcao criada. (pode estar tanto aqui como la)
{
    printf("teste.\n");
}

int main ()//funcao principal.
{
    
    void imprimamensagem(void);//declaracao da funcao se estiver em baixo da funcao MAIN.
    imprimamensagem();//chama a funcao

    return 0;
}

void imprimamensagem(void)//funcao criada.
{
    printf("teste.\n");
}

