#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter a Number :\n");
    scanf("%d", &n);

    for (int i = 0; i <= n; i += 2)
    {
        printf("%d\n", i);
    }
    printf("===========================================");
    for (int i = 1; i <= n; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}
