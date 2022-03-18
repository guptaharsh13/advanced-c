#include <stdio.h>
#include <stdarg.h>

int findSum(int count, ...)
{
    int sum = 0;
    va_list a;
    va_start(a, count);
    for (int i = 0; i < count; i++)
    {
        sum += va_arg(a, int);
    }
    return sum;
}

void main()
{
    printf("%d\n", findSum(2, 3, 25));
    printf("%d\n", findSum(3, 3, 25, 13));
    printf("%d\n", findSum(4, 3, 25, 15, 23));
}