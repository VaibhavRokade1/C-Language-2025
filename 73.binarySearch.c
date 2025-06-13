#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, j, n, a[100], flag, low, high, key, mid;
    printf("How many number you wants to Enter :\n");
    scanf("%d", &n);

    printf("Accept Array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    flag = 1;
    i = 0;
    while (flag)
    {
        flag = 0;
        for (j = 0; j < n - j - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }

        i++;
    }

    printf("Sorted array is : ");
    for (i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }

    
    flag = 0;
    low = 0;
    high = n - 1;
    while (low <= high)
    {
        mid = (low - high) / 2;
        if (a[mid] == key)
        {
            flag = 1;
            break;
        }
        else if (a[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if (flag)
    {
        printf("Found");
    }
    else
    {
        printf("Not Found");
    }

    return 0;
}
