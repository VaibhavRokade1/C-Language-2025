#include <stdio.h>
#include <stdlib.h>
int main()
{
    int *p, n, i, sum = 0;

    printf("Enter n :\n");
    scanf("%d", &n);

    p = (int *)calloc(n, sizeof(int)); // memory allocation

    printf("Enter a element :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += p[i];
    }

    printf("%d", sum);
    return 0;
}
