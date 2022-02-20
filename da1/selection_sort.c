#include <stdio.h>

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[j] < a[pos])
                pos = j;
        }
        if (pos != i)
        {
            int temp = a[i];
            a[i] = a[pos];
            a[pos] = temp;
        }
    }
}

void main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);

    int numbers[n];
    for (int count = 0; count < n; count++)
    {
        scanf("%d", &numbers[count]);
    }

    selectionSort(numbers, n);

    printf("\nNumbers in sorted order\n");
    for (int count = 0; count < n; count++)
    {
        printf("%d\n", numbers[count]);
    }
}