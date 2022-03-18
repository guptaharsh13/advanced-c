#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char reg_number[9];
    char name[39];
    char program[39];
    int *marks;
};

float findAvg(struct Student student)
{
    int sum = 0;
    for (int count = 0; count < 5; count++)
    {
        sum += *(student.marks + count);
    }
    return sum / 5.0;
}

void main()
{
    int n;
    printf("Enter the number of elements - ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("INVALID INPUT");
        return;
    }

    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    for (int count = 0; count < n; count++)
    {
        struct Student student;
        printf("\nEnter reg number - ");
        scanf("%s", &student.reg_number);
        printf("Enter name - ");
        scanf("%s", &student.name);
        printf("Enter program - ");
        scanf("%s", &student.program);
        printf("Enter marks in 5 subjects -\n");
        int *marks = (int *)malloc(5 * sizeof(int));
        for (int i = 0; i < 5; i++)
        {
            scanf("%d", marks + i);
        }
        student.marks = marks;
        *(students + count) = student;
    }

    for (int count = 0; count < n; count++)
    {
        printf("\nThe average for student %d - %2f\n", count + 1, findAvg(*(students + count)));
    }
}