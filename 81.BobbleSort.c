#include <stdio.h>
int main()
{
    int a[100], i, j, n, flag;

    printf("How many Numbers you want to enter : \n");
    scanf("%d", &n);

    printf("Enter a Array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    flag = 1;
    i = 0;
    while (flag)
    {
        flag = 0;

        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        i++;
    }
    printf("After Sorting : \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}
