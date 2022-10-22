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
    // This is for finding the right diagonal.Here is main logic of this program.
    for (i = 0; i < x; i++)
    {
        for (j = 0; j <= y; j++)
        {
            if (i + j == (x - 1))
            {
                sum = arr1[i][j] + sum;
                printf("%d+", arr1[i][j]);
                break;
            }
        }
        printf("\n");
    }
    printf("%d", sum);
}
