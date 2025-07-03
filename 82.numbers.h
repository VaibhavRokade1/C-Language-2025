#include <stdio.h>
#include <math.h>
// Prime
int isPrime(int n)
{
    int i;
    if (n == 0)
    {
        return 0;
    }
    if (n % 2 == 0 || n % 3 == 0)
    {
        return 0;
    }

    for (i = 5; i < sqrt(n); i += 6)
    {
        if (n % i == 0 || n % i + 2 == 0)
        {
            return 0;
        }
    }
    return 1;
}

int isPerfect(int n)
{
    int i, sum = 0;
    for (i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }

    return (sum == n);
}

int reverse(int n)
{
    int rev, rem, temp = n;

    while (n > 0)
    {
        rem = n / 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    return rev;
}

int isArmstrong(int n)
{
    int temp = n, cnt, rem, i, result;
    while (n > 0)
    {
        cnt++;
        n /= 10;
    }
    n = temp;
    while (n > 0)
    {
        rem = n % 10;
        result = result + pow(rem, cnt);
        n /= 10;
    }
    return (result == temp);
}