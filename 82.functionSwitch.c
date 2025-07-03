#include <stdio.h>
#include "82.numbers.h"
int main()
{
    int ch;
    int n;

    while (1)
    {
        printf("Enter a Choise : \n 1 : Prime \n 2 : Perfect \n3 : Reverse \n4 : Palindrome \n 5 : Armstrong \n 6 : Exit");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:

            printf("Enter a Number :\n");
            scanf("%d", &n);
            if (isPrime(n))
            {
                printf("Number is Prime ");
            }
            else
            {
                printf("Number is not prime");
            }

            break;
        case 2:
            printf("Enter a Number :\n");
            scanf("%d", &n);
            if (isPerfect(n))
            {
                printf("Number is Perfect ");
            }
            else
                printf("Number is Not Perfect ");
            break;
        case 3:
            printf("Enter a Number :\n");
            scanf("%d", &n);
            if (reverse(n) == n)
            {
                printf("Number is Palindrome");
            }
            else
                printf("Number is not Palindrome");
            break;
        case 4:
            printf("Enter a Number :\n");
            scanf("%d", &n);
            printf("Reverse Number is %d", reverse(n));
            break;
        case 5:
            printf("Enter a Number :\n");
            scanf("%d", &n);
            if (isArmstrong(n))
            {
                printf("Nnumber is Armstromg :\n");
            }
            else
                printf("Number is not armstrong ");

            break;

        default:
            break;
        }
    }

    return 0;
}
