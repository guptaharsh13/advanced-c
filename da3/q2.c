#include <stdio.h>
#include <string.h>

typedef struct Employee
{
    char name[39];
    char id_number[39];
    char address[39];
    char desgination[39];
    double salary;

} employee;

void computeMax(employee *e, int n)
{
    employee *temp;
    int maximum = 0;

    for (int i = 0; i < n; i++)
    {
        if (maximum < e->salary)
        {
            maximum = e->salary;
            temp = e;
        }
    }

    printf("\n\nEmployee Details\n\n");
    printf("Employee Name - %s\n", temp->name);
    printf("ID number - %s\n", temp->id_number);
    printf("Address - %s\n", temp->address);
    printf("Designation - %s\n", temp->desgination);
    printf("Salary - %.2lf\n", temp->salary);
}

void input(employee *e, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("\n\nEmployee number %d\n\n", i + 1);
        printf("Enter Employee Name - ");
        scanf("%s", e->name);
        printf("Enter ID number - ");
        scanf("%s", e->id_number);
        printf("Enter address - ");
        scanf("%s", e->address);
        printf("Enter designation - ");
        scanf("%s", e->desgination);
        printf("Enter Salary - ");
        scanf("%lf", &e->salary);
        e++;
    }

    computeMax(e, n);
}
void main()
{
    int n;
    printf("Enter the number of employees - \n");
    scanf("%d", &n);
    employee e[n];
    input(e, n);
}