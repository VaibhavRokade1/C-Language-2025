#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[100], i, j, k, n;

    printf("How many number you want to Enter  :\n");
    scanf("%d", &n);

    printf("Accept Array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n - 1; j++)
        {
            if (a[j] == a[j + 1])
            {
                for (k = j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }

    printf("Upadated Array :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}
