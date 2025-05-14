#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n;

    printf("Enter a Number : \n");
    scanf("%d", &n);

    if (n % 5 == 0)
    {
        printf("Your Number is Divisiable by : 5");
    }
    else
    {
        printf("Your Number is Not Divisiable by : 5");
    }

    return 0;
}
