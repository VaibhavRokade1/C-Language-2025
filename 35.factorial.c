#include <stdio.h>
int main()
{
    int n, fact = 1;
    printf("Enter a Number for factorial :\n");
    scanf("%d", &n);
    int i = 2;

    while (i <= n)
    {
        fact *= i;
        i++;
    }

    printf(" factorial of %d is:%d", n, fact);
    return 0;
}
