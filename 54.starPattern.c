#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, n;

    printf("Enter Number of Row you want To Print : \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            if (i == j || j == 1)
                printf("#");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}