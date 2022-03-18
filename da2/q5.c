#include <stdio.h>

void sort(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void display(int p[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", p[i]);
    }
    printf("\n");
}

void main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    int a[n];
    for (int count = 0; count < n; count++)
    {
        scanf("%d", &a[count]);
    }
    void (*func_pointer)(int[], int) = display;
    printf("Unsorted array\n");
    func_pointer(a, n);
    func_pointer = sort;
    func_pointer(a, n);
    func_pointer = display;
    printf("\nSorted Array\n");
    func_pointer(a, n);
}