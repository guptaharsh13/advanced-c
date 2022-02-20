#include <stdio.h>

int main()
{
    int m, n;
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);
    int mat[m][n];

    printf("\nElements of the matrix - \n");

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int ans = 1;
    for (int row = 0; row < m; row++)
    {
        if (ans == 0)
        {
            break;
        }
        for (int column = 0; column < n; column++)
        {
            if ((row == column && (mat)[row][column] != 1) || (row != column && (mat)[row][column] != 0))
            {
                ans = 0;
                break;
            }
        }
    }
    if (ans)
    {
        printf("\nThe matrix is an identity matrix\n");
    }
    else
    {
        printf("\nThe matrix is not an identity matrix\n");
    }

    return 0;
}