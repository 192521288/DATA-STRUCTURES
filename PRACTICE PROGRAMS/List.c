#include <stdio.h>
#include <stdlib.h>

int a[50], n = 0;

int main()
{
    int ch, i, pos, x, found;

    while (1)
    {
        printf("\n\nArray Implementation of List\n");
        printf("1.create\n");
        printf("2.Insert\n");
        printf("3.Delete\n");
        printf("4.Display\n");
        printf("5.Search\n");
        printf("6.Exit\n");

        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                printf("\nEnter the number of elements: ");
                scanf("%d", &n);

                printf("Enter the array elements:\n");

                for (i = 0; i < n; i++)
                    scanf("%d", &a[i]);

                printf("\n**********Elements in the array**********\n");

                for (i = 0; i < n; i++)
                    printf("%d\t", a[i]);

                break;

            case 2:
                printf("\nEnter position and element: ");
                scanf("%d %d", &pos, &x);

                for (i = n; i >= pos; i--)
                    a[i] = a[i - 1];

                a[pos - 1] = x;
                n++;

                printf("\n**********Elements in the array**********\n");

                for (i = 0; i < n; i++)
                    printf("%d\t", a[i]);

                break;

            case 3:
                printf("\nEnter position to delete: ");
                scanf("%d", &pos);

                for (i = pos - 1; i < n - 1; i++)
                    a[i] = a[i + 1];

                n--;

                printf("\n**********Elements in the array**********\n");

                for (i = 0; i < n; i++)
                    printf("%d\t", a[i]);

                break;

            case 4:
                printf("\n**********Elements in the array**********\n");

                for (i = 0; i < n; i++)
                    printf("%d\t", a[i]);

                break;

            case 5:
                printf("\nEnter element to search: ");
                scanf("%d", &x);

                found = 0;

                for (i = 0; i < n; i++)
                {
                    if (a[i] == x)
                    {
                        printf("\nElement found at position %d", i + 1);
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                    printf("\nElement not found");

                break;

            case 6:
                printf("\nExiting...");
                exit(0);

            default:
                printf("\nInvalid choice");
        }
    }

    return 0;
}