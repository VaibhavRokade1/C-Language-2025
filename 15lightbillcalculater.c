#include <stdio.h>
int main()
{
    float unit;
    float result = 0;
    float price = 8;

    printf("Enter a Unit : \n");
    scanf("%f", &unit);
    if (unit >= 1 && unit <= 100)
    {
        result += unit * 5;
        printf("Total Bill Is : %.2f", result);
    }
    else if (unit > 100 && unit <= 1000)
    {
        for (int i = 101; i <= unit; i++)
        {
            if (i % 100 == 0)
            {
                result += i * price;
                i += 100;
                price += 3;
            }
            else if (i == unit)
            {
                result += i * price;
                printf("Total bill to pay : %.2f", result);
                break;
            }
        }
    }

    return 0;
}
