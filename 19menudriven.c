#include <stdio.h>
int main()
{
    float num1, num2;
    int op;
    printf("Enter a two Numbers to Perform Opearation :\n");
    scanf("%f%f", &num1, &num2);

    printf("--------------Opration Values-------------");
    printf("\n- 1)Addition      : 1                    -");
    printf("\n- 2)Substraction  : 2                    -");
    printf("\n- 3)Multipication : 3                    -");
    printf("\n- 4)Division      : 4                    -");
    printf("\n------------------------------------------\n");

    printf("Enter a Opration Number :\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("Addition is %.0f", num1 + num2);
        break;
    case 2:
        printf("Substraction is %.0f", num1 - num2);
        break;
    case 3:
        printf("Multipication is %.0f", num1 * num2);
        break;
    case 4:
        printf("Division is %.0f", num1 / num2);
        break;

    default:
        printf("Please Enter a valid opration Number ~~~~~!!!");
        break;
    }

    return 0;
}
