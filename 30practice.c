#include <stdio.h>
int main()
{
    int n;
    printf("Display all Even Or Odd Number in between 1 To N\n");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
        i & 1 ? printf("Odd =%d\n", i) : printf("Even =%d\n", i);
    return 0;
}