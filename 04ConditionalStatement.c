#include <stdio.h>
int main()
{
    int n;

    printf("Enter a Number : ");
    scanf("%d", &n);

    if (n > 0)
    {
        printf("\n Your Number is : Positive");
    }
    else
    {
        printf("\n Your Number is : Negative");
    }

    return 0;
}
