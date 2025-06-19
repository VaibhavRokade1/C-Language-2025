// insert
#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[100], key, n, i, pos;

    printf("How many number you want enter :\n");
    scanf("%d", &n);

    printf("Enter Array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter a Postion :\n");
    scanf("%d", &pos);

    printf("Enter a Key : \n");
    scanf("%d", &key);

    for (i = n; i >= pos; i--)
        a[i] = a[i - 1];

    a[pos - 1] = key;
    n++;

    printf("After insert Array : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
