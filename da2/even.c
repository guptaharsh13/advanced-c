#include <stdio.h>
#include <stdlib.h>

int *onlyEven(int *a, int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) % 2 == 0)
        {
            count++;
        }
    }
    static int *even;
    even = (int *)malloc(count * sizeof(int));

    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (*(a + i) % 2 == 0)
        {
            *(even + count) = *(a + i);
            count++;
        }
    }
    return even;
}

void main()
{
    int n;
    printf("Enter the number of elements - ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("INVALID INPUT");
        return;
    }

    int *a = (int *)malloc(n * sizeof(int));

    printf("\nEnter %d elements -\n", n);

    for (int count = 0; count < n; count++)
    {
        scanf("%d", (a + count));
    }

    int *even = onlyEven(a, n);

    printf("\nThe even elements -\n");

    for (int count = 0; count < sizeof(even) / sizeof(*even); count++)
    {
        printf("%d\n", *(even + count));
    }
}