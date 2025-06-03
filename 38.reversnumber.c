#include <stdio.h>
int main()
{
    int n, rev = 0;

    printf("Enter a Number to revers :\n");
    scanf("%d", &n);

    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    printf("Revers Number is:%d", rev);
    return 0;
}