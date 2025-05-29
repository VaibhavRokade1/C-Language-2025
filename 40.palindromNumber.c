#include <stdio.h>
int main()
{
    int n, rev = 0, temp;

    printf("Enter a Number to Check Palindrome:\n");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    if (rev == temp)
    {
        printf("Number is Palindrome");
    }
    else
    {
        printf("Number Is not palindrome");
    }
    return 0;
}
