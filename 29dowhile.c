#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a any number range in 1 to n :\n");
    scanf("%d", &n);

    i = 1;
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}

