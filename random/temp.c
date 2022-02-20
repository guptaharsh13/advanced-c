#include <stdio.h>

void func(int n, int *a)
{
    for (int count = 0; count < n; count++)
    {
        a[count] = 0;
    }
}

int main()
{

    int n = 3;
    int num[] = {6, 4, 2};
    // func(5, num);

    for (int count = 1; count < n; count++)
    {
        if (num[count] > num[count - 1])
        {
            continue;
        }
        int pos = count;
        int temp = num[count];
        while (pos > 0 || num[pos - 1] > temp)
        {
            num[pos] = num[pos - 1];
            pos--;
        }
        num[pos] = temp;
    }

    for (int count = 0; count < n; count++)
    {
        printf("%d ", num[count]);
    }

    return 0;
}