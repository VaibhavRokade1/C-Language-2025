#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, n;

    printf("Enter Number of Row you want To Print : \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            for (j = 1; j <= n; j++)
                printf("* ");
        }
        else
        {
            for (j = 1; j <= n; j++)
            {
                if (i == 1 || j == 1 || j == n)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
        if (i == n)
        {
            for (j = 1; j <= n; j++)
                printf("* ");
        }
    }

    return 0;
}