#include <stdio.h>

int main()
{

    // any string is a pointer to a character array
    // any string will always end with a null character \0

    char name[15];
    // char name[] = "harsh"; // this would work
    // name = "harsh"; // not possible
    name[0] = 'h';
    *(name + 1) = 'a';

    // printf("%p\n", name);
    // printf("%c\n", name[0]);
    // printf("%c\n", *name);
    // printf("%c\n", name[1]);
    // printf("%c\n", *(name + 1));
    printf("%c\n", name[3]);
    printf("%c\n", *(name + 3));

    // ----------------------------

    // %s format specifier for a string, and scanf would not read a space

    char my_name[35];
    printf("Enter your name - ");
    gets(my_name);
    // printf("\nYour name - %s", my_name);
    printf("\nYour name - %13.5s\n", my_name); // 13 would be filler width (13 blanks and 5 characters at the end)
                                               // means 8 blanks and 1st 5 characters of my_name
    printf("\nYour name - %.5s\n", my_name);   // only 5 characters
    puts(my_name);
    printf("\nYour name - %s\n", &my_name[1]); // just like [2:]

    // Buffer overflow - scanf and gets would overwrite memory and thus, unsasfe to use
    // You may use scanf("%5s", name);

    return 0;
}