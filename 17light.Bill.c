#include <stdio.h>
int main(int argc, char const *argv[])
{
    float unit, amount = 0;
    if (unit >= 400 && unit < 300)
    {
        amount += (100 * 15);
        unit -= 100;

        if (unit <= 300 && unit > 200)
        {
            amount += (100 * 12);
            unit -= 100;
            if (unit <= 200 && unit > 100)
            {
                amount += (100 * 10);
                unit -= 100;
                if (unit <= 100 && unit > 0)
                {
                    amount += (unit * 8);
                    printf("Total Amount to pay :%.2f", amount);
                }
            }
        }
    }

    return 0;
}
