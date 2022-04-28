#include <stdio.h>
#include <string.h>

int main()
{

    char name[39];

    printf("Enter name - ");
    scanf("%s", name);

    int n;
    printf("Enter the number of characters that you want to copy - ");
    scanf("%d", &n);

    char temp[39];
    memset(temp, '\0', sizeof(temp));
    strncpy(temp, name, n);

    printf("\nThe value of copied string - %s\n", temp);

    return 0;
}