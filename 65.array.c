#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a[100], n, i, sum = 0;

    printf("How many Numbers you want add :\n");
    scanf("%d", &n);

    printf("Enter a Number one by one  :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum += a[i];
    }

    printf("Addition is : %d\n", sum);

    return 0;
}
