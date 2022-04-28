#include <stdio.h>
#include <stdlib.h>

static volatile int WAIT;
void fun(void)
{
    WAIT = 0;
    while (WAIT != 255)
        ;
    printf("%d", WAIT);
}

int main(int count, char *arguments[], char *envs[])
{

    // for (int i = 0; envs[i] != NULL; i++)
    // {
    //     printf("- %s\n", envs[i]);
    // }

    // for (int count = 1; count <= 100; ++count)
    // {
    //     printf("%d\n", count);
    // }
    // fun();

    return 0;
}