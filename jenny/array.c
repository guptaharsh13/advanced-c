#include <stdio.h>

void fun(int[]);

void main()
{

    char *name = "harsh";

    int a[] = {1, 2, 3};

    int *p = a;
    p++; // working absolutely fine

    fun(a);
    // printf("The value in a = %d\n", *a);
    printf("The value in a = %d\n", a[0]);
    printf("The value in p = %d\n", *p);
}

void fun(int *a) // always remember - This would be a local pointer variable
{
    a = a + 2;
    // a[0] = 3;
    *a = 5;
}