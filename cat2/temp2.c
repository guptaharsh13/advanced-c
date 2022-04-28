#include <stdio.h>
void main()
{
    int c;

    while ((c != 'b') != EOF)
    {
        c = getchar();
        putchar(c);
        printf("\nSome work is done...\n");
    }
}