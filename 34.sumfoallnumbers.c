#include <stdio.h>
int main()
{
    int n, result = 0;
    printf("Enter a Number :\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        result += i;
    }

    printf("Sum of all numbers :%d", result);
    return 0;
}
