// Addition of previous 2 number well be the next number

#include <stdio.h>
int main()
{
    int n, i, a = 0, b = 1, c;

    printf("Enter a length of the Seary : \n");
    scanf("%d", &n);

    if (n == a)
    {
        printf("%d", a);
    }
    else if (n == 2)
    {
        printf("%d %d ", a, b);
    }
    else if (n > 2)
    {
        printf("%d %d", a, b);
        for (i = 2; i < n; i++)
        {
            c = a + b; // get next number
            printf(" %d ", c);
            a = b; // load b to a
            b = c; // load c to b
        }
    }

    return 0;
}
