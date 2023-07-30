#include <stdio.h>
int main()
{
    int matrix1[3][3], matrix2[3][3], sumMatrix[3][3];
    int i, j;
    printf("Enter values for the first 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++) {
            printf("Enter value for row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }
    printf("\nEnter values for the second 3x3 matrix:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter value for row %d, column %d: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("\nMatrix Sum:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

