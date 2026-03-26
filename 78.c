#include <stdio.h>
int main()
{
    int m, n, p, q;
    printf("Enter number of rows in first matrix: ");
    scanf("%d", &m);
    printf("Enter number of columns in first matrix: ");
    scanf("%d", &n);
    printf("Enter number of rows in second matrix: ");
    scanf("%d", &p);
    printf("Enter number of columns in second matrix: ");
    scanf("%d", &q);
    if (n != p)
    {
        printf("Matrix multiplication is not possible\n");
        return 0;
    }
    int a[m][n];
    int b[p][q];
    int ab[m][q];

    printf("Enter elements of First Matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of Second Matrix:\n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            ab[i][j] = 0;
            for (int k = 0; k < n; k++)
            {
                ab[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("Result matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", ab[i][j]);
        }
        printf("\n");
    }
    return 0;
}