#include <stdio.h>

int sum(int num1, int num2)
{
    return num1 + num2;
}

int hello(int (*func)(int, int))
{
    printf("From func pointer\n");
    int sum = func(3, 4);
    printf("The sum - %d\n", sum);
}

void main()
{
    int (*func_pointer)(int, int);
    func_pointer = &sum; // & is optional

    // printf("The sum - %d\n", (*func_pointer)(3, 4)); // * is not mandatory
    hello(func_pointer);
}

// function pointer points to the starting of the function (instruction set)