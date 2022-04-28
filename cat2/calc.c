#include <stdio.h>
#include <stdlib.h>

void main(int count, char *arguments[])
{
    if (count == 1)
    {
        printf("No arguments found\n");
        return;
    }
    char temp[] = "3";
    printf("Number - %d", atoi(temp));
}