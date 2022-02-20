#include <stdio.h>

int findSum(int m, int n, int a[][n])
{
    int sum = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j || (i + j) == (n - 1))
            {
                sum += a[i][j];
            }
        }
    }
    return sum;
}

void main()
{
    int m, n;
    printf("m = ");
    scanf("%d", &m);
    printf("n = ");
    scanf("%d", &n);

    int mat[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // scanf("%d", *(mat + i) + j); // working code

            // scanf("%d", mat + i + j); // This does not work maybe because -
            // it depends on how the OS stores a 2-dimensional matrix (it may be ROW major OR Column major)
            // We need to access the pointer to the row - (mat + i), and dereference it *(mat + i)
            // and then perform pointer addition *(mat +i) + j

            scanf("%d", &mat[i][j]);
        }
    }

    int sum = findSum(m, n, mat);
    // int sum = -1;
    printf("\nThe sum of both diagonal elements = %d\n", sum);
}