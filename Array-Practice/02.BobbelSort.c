#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[100], n, flag, i, j;

    printf("How many number you want to enter :\n");
    scanf("%d", &n);

    printf("Accept Array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    flag = 1;
    i = 0;
    while (flag)
    {
        flag = 0;
        if (a[i] > a[i + 1])
        {
            for (j = 0; j < n - i - 1; j++)
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        i++;
    }

    printf("After Shorting Array : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    return 0;
}
