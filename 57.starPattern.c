#include <stdio.h>
#include <math.h>
int main()
{
    int i, j, n;
    char ch = 'A';

    printf("Enter Number of Row you want To Print : \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", ch);
            ch++;
        }
        printf("\n");
        ch = 'A';
    }

    return 0;
}