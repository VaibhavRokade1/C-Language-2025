#include <stdio.h>
int main()
{
    int arr[10] = {12, 23, 34, 45, 44, 36, 56, 89};
    int max = arr[0];

    for (int i = 1; i < 7; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }

    printf("Maximum Value is :%d", max);
    return 0;
}
