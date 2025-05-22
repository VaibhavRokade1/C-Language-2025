#include <stdio.h>
int main()
{
    int num1, num2;
    char ch;
    printf("Enter a two Numbers to Perform Opearation :\n");
    scanf("%d%c%d", &num1, &ch, &num2);
    printf("Ch : %c \n", ch);
    switch (ch)
    {
    case '+':
        printf("Addition is %d + %d =%d", num1, num2, num1 + num2);
        break;
    case '-':
        printf("Subtraction is %d + %d =%d", num1, num2, num1 - num2);
        break;
    case '*':
        printf("Multipication is %d + %d =%d", num1, num2, num1 * num2);
        break;
    case '/':
        printf("Division is %d + %d =%d", num1, num2, num1 / num2);
        break;

    default:
        printf("Please Enter a valid oprator ~~~~~!!!");
        break;
    }

    return 0;
}
