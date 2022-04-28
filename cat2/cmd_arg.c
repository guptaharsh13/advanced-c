#include <stdio.h>

int main(int count, char *arguments[]) // count is the number of arguments, and arguments is the actual array of arguments, including the name of the program as the first element of the array
// we should use argc and argv by default
{

    if (count == 1)
    {
        printf("No arguments were passed\n");
    }

    for (int i = 1; i < count; i++)
    {
        printf("The value at argument %d - %s\n\n", i, arguments[i]);
    }

    return 0;
}