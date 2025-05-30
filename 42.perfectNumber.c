#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n, sum = 0;
    printf("Enter a Number to Check Perfect\n");
    scanf("%d", &n);

    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        printf("%d is Perfect Number", n);
    }
    else
    {
        printf("%d is Not Perfect Number", n);
    }

    return 0;
}
