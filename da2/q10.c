#include <stdio.h>

typedef struct student
{ // Type in Structs
    char name[39];
    char reg_number[9];

} stud;

typedef struct time
{
    unsigned int hours : 5;
    unsigned int minutes : 6;
    unsigned int seconds : 6;
} time;

void main()
{
    stud s;
    printf("Enter your name - ");
    scanf("%s", s.name);
    printf("Enter your Reg Number - ");
    scanf("%s", s.reg_number);
    printf("Name - %s\nReg Number - %s\n", s.name, s.reg_number);
    typedef int integer; // typedef in built-in variables
    integer x, y;
    x = 13;
    y = 25;
    printf("Sum - %d\n", x + y);
    time t = {23, 45, 45};
    printf("Time - %d : %d : %d ", t.hours, t.minutes, t.seconds);
}