#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    char n[100];

    printf("Enter a Number\n");
    scanf("%s", &n);

    printf("Revers Number Is : %s", strrev(n));

    return 0;
}
