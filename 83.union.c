#include <stdio.h>
int main()
{
    int a[100], b[100], n1, n2;
    int uni[200], un, intersection[100], in;
    int i, k, j;

    // Insertion
    printf("How many numbers you want to enter in 1st Array : ");
    scanf("%d", &n1);

    printf("Enter a Numbers : \n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("How many numbers you want to enter in 1st Array : ");
    scanf("%d", &n2);
    printf("Enter a Numbers : \n");
    for (i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    // Make Arrays Unique

    for (i = 0; i < n1; i++)
    {
        for (j = i + 1; j < n1; j++)
        {
            if (a[i] == a[j])
            {
                for (k = j; k < n1 - 1; k++)
                    a[k] = a[k + 1];
                n1--;
                j--;
            }
        }
    }

    for (i = 0; i < n2; i++)
    {
        for (j = i + 1; j < n2; j++)
        {
            if (b[i] == b[j])
            {
                for (k = j; k < n2 - 1; k++)
                    b[k] = b[k + 1];
                n2--;
                j--;
            }
        }
    }

    un = 0;

    for (i = 0; i < n1; i++, un++)
    {
        uni[un] = a[i];
    }

    for (i = 0; i < n2; i++, un++)
    {
        uni[un] = b[i];
    }

    return 0;


    
}
