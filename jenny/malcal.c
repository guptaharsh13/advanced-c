#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n;
    printf("Enter a number - ");
    scanf("%d", &n);

    // printf("The number is %d\n", n);
    int mat[n];

    // malloc returns a void pointer (a void pointer cannot be derefrenced and is only a generic pointer type)
    // for example - malloc is a generic function that is used to allocate memory, and thus, returns a void pointer
    // to use a void pointer, it must be type-casted into another pointer type (for example - int*)

    // void* malloc(size)

    // Thus, example -

    int *some_pointer = (int *)malloc(n * sizeof(int));   // make an int array of length - 5
    int *another_pointer = (int *)calloc(n, sizeof(int)); // same, but 0 as each element

    // free(some_pointer);
    // free(another_pointer);
    // you should only access an address that has been allocated to you, otherwise it may result in some random output

    some_pointer = (int *)realloc(some_pointer, 2 * sizeof(some_pointer)); // realloc also returns a void pointer
    some_pointer = (int *)realloc(some_pointer, 0);                        // same as free
    some_pointer = (int *)realloc(NULL, n * sizeof(int));                  // same as malloc - in line number 22

    printf("\nmalloc pointer\n");
    for (int count = 0; count < n * 2; count++)
    {
        *(some_pointer + count) = count;
        printf("%d\n", *(some_pointer + count));
    }

    printf("\ncalloc pointer\n");
    for (int count = 0; count < n; count++)
    {
        printf("%d\n", another_pointer[count]);
    }

    return 0;
}