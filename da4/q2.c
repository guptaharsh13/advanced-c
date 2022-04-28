#include <stdio.h>
#include <math.h>

int main()
{

    float num;
    printf("Enter a number - ");
    scanf("%f", &num);

    num = floor(num);

    printf("The number after rounding off - %f", num);

    return 0;
}