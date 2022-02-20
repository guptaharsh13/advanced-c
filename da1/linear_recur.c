#include <stdio.h>

int linearSearch(int element, int a[], int index, int n)
{
    if (index == n)
    {
        return -1;
    }
    if (a[index] == element)
    {
        return element;
    }
    linearSearch(element, a, index + 1, n);
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
    int found = linearSearch(se, numbers, 0, n);
    if (found == se)
    {
        printf("\nThe search element is found\n");
    }
    else
    {
        printf("\nThe search element was not found\n");
    }
}