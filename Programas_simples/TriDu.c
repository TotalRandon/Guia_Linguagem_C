#include <stdio.h>

int main()
{
    int card1, card2;
    scanf("%d", &card1);
    scanf("%d", &card2);

    if (card1 >= 1 && card1 <= 13 || card2 >= 1 && card2 <= 13)
    {
        if (card1 == card2)
        {
            printf("%d\n", card1);
        }
        else if (card1 > card2)
        {
            printf("%d\n", card1);
        }
        else if (card1 < card2)
        {
            printf("%d\n", card2);
        }
    }
    else
    {
    }
    return 0;
}