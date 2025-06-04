#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    int n, option, i, flag = 1, fact = 1, rev, rem, result, temp;

    printf("Enter A Number To Check Number Type : \n");
    scanf("%d", &n);

    while (1)
    {
        printf("\n1.Prime\n2.Perfect\n3.Palindrome\n4.Factor\n5.Reverse\n6.Armstrong\nPlease Choose Number Type :");
        scanf("%d", &option);
        switch (option)
        {
        case 1:
            printf("\nPrime Number Section \n");
            for (i = 2; i < sqrt(n); i += 2)
            {
                if (n % i == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
            {
                printf("Number Is Prime");
            }
            else
            {
                printf("Number Is Not Prime");
            }
            break;

        case 2:
            printf("\nPerfect Number Section\n");

            for (i = 1; i < n; i++)
            {
                if (n % i == 0)
                {
                    fact += i;
                }
            }
            if (fact == n)
            {
                printf("Number Is Perfect");
            }
            else
            {
                printf("Number is Not Perfect");
            }
            break;
        case 3:
            printf("\nPalindrome Number Section\n");
            temp = n;
            for (i = 1; i < n; i++)
            {
                rem = n % 10;
                rev = rev * 10 + rem;
                n = n % 10;
            }
            if (temp == rev)
            {
                printf("Number is Palindrome");
            }
            else
            {
                printf("Number is Not Palindrome");
            }
            break;
        case 4:
            printf("\nFactorial Section\n");
            for (i = 1; i < n; i++)
            {
                fact *= i;
            }
            printf("Factorial is : %d", fact);
            break;

        case 5:
            printf("\nReverse Number Section\n");
            temp = n;
            for (i = 1; i < n; i++)
            {
                rem = n % 10;
                rev = rev * 10 + rem;
                n = n / 10;
            }
            printf("Original Value :%d", temp);
            printf("Reverse Value :%d", rev);
            break;

        case 6:
            printf("\nArmstrong Number Section\n");
            int count = 0;
            temp = n;
            for (i = 1; i < n; i++)
            {
                count++;
                n = n / 10;
            }

            n = temp;

            for (i = 1; i < n; i++)
            {
                rem = n % 10;
                result = result + pow(rem, count);
                n = n / 10;
            }

            if (result == temp)
            {
                printf("Number Is Armstring");
            }
            else
            {
                printf("Number is Not Armstromg");
            }

        default:
            printf("Please Enter valid Chooise .....!!!");
            break;
        }
    }
    return 0;
}
