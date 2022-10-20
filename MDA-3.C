#include <stdio.h>
int main()
{
    int k, n = 100, m = 100, arr1[n][m], arr2[n][m], i, j;
    printf("enter the number of rows:");
    scanf("%d", &n);
    printf("enter the number of column: ");
    scanf("%d", &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("Given matrix is: \n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j <= n; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
        printf("\n");
    }
    printf("Transpose of the above matrix is:\n");
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
}
