#include <stdio.h>
int main(int argc, char const *argv[])
{
    int monthno;
    printf("Enter a Number for Month");
    scanf("%d", &monthno);

    switch (monthno)
    {
    case 1:
    case 3:
    case 9:
    case 11:
    case 5:
    case 7:
    case 12:
        printf("31 Day");
        break;
    case 2:
        printf("28/29 Day");
        break;
    case 4:
    case 6:
    case 8:
    case 10:
        printf("30 Day");
        break;

    default:
        printf("You Enter a Invalid Number....");
        break;
    }
    return 0;
}
