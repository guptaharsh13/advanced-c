#include <stdio.h>
#include <stdlib.h>

int findMaxMin(int *a, int n, int max)
{

    int res = *a;

    for (int count = 1; count < n; count++)
    {
        int condition = max ? *(a + count) > res : *(a + count) < res;
        if (condition)
        {
            res = *(a + count);
        }
    }
    return res;
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

    int max = findMaxMin(a, n, 1);
    int min = findMaxMin(a, n, 0);

    printf("\nThe maximum element - %d\n", max);
    printf("\nThe minimum element - %d\n", min);
}