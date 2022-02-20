#include <stdio.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int a[], const int left, const int right)
{
    int pivot_element = a[right];
    int i = left - 1;
    int j = left;
    for (j = left; j <= right - 1; j++)
    {
        if (a[j] < pivot_element)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[right]);
    return (i + 1);
}
int partitionL(int a[], const int left, const int right)
{
    int pivot_element = a[right];
    int i = left - 1;
    int j = left;
    for (j = left; j <= (right - 1); j++)
    {
        if (a[j] > pivot_element)
        {
            i++;
            swap(&a[i], &a[j]);
        }
    }
    swap(&a[i + 1], &a[right]);
    return (i + 1);
}

int quickSelect(int a[], const int left, const int right, const int k)
{
    // If k is smaller than number of elements in a

    if (k > 0 && k <= right - left + 1)
    {
        // Partition the a around last element and get position of pivot_element element in sorted a
        int index = partition(a, left, right);
        // If position is same as k
        if (index - left == k - 1)
            return a[index];
        // If position is more, recur for left suba
        if (index - left > k - 1)
            return quickSelect(a, left, index - 1, k);
        // Else call for right suba
        return quickSelect(a, index + 1, right, k - index + left - 1);
    }
}
// This function returns the kth largest value
int quickSelectLarge(int a[], const int left, const int right, const int k)
{
    // If k is smaller than number of elements in a
    if (k > 0 && k <= (right - left + 1))
    {
        // Partition the a around last element and get position of pivot_element element in sorted a
        int index = partitionL(a, left, right);
        // If position is same as k
        if (index - left == k - 1)
            return a[index];
        // If position is more, recur
        // for left suba
        if (index - left > k - 1)
            return quickSelectLarge(a, left, index - 1, k);
        // Else call for right suba
        return quickSelectLarge(a, index + 1, right, k - index + left - 1);
    }
}
int main()
{
    int n;
    printf("n = ");
    scanf("%d", &n);
    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int k;
    printf("k = ");
    scanf("%d", &k);

    const int smallest = quickSelect(a, 0, n - 1, k);
    const int largest = quickSelectLarge(a, 0, n - 1, k);

    printf("kth smallest element - %d\n", smallest);
    printf("kth largest element - %d\n", largest);
    return 0;
}