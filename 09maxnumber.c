#include <stdio.h>
int main(int argc, char const *argv[])
{

    int a, b, c;
    printf("Enter A :\n");
    scanf("%d", &a);
    printf("Enter B :\n");
    scanf("%d", &b);
    printf("Enter C :\n");
    scanf("%d", &c);
    if (a > b)
    {
        b = a;
    }
    else if (c > b)
    {
        b = c;
    }

    printf("Max Value is :%d", b);

    return 0;
}
