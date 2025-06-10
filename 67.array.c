#include <stdio.h>
int main()
{
    int arr[10] = {12, 23, 34, 45, 44, 36, 56, 89};
    int min = arr[0];

    for (int i = 1; i < 7; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }

    printf("Minimum Value is : %d", min);
    return 0;
}
