#include <stdio.h>
int main()
{
    int x = 100, y = 100, arr1[x][y], i, j;
    printf("Enter the Number of rows: ");
    scanf("%d", &x);
    printf("Enter the Number of columns: ");
    scanf("%d", &y);
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < x; j++)
        {
            if (j < i)
            {
                printf(" ");
            }
            else
                printf("%d", arr1[i][j]);
        }
        printf("\n");
    }
}
