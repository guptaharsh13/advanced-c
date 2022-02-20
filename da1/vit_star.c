#include <stdio.h>

int main()
{
    int i = 0;
    int j = 6;
    for (int row = 0; row < 4; row++)
    {
        for (int column = 0; column < 15; column++)
        {
            if (row == column)
            {
                printf("*");
            }
            else if (row == i && column == j)
            {
                printf("*");
                i = i + 1;
                j = j - 1;
            }
            else if (row == 0 && column > 7 && column != 11)
            {
                printf("*");
            }
            else if (row == 3 && column > 7 && column < 11)
            {
                printf("*");
            }
            else if (row == 3 && column == 13)
            {
                printf("*");
            }
            else if ((row == 1 && (column == 9 || column == 13)) || row == 2 && (column == 9 || column == 13))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}