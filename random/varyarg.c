#include <stdarg.h>
#include <stdio.h>
#include <string.h>

float findSum(int count, ...)

{
    va_list numbers;
    va_start(numbers, count);

    float sum = 0.0;

    for (int i = 0; i < count; i++)
    {
        // char name[39];
        // strcpy(name, va_arg(names, char));
        // char name = va_arg(names, int);
        // printf("Name %d - %c\n", i + 1, name);
        sum += va_arg(numbers, double);
    }
    return sum / count;
}

void main()
{
    float sum = findSum(3, 3.1, 3.2, 3.3);
    printf("The sum  of the numbers - %f\n", sum);
}