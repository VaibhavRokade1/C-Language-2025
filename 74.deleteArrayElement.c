#include <stdio.h>
int main()
{
    int n, a[100], flag, i, j, key;

    printf("Enter a number :\n");
    scanf("%d", &n);

    printf("Enter Array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter a Key You Want to Delete : \n");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            for (j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
            break;
        }
    }

    printf("Delete Element Array : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
