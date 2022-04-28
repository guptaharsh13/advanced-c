#include <stdio.h>
struct customer
{
    int account_no;
    char name[39];
    int balance;
};

void input(struct customer[], int);
void display(struct customer[], int);
int search(struct customer[], int, int);
void deposit(struct customer[], int, int, int);
void withdraw(struct customer[], int, int, int);

int main()
{
    struct customer data[20];
    int n, choice, account_no, amount, index;
    printf("Banking System\n\n");
    printf("Number of customers - ");
    scanf("%d", &n);
    input(data, n);

    do
    {
        printf("\nBanking System Menu :\n");
        printf("1 - display all records\n");
        printf("2 - search a record\n");
        printf("3 - deposit money\n");
        printf("4 - withdraw money\n");
        printf("0 - EXIT\n");
        printf("\nEnter choice(from 0 - 4) - ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display(data, n);
            break;
        case 2:
            printf("Enter account number - ");
            scanf("%d", &account_no);
            index = search(data, n, account_no);
            if (index == -1)
            {
                printf("Record not found");
            }
            else
            {
                printf("A/C Number: %d\nName: %s\nBalance: %d\n",
                       data[index].account_no, data[index].name,
                       data[index].balance);
            }
            break;
        case 3:
            printf("Enter account number - ");
            scanf("%d", &account_no);
            printf("Enter amount to deposit - ");
            scanf("%d", &amount);
            deposit(data, n, account_no, amount);
            break;
        case 4:
            printf("Enter account number - ");
            scanf("%d", &account_no);
            printf("Enter amount to withdraw - ");
            scanf("%d", &amount);
            withdraw(data, n, account_no, amount);
        }
    } while (choice != 0);
    return 0;
}
void input(struct customer customers[39], int s)
{
    int i;
    for (i = 0; i < s; i++)
    {
        printf("\n\nRecord %d\n\n", i + 1);
        printf("\nEnter account_no - ");
        scanf("%d", &customers[i].account_no);
        printf("Enter name - ");
        scanf("%s", customers[i].name);
        customers[i].balance = 0;
    }
}
void display(struct customer customers[39], int s)
{
    int i;
    printf("\n\nA/c No\tName\tBalance\n");
    for (i = 0; i < s; i++)
    {
        printf("%d\t%s\t%d\n", customers[i].account_no, customers[i].name,
               customers[i].balance);
    }
}
int search(struct customer customers[39], int s, int number)
{
    int i;
    for (i = 0; i < s; i++)
    {
        if (customers[i].account_no == number)
        {
            return i;
        }
    }
    return -1;
}
void deposit(struct customer customers[], int s, int number, int amt)
{
    int i = search(customers, s, number);
    if (i == -1)
    {
        printf("Record not found");
    }
    else
    {
        customers[i].balance += amt;
    }
}
void withdraw(struct customer customers[], int s, int number, int amt)
{
    int i = search(customers, s, number);
    if (i == -1)
    {
        printf("Record not found\n");
    }
    else if (customers[i].balance < amt)
    {
        printf("Balance not met\n");
    }
    else
    {
        customers[i].balance -= amt;
    }
}