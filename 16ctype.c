#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter a anything :\n");
    scanf("%c", &ch);

    if (isupper(ch))
    {
        printf("Capital Latter");
    }
    else if (islower(ch))
    {
        printf("Small Latter");
    }
    else if (isdigit(ch))
    {
        printf("Capital Latter");
    }
    else
    {
        printf("Special symbol");
    }
    return 0;
}
