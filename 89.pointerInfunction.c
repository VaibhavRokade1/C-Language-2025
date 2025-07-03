#include <stdio.h>
#include <stdlib.h>
int n;
void accept(int *p, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
}
int main()
{
    int n, *p;
    printf("enter n ");
    scanf("%d", &n);
    p = (int *)calloc(n, sizeof(int));

    
    return 0;
}
