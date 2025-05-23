#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter a Charactor :");
    scanf("%c", &ch);

    ch = tolower(ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Charactor is Vowel");
        break;

    default:
        printf("Charctor is Not Vowel");
    }
    return 0;
}
