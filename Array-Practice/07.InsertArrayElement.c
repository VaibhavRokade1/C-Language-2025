#include <stdio.h>
int main()
{
    int a[100], n, key, pos, i;

    printf("How many number you want to enter : \n");
    scanf("%d", &n);

    printf("Accept Array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter key to add :");
    scanf("%d", &key);

    printf("Enter key postion :");
    scanf("%d", &pos);

    for (i = n; i < pos; i--)
    {
        a[i] = a[-1];
    }
    a[pos] = key;
    n++;

    printf("Updated Array\n");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
