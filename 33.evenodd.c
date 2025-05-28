#include <stdio.h>
int main()
{
    int x, y;

    printf("Enter a first Number :\n");
    scanf("%d", &x);
    printf("Enter a Secound Number :\n");
    scanf("%d", &y);

    x = (x % 2 == 0) ? x : x + 1;

    for (int i = 0; i <= y; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}
