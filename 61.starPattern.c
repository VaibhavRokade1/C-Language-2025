#include <stdio.h>
#include <ctype.h>
int main()
{
    int i, j, n;
    char ch1 = 'A';

    printf("Enter Number of Row you want To Print : \n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c%c ", ch1++, tolower(ch1));
        }
        printf("\n");
    }

    return 0;
}