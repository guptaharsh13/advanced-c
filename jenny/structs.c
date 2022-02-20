#include <stdio.h>
#include <string.h>

void main()
{

    struct student
    {
        int id;
        char name[15];
    };

    struct student harsh;
    strcpy(harsh.name, "Harsh Gupta");
    harsh.id = 5;

    // struct student jatin = {3, "Jatin Fulwani"};
    // struct student jatin = {3}; // known as partial initialization (name would be defined as NULL and any int, double... values would be defined as 0, 0.0, ... respectively)
    // Remember that order matters

    struct student jatin;
    // jatin = harsh; // valid enough

    // printf("Enter name - ");
    // scanf("%s", jatin.name);
    // printf("Enter ID - ");
    // scanf("%d", &jatin.id);

    printf("Name - %s\n", harsh.name);
    printf("ID - %d\n", harsh.id);
    printf("Name - %s\n", jatin.name);
    printf("ID - %d\n", jatin.id);

    // ------------------------------

    // structure is always a pointer to a memory location such that the memory localtion contains the member variables of the structure.

    // if we make an array of structures, then each index (element) is a pointer to a memory location such that the memory localtion contains the member variables of the structure.

    // ------------------------------

    struct student *pointer;
    pointer = &harsh;

    printf("\nAccess name from pointer - %s\n", pointer->name);
    printf("\nAccess name from pointer - %s\n", (*pointer).name);
}