#include <stdio.h>
int main(int argc, char const *argv[])
{
    int i, cnt = 0, a[100], n, key;

    printf("How many Numbers you want to enter :\n");
    scanf("%d", &n);

    printf("Enter a Key :\n");
    scanf("%d", &key);

    printf("Accept Array :\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (key == a[i])
        {
            cnt++;
        }
    }

    if (cnt == 0)
    {
        printf("Key Not Found");
    }
    else
    {
        printf("Number Repeat Count is : %d", cnt);
    }

    return 0;
}
