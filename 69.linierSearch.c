#include <stdio.h>
int main(int argc, char const *argv[])
{
    int arr[100], i, n, flag = 0, key;

    printf("How many Number you want to Enter :\n");
    scanf("%d", &n);

    printf("Enter Key To Search :\n");
    scanf("%d", &key);

    printf("Accept Array:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Found ");
    }
    else
    {
        printf("Not Found ");
    }

    return 0;
}
