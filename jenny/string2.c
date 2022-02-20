#include <stdio.h>
#include <string.h>

int main()
{

    // int a[15];
    // printf("%ld", sizeof(a) / sizeof(a[0]));
    char name[15] = "harsh";
    int count = 0;
    while (name[count] != '\0')
    {
        count++;
    }
    // printf("\ncount = %d\n", count);
    // printf("length = %ld\n", strlen(name));

    char lname[] = "gupta";
    // strcat(name, lname); // buffer overflow issue
    strncat(name, lname, strlen(lname)); // 3rd argument is upto how many characters do you want to concatenate
    printf("%s\n", name);

    printf("\nComparison - %d\n", (name, lname));

    // strrev(lname);
    // printf("\nReverse - %d\n", strcmp(name, lname)); this does not work

    return 0;
}