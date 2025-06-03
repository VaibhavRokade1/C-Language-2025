#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int i, flag = 1, n;
    printf("Enter a Number to Cheak Prime or Not : ");
    scanf("%d", &n);

    if (n % 2 == 0 || n % 3 == 0)
    {
        flag = 0;
    }
    else
    {
        for (i = 5; i < sqrt(n); i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("Prime Number");
    }
    else
        printf("Number is Not Prime");

    return 0;
}
