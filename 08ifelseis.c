#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a : \n");
    scanf("%d", &a);
    printf("Enter b : \n");
    scanf("%d", &b);
    printf("Enter c : \n");
    scanf("%d", &c);

    if ((a == b || c) && (b == a || c) && (c == a || b))
    {
        printf("Enter a Valid Input or Same Value");
    }
    else
    {
        if (a > b)
        {
            printf("A is Grater than Other Numbers");
        }
        else if (b > c)
        {
            printf("B is Grater than Other Numbers");
        }
        else if (c > a)
        {
            printf("C is Grater than Other Numbers");
        }
    }
    // printf("Max value is : %d", a > b ? b > c :)
}