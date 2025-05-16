#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, max;
    printf("Enter values\n");
    scanf("%d%d%d", a, b, c);

    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);

    printf("%d", max);
    return 0;
}
