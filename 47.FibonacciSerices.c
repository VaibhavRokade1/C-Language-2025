// 0,1,3,5,8,13,21,34

// 0 + 1 = 1 , 1 + 2 = 3

#include <stdio.h>
int main()
{
    int a, b, c, n;
    a = 0;
    b = 1;

    printf("Enter a Number : \n");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("%d", a);
    }
    else if (n == 2)
    {
        printf("%d %d", a, b);
    }
    else if (n > 2)
    {
        printf("%d %d", a, b);
        for (int i = 2; i < n; i++)
        {
            c = a + b;
            printf(" %d", c);
            a = b;
            b = c;
        }
    }

    return 0;
}
