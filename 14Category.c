#include <stdio.h>
int main()
{
    char ch;

    printf("Enter a anything :\n");
    scanf("%c", &ch);
    if (ch >= 65 && ch <= 90)
    {
        printf("Cappital Latter");
    }
    else if (ch >= 90 && ch <= 122)
    {
        printf("Small Letter");
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("Digites");
    }
    else
    {
        printf("Special Symbols");
    }
}

// Home work
// light bill calculater
// Ctype.h  === > ?