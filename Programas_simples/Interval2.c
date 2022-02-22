/* Read an integer 'N', This 'N' will be the number of integer numbers X that will be read.
Print how many these numbers X are in the interval [10,20] and how many values are
out of this interval.

>Input: The first line of input is an integer N (N < 10000), that indicates the total
number of test cases. Each case is an integer number X (-107 < X < 107).

<Output: For each test case, print how many numbers are in and how many values are out
of the interval. */

// (-107 <X <107).

#include <stdio.h>

int main()
{
    int a, n, i;
    int in, out;

    system("clear");
    printf("Digite quantos vezes quer digitar: \n");
    scanf("%d", &n);
    if (n < 10000)
    {
        printf("Digite os numeros entre 10 a 20 ou fora deles: \n");
        for (i = 0; i < n; i++)
        {
            scanf("%d", &a);
            if (a >= 10 && a <= 20)
            {
                in++;
            }
            else
            {
                out++;
            }
        }
    }
    else
    {
    }
    printf("%d in\n", in);
    printf("%d out\n", out);
    return 0;
}

// Toma no cu.