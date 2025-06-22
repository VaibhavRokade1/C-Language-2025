#include <stdio.h>
int main(int argc, char const *argv[])
{

    int a[100], i, n, j, key;
    printf("How many number you want to enter :\n");
    scanf("%d", &n);
    printf("Accept Array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter a key you want to delete\n");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            for (j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            n--;
            i--;
        }
    }
    printf("Updated Array :\n");

    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}
