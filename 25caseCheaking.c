#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Charactor :\n");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'A' ... 'Z':
        printf("Capitale Latter");
        break;
    case 'a' ... 'z':
        printf("Small Latter");
        break;
    case '0' ... '9':
        printf("Digits");
        break;

    default:
        printf("Special Symbol");
        break;
    }
    return 0;
}
