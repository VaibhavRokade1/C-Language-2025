#include <stdio.h>
#include <math.h>
int main()
{
    int n, temp, rem, count = 0, result = 0;

    printf("Enter a Number :\n");
    scanf("%d", &n);

    temp = n;
    while (n > 0)
    {
        count++;
        n = n / 10;
    }
    n = temp;
    while (n > 0)
    {
        rem = n % 10;
        result += pow(rem, count);
        n = n / 10;
    }

    if (result == temp)
    {
        printf("Number is Armstrong....");
    }
    else
    {
        printf("Number is Not Armstrong....");
    }

    return 0;
}
