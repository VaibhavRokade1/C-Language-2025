#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Swaping of Two Varibles \n");

    printf("Enter A : \n");
    scanf("%d", &a);
    printf("Enter B : \n");
    scanf("%d", &b);

    printf("Before Swaping : \n A = : %d\n B = : %d", a, b);

    c = a;
    b = c;
    a = b;

    printf("\nAfter Swaping : \n A = : %d\n B = : %d", a, b);
    return 0;
}