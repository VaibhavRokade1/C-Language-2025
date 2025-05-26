#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number 1 To N :\n");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
        printf("%d\n", i);

    return 0;
}
