#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int a, b, c;

    printf("Enter a Numbers :\n");
    scanf("%d%d%d", &a, &b, &c);

    printf("Max Value is :%d", fmax(a, fmax(b, c)));
    return 0;
}
