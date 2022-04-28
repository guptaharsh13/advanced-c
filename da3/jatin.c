#include <stdio.h>
#include <string.h>
typedef struct employee
{
    char name[30];
    char identification_number[30];
    char address[30];
    char desgination[30];
    double salary;
} employee;
void display(struct employee e)
{
    printf("Employee Name: %s \n", e.name);
    printf("Identification number: %s \n", e.identification_number);
    printf("Address : %s \n", e.address);
    printf("Designation : %s \n", e.desgination);
    printf("Salary : %.2lf \n", e.salary);
}
void get(struct employee e)
{
    printf("Enter Employee Name: \n");
    scanf("%s", e.name);
    printf("Enter identification number: \n");
    scanf("%s", e.identification_number);
    printf("Enter address : \n");
    scanf("%s", e.address);
    printf("Enter designation : \n");
    scanf("%s", e.desgination);
    printf("Enter Salary : \n");
    scanf("%lf", &e.salary);
    display(e);
}
int main()
{
    employee e;
    get(e);
    return 0;
}