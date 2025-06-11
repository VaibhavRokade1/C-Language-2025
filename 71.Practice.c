#include <stdio.h>
int main()
{
    int a[100], n, i, max = a[0], secound;

    printf("How many Number you want to Enter : \n");
    scanf("%d", &n);

    printf("Accept Array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Given Array is :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d, ", a[i]);
    }
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
            secound = a[i - 1];
        }
    }

    printf("\nMax %d", max);
    printf("\n2nd %d", secound);
    return 0;
}
