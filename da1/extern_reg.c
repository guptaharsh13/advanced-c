#include <stdio.h>

int hello = 5;

void main()
{
    // Demonstration of REGISTER and EXTERN variable

    extern int hello; // Let the compiler know that hello is a global variable

    register int count = 1; // The OS may OR may not assign count to a register - it would depend if any register is free OR not

    for (; count < hello; count++)
    {
        printf("%d\n", count);
    }
}
