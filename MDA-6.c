#include <stdio.h>
int main()
{
    int sum = 0, x = 100, y = 100, arr1[x][y], arr2[x][y], i, j;
    printf("Enter the number of rows:");
    scanf("%d", &x);
    printf("Enter the number of columns: ");
    scanf("%d", &y);
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    } // This print the matrix.
    printf("Matrix that you are using:\n");

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    // Here is the main logic for calculating the sum of Rows
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            sum = sum + arr1[i][j];
        }
        printf("sum of %d row= %d\n", i, sum);

        sum = 0;
    }//Here is the main logic for calculating the sum of Columns
    for (j = 0; j < y; j++)
    {
        for (i = 0; i < x; i++)
        {
            sum = sum + arr1[i][j];
        }
        printf("sum of %d column =%d\n", j, sum);
        sum = 0;
    }
}
