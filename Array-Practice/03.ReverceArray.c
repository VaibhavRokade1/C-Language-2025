#include <stdio.h>
int main()
{
    int a[100], n, i;
    printf("How many numbers you want enter : \n");
    scanf("%d", &n);

    printf("Accept Array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n / 2; i++)
    {
        int temp = a[i];
        a[i] = a[n - i - 1];
        a[n - i - 1] = temp;
    }

    for (i = 0; i < n; i++)
        printf("%d", a[i]);

    return 0;
}
