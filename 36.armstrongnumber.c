#include <stdio.h>
int main()
{
    int n;
    printf("Enter a Number :");
    scanf("%d", &n);

    while (n > 0)
    {
        int rem = n % 10;
        printf("%d ", rem);
        n = n / 10;
    }

    return 0;
}

// .

// #include <stdio.h>
// int main()
// {
//     int n, count = 0;
//     printf("Enter a Number :\n");
//     scanf("%d", &n);

//     while (n > 0)
//     {
//         count++;
//         n = n / 10;
//     }
//     printf("Count Digits  %d\n", count);

//     return 0;
// }
