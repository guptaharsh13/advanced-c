#include <stdio.h>

int main()
{

    int num = 10;
    int *p, q;
    p = &num;
    // *q = anything; would be invalid

    int a[] = {1, 2, 3};
    int *temp_pointer = a;
    temp_pointer += 2;
    printf("\n%p\n", a);
    printf("\nvalue = %d\n", *a);
    printf("\n%p\n", temp_pointer);
    printf("\nvalue = %d\n", *temp_pointer);

    // pointer subtraction - the number of index between the 2 pointers
    printf("\ndifference = %ld\n", (temp_pointer - a));

    // VOID POINTER

    void *void_pointer = &num; // void pointers may store the address of any datatype
    // printf("Number = %d\n", *void_pointer); // we cant dereference a void pointer directly
    // Because the compiler must know about the datatype of the variable / constant referenced by the pointer
    // The compiler must know the number of bytes from the base address that it should access

    // Thus,
    printf("Number = %d\n", *(int *)void_pointer); // type-cast the void pointer

    // NULL POINTER

    int *null_pointer = NULL; // NULL means 0 in C - it wont point to anything and you cant dereference it
    // int *null_pointer = 0; // same as above
    printf("NULL = %p\n", null_pointer); // look at the output - interesting stuff
    printf("NULL = %d\n", null_pointer); // would give you a warning - but output would be 0

    // mostly used to initialize the pointer and then perform error handling - if (some_pointer != NULL)

    return 0;
}