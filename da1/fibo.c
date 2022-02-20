#include <stdio.h>

int main()
{

    int num;
    printf("num = ");
    scanf("%d", &num);

    int a = 0, b = 1, c = 0;

    if (num == a || num == b)
    {
        printf("\nThe number belongs to the Fibonacci series\n");
        return 0;
    }

    while (1)
    {
        c = a + b;
        if (num == c)
        {
            printf("\nThe number belongs to the Fibonacci series\n");
            return 0;
        }
        if (num < c)
        {
            break;
        }
        a = b;
        b = c;
    }

    printf("\nThe number does not belongs to the Fibonacci series\n");

    return 0;
}