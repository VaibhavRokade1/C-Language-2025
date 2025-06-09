#include <stdio.h>
int main()
{

    int a[100], i, n;

    printf("How many numbers you want to enter :\n");
    scanf("%d", &n);

    printf("Enter values: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Given Input is : \n");

    for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}