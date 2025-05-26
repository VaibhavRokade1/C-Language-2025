#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a any number range in 1 to n :\n");
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }

    return 0;
}
