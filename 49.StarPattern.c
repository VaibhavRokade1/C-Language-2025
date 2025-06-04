#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, n;

    printf("Enter Number of Row you want To Print : \n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }

    return 0;
}