#include <stdio.h>
#include <stdlib.h>

int main()
{

    char num[39];

    printf("Enter some string - ");
    scanf("%s", num);

    float temp = atof(num);

    printf("\nThe number has been converted to float - %f\n", temp);

    return 0;
}