#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b;

    printf("Enter number for : a :");
    scanf("%d", &a);
    printf("Enter number for : b :");
    scanf("%d", &b);

    printf("Max is :%d\n", a > b ? a : b);
    // Maximum Logic
    a > b ? printf(" Max value is :%d\n", a) : printf("Max value is : %d\n", b);

    // minimum Logic
    a > b ? printf(" Min value is :%d", b) : printf("Min value is : %d", a);

    return 0;
}
