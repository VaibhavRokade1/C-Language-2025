#include <stdio.h>
#include <limits.h>
int main()
{
    int a[100], max, secound, n, i;

    printf("How Many Numbers You Want to Enter :\n");
    scanf("%d", &n);
    printf("Accept Array : \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    max = a[0];
    secound = INT_MIN;
    for (i = 1; i < n; i++)
    {
        if (max < a[i])
        {
            secound = max;
            max = a[i];
        }
        else if (a[i] > secound && a[i] != max)
        {
            secound = a[i];
        }
    }

    printf("Secound Max is : %d", secound);
    return 0;
}
