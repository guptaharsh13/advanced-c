#include <stdio.h>

int prime(int num)
{
    if (num < 2)
    {
        return 0;
    }
    for (int count = 2; count <= num / 2; count++)
    {
        if (num % count == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int lower, upper;
    printf("Lower limit of the range - ");
    scanf("%d", &lower);
    printf("Upper limit of the range - ");
    scanf("%d", &upper);

    printf("\nPrime numbers in the range\n");
    for (int count = lower; count <= upper; count++)
    {
        // printf("number = %d - %d\n", count, prime(count));
        if (prime(count))
        {
            printf("%d\n", count);
        }
    }
    return 0;
}