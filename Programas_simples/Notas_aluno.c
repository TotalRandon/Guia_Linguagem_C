#include <stdio.h>

int main()
{
    float n1, n2, n3, n4;
    float media, media1;
    float nota, result;

    printf("Digite a nota 1: ");
    scanf("%f", &n1);
    printf("Digite a nota 2: ");
    scanf("%f", &n2);
    printf("Digite a nota 3: ");
    scanf("%f", &n3);
    printf("Digite a nota 4: ");
    scanf("%f", &n4);

    n1 = (n1 * 2) / 10;
    n2 = (n2 * 3) / 10;
    n3 = (n3 * 4) / 10;
    n4 = (n4 * 1) / 10;
    media = n1 + n2 + n3 + n4;

    if (media >= 7.0)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno aprovado.\n");
        return 0;
    }
    else
    {
    }
    if(media < 5.0)
    {
        printf("Media: %.1f\n", media);
        printf("Aluno reprovado.\n");
        return 0;
    }
    else
    {
    }
    if (media >= 5.0 || media < 7.0)
    {
        media1 = media;
        printf("Nota do exame: ")
        scanf("%f", &nota);

        result = (media + nota) / 2;
        if(result > 5)
        {
            printf("\nMedia: %.1f\n", media);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1f\n", nota);
            printf("Aluno aprovado.\n");
            printf("Media final: %.1f\n", result);
        }
        else
        {

        }
        if(result < 5)
        {
            printf("\nMedia: %.1f\n", media);
            printf("Aluno em exame.\n");
            printf("Nota do exame: %.1f\n", nota);
            printf("Aluno reprovado.\n");
            printf("Media final: %.1f\n", result);
        }
    }
    return 0;
}