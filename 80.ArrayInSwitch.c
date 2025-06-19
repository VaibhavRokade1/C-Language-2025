#include <stdio.h>
int main()
{

    int a[100], i, j, key, pos, cnt, n, ch, flag;

    printf("How many numbers you wants to enter : ");
    scanf("%d", &n);

    printf("Enter Numbers : \n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    while (1)
    {
        printf("\n\n1. Display\n 2. Search\n 3. Insert\n 4. Delete\n 5. Count\n 6. Reverse\n 7. Exit\nEnter a Choice : ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            for (i = 0; i < n; i++)
                printf("%d\n", a[i]);
            break;
        case 2: // Linear Search
            flag = 0;
            printf("Enter a Number for Search : ");
            scanf("%d", &key);
            for (i = 0; i < n; i++)
            {
                if (key == a[i])
                {
                    flag = 1;
                    break;
                }
            }
            if (flag)
                printf("%d is Found !!", key);
            else
                printf("%d is Not Found !!", key);
            break;
        case 3: // 3. Insert
            printf("Enter a Postion : \n");
            scanf("%d", &pos);

            printf("Enter a key : \n");
            scanf("%d", &key);

            for (i = n; i >= pos; i--)
            {
                a[i] = a[i - 1];
            }
            a[pos - 1] = key;
            n++;

            printf("Updated Array:\n");
            for (i = 0; i < n; i++)
            {
                printf("%d", a[i]);
            }

            break;

        case 4: // 4. Delete
            printf("Enter Key To Delete : \n");
            scanf("%d", &key);

            for (i = 0; i < n; i++)
            {
                if (a[i] == key)
                {
                    for (j = i; j < n - 1; j++)
                    {
                        a[j] == a[j + 1];
                    }
                    n--;
                    i--;
                }
            }

            printf("Updated Array:\n");
            for (i = 0; i < n; i++)
            {
                printf("%d", a[i]);
            }

            break;
        case 5: // 5.Count

            printf("Enter key to count repition : \n");
            for (i = 0; i < n; i++)
            {
                if (key == a[i])
                {
                    cnt++;
                }
            }
            printf("Count of %d:\n %d", key, cnt);
        case 6: // reverse

            for (i = 0; i < n; i++)
            {
                int temp = a[i];
                a[i] = a[n - i - 1];
                a[n - i - 1] = temp;
            }
            printf("Reverse  Array:\n");
            for (i = 0; i < n; i++)
            {
                printf("%d", a[i]);
            }

            break;
        case 7:
            break;
        default:
            printf("Invalid Choice !!");
            break;
        }
    }
}