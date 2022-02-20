#include <stdio.h>

void insertionSort(int n, int a[], int ascending)
{
    if (n < 1)
    {
        return;
    }
    if (ascending)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
        return;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void display(int n, int a[])
{
    printf("\n");
    for (int count = 0; count < n; count++)
    {
        printf("%d ", a[count]);
    }
    printf("\n");
}

int main()
{

    int n;
    printf("n = ");
    scanf("%d", &n);

    int numbers[n], even_count = 0, odd_count = 0;

    for (int count = 0; count < n; count++)
    {
        scanf("%d", &numbers[count]);
        if (numbers[count] % 2 == 0)
        {
            even_count++;
            continue;
        }
        odd_count++;
    }

    int even[even_count];
    int odd[odd_count];
    even_count = 0, odd_count = 0;

    for (int count = 0; count < n; count++)
    {
        if (numbers[count] % 2 == 0)
        {
            even[even_count] = numbers[count];
            even_count++;
            continue;
        }
        odd[odd_count] = numbers[count];
        odd_count++;
    }

    insertionSort(even_count, even, 1);
    insertionSort(odd_count, odd, 0);

    printf("\nNumbers in sorted format\n");

    int count;
    for (count = 0; count < even_count; count++)
    {
        numbers[count] = even[count];
    }
    for (; count < even_count + odd_count; count++)
    {
        numbers[count] = odd[count - even_count];
    }

    display(n, numbers);

    return 0;
}