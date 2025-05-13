#include <stdio.h>
int main()
{
    int eId;
    char eName[100];
    float bs, tax, hra, da, totalSalary;

    printf("Enter a Employee Id:\n ");
    scanf("%s", eId);
    printf("Enter a Employee Name:\n ");
    scanf("%s", eName);
    printf("Enter a Employee BS:\n ");
    scanf("%s", bs);
    printf("Enter a Employee Tax:\n ");
    scanf("%s", tax);
    printf("Enter a Employee HRA:\n ");
    scanf("%s", hra);
    printf("Enter a Employee DA:\n ");
    scanf("%s", da);

    // logic

    totalSalary = (bs * (da + (hra - tax)) / 100);

    printf("Hey %s\n", eName);
    printf("Your Salary of Employee : %f", totalSalary);

    return 0;
}
