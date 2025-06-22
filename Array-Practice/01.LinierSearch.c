#include <stdio.h>
int main()
{

    int a[100], i, key, n, flag = 0;

    printf("How many number you want Enter : \n");
    scanf("%d", &n);

    printf("Accpet Array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter Key You want to Search : \n");
    scanf("%d", &key);

    for (i = 0; i < n; i++)
    {
        if (a[i] == key)
        {
            flag = 1;
            break;
        }
    }
    if (flag)
    {
        printf("Found...");
    }
    else
    {
        printf("Not Found...");
    }
}
