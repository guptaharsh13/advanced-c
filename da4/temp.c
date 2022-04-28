#include <stdio.h>
#include <stdlib.h>

int findSum(int a, int b)
{
    return a + b;
}

void helloAndSum(int (*func_pointer)(int, int))
{
    printf("Good afternooon\n");
    printf("The sum of 5 and 7 - %d\n", func_pointer(5, 7));
}

int main()
{
    int (*func_pointer)(int, int);
    func_pointer = findSum;
    helloAndSum(func_pointer);
    return 0;
}
