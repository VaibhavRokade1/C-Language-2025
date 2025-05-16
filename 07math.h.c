#include <stdio.h>
#include <math.h>
int main()
{
    int a, b;

    printf("Enter number for : a :");
    scanf("%d", &a);
    printf("Enter number for : b :");
    scanf("%d", &b);

    printf("Max Num is :%.0f", fmax(a, b));
    printf("\nMin Num is :%.0f", fmin(a, b));
    return 0;
}
