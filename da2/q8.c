#include <stdio.h>
int *findMax(int *num1, int *num2)
{
    if (*num1 > *num2)
    {
        return num1;
    }
    else
    {
        return num2;
    }
}

void main()
{
    int num1, num2;
    printf("Enter the value of num1 and num2 - ");
    scanf("%d%d", &num1, &num2);
    int *l;
    l = findMax(&num1, &num2);
    printf("Maximum - %d", *l);
}