#include <stdio.h>
int add(int x, int y)
{
    return x + y;
}
int sub(int x, int y)
{
    return x - y;
}
int mul(int x, int y)
{
    return x * y;
}
int div(int x, int y)
{
    return x / y;
}

void main()
{
    int choice;
    int x, y;
    int (*p[10])(int, int) = {add, sub, mul, div};
    printf("Enter your choice \n0-add\n1-sub\n2-mul\n3-div\n");
    scanf("%d", &choice);
    printf("Enter two numbers - ");
    scanf("%d%d", &x, &y);
    printf("%d", p[choice](x, y));
}