#include <stdio.h>


int main ()
{
    int num1;
    {
        printf("Digite um numero: \n");
        scanf("%d", &num1);
        {
            if (num1 >= 0)
            {
                printf("o numero eh positivo!\n");
            }
            else
            {
                printf("o numero eh negativo!\n");
            }
        }
    }
    return 0;
}