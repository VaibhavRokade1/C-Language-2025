#include <stdio.h>
int main(int argc, char const *argv[])
{
    int num1, num2;

    printf("Enter a first Number :\n");
    scanf("%d", &num1);
    printf("Enter a Secound Number whitch is Greater than first Number :\n");
    scanf("%d", &num2);

    if (num1 < num2 && num1 % 2 == 0)
    {
        for (num1; num1 <= num2; num1 += 2)
        {
            printf("%d", num1);
        }
    }
    else
    {
        printf("");
    }

    return 0;
}
