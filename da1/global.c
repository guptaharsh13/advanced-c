#include <stdio.h>

int random_number = 5;

void fun()
{
    // we may access the global variable from any function
    printf("\nThe random number from fun - %d\n\n", random_number);
}

void main()
{
    fun();
    printf("\nThe random number from main - %d\n\n", random_number);
}