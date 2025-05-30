#include <stdio.h>
int main(int argc, char const *argv[])
{
    int flag = 0, n;
    printf("Enter a Number :\n");
    scanf("%d", &n);

    for (int i = 2; i <= n / 2; i++)  // 
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 0)
    {
        printf("Number Is Prime");
    }
    else
    {
        printf("Number Is Not Prime");
    }

    return 0;
}
