#include <stdio.h>
#include <string.h>

void invert(char s[], int n)
{
    for (int count = 0; count < n / 2; count++)
    {
        char temp = s[count];
        s[count] = s[n - count - 1];
        s[n - count - 1] = temp;
    }
}

void main()
{
    char s[15];
    printf("Enter something - ");
    scanf("%s", s);

    invert(s, strlen(s));

    printf("\nYour reversed string - %s\n", s);
}