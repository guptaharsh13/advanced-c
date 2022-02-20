#include <stdio.h>

int binarySearch(int a[], int lower, int upper, int element)
{

    if (lower > upper)
    {
        return -1;
    }

    int mid = (lower + upper) / 2;
    if (element < a[mid])
    {
        binarySearch(a, lower, mid - 1, element);
    }
    else if (element > a[mid])
    {
        binarySearch(a, mid + 1, upper, element);
    }
    else
    {
        return element;
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

    int se;
    printf("Enter search element - ");
    scanf("%d", &se);

    int found = binarySearch(numbers, 0, n - 1, se);
    if (found == se)
    {
        printf("\nThe search element is found\n");
    }
    else
    {
        printf("\nThe search element was not found\n");
    }
}