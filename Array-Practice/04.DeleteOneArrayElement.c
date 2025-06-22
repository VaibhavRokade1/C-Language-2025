#include <stdio.h>
int main()
{
    int a[100], n, i, j, key;
    printf("How many number you want to enter : \n");
    scanf("%d", &n);

    printf("Accept Array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter a Key You want to delete : \n");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {

            for (j = i; j < n - 1; j++)
            {
                a[i] = a[i + 1];
            }
        }
        n--;
        break;
    }
    printf("After Delete :\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}
