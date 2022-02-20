#include <stdio.h>

int perfect(int num)
{
    int sum = 0;
    for (int count = 1; count < num; count++)
    {
        if (num % count == 0)
        {
            sum += count;
        }
    }
    if (sum == num && num != 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int lower, upper;
    printf("Lower limit of the range - ");
    scanf("%d", &lower);
    printf("Upper limit of the range - ");
    scanf("%d", &upper);

    printf("\nPerfect numbers in the range\n");
    for (int count = lower; count <= upper; count++)
    {
        // printf("number = %d - %d\n", count, prime(count));
        if (perfect(count))
        {
            printf("%d\n", count);
        }
    }
    return 0;
}