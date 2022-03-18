#include <stdio.h>
void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    printf("Values of num1 and num2 after swapping\nnum1 : %d , num2 : %d ", *num1, *num2);
}

void main()
{
    int num1, num2;
    printf("Enter the value of num1 and num2 : ");
    scanf("%d%d", &num1, &num2);
    printf("\nValues of num1 and num2 before swapping\nnum1 : %d , num2 : %d \n", num1, num2);
    swap(&num1, &num2);
}