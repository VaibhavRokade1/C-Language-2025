#include <stdio.h>
int main()
{
    int a[100], n, i, j, k;

    printf("How many numbers you want to enter :\n");
    scanf("%d", &n);

    printf("Accept Array :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n - 1; k++)
                    a[k] = a[k + 1];

                n--;
                j--;
            }
        }
    }

    printf("Display Array : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
