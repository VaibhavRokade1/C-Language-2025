#include <stdio.h>
int main()
{
    int userNum;

    printf("Enter a Number for a Month : \n");
    scanf("%d", &userNum);

    switch (userNum)
    {
    case 1:
        printf("day=31 ");
        break;
    case 2:
        printf("day=28/29 ");
        break;
    case 3:
        printf("day=31 ");
        break;
    case 4:
        printf("Days = 30 ");
        break;
    case 5:
        printf("Days = 31 ");
        break;
    case 6:
        printf("Days = 30 ");
        break;
    case 7:
        printf("Days = 31 ");
        break;
    case 8:
        printf("Days = 30 ");
        break;
    case 9:
        printf("Days = 31 ");
        break;
    case 10:
        printf("Days = 30");
        break;
    case 11:
        printf("Days = 31 ");
        break;
    case 12:
        printf("Days = 30 ");
        break;

    default:
        printf("\nEnter a valid Number for month");
        break;
    }
    return 0;
}
