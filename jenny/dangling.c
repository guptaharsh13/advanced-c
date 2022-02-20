#include <stdio.h>

void main()
{
    // const int a = 10;
    // const int *p = &a;

    int *ptr;

    {
        int num = 15;
        ptr = &num;
        printf("Number = %d\n", *ptr);
    }
    printf("Number = %d\n", *ptr); // dangling pointer - because num was a local variable and at the end of the scope,
    // the memory may be allocated by the OS to something else. Thus, ptr is now a dangling pointer,
    // and it may display the actual value of num (but it is undefined behaviour and may display some garbage value).

    // dangling pointer is also made when we use free(). Thus, the pointer now points to a memory location, the program does not have access to
    // and the OS may allocate the memory to something else.

    // BUT you may use static - these variables have scope throughout the program

    // Any pointer that is not initialized with NULL is known as wild pointer
}