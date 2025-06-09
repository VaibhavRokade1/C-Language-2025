#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, n;
    printf("Enter Number of Row you want To Print : \n");
    scanf("%d", &n);

    for (i = n; i >= 0; i--)
    {
        for (j = i; j >= 0; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}