#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter a Charactor :");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'A':
    case 'a':
    case 'E':
    case 'e':
    case 'I':
    case 'i':
    case 'O':
    case 'o':
    case 'U':
    case 'u':
        printf("Charactor is Vowel");
        break;

    default:
        printf("Charctor is Not Vowel");
    }
    return 0;
}
