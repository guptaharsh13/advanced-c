#include <stdio.h>
#include <stdlib.h>

int **add(int m, int n, int a1[][n], int a2[][n])
{
    int **added = (int **)calloc(m, sizeof(int *)); // make an array of pointers
    for (int count = 0; count < m; count++)
    {
        added[count] = (int *)calloc(n, sizeof(int)); // added[count] is a pointer to (count + 1) row
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            added[i][j] += a1[i][j] + a2[i][j];
        }
    }
    return added;
}

int main()
{

    printf("MATRIX 1\n\n");

    int m, n;
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);

    int mat1[m][n];

    for (int row = 0; row < m; row++)
    {
        for (int column = 0; column < n; column++)
        {
            scanf("%d", &mat1[row][column]);
        }
    }

    printf("MATRIX 2\n\n");

    int mat2[m][n];

    for (int row = 0; row < m; row++)
    {
        for (int column = 0; column < n; column++)
            scanf("%d", &mat2[row][column]);
    }

    int **added_mat = add(m, n, mat1, mat2);

    printf("\nThe sum of the 2 matrices\n\n");

    for (int row = 0; row < m; row++)
    {
        for (int column = 0; column < n; column++)
            printf("%d ", added_mat[row][column]);
        printf("\n");
    }

    return 0;
}