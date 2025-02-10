// WAP TO MULTIPLY TWO MATRICES
#include <stdio.h>
#define MAX 10 // Define the maximum size of the matrix
void multiplyMatrices(int firstMatrix[MAX][MAX], int secondMatrix[MAX][MAX], int result[MAX][MAX], int row1, int col1, int row2, int col2)
{
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            result[i][j] = 0;
            for (int k = 0; k < col1; k++)
            {
                result[i][j] = result[i][j] + firstMatrix[i][k] * secondMatrix[k][j];
            }
        }
    }
}
int main()
{
    int firstMatrix[MAX][MAX], secondMatrix[MAX][MAX], result[MAX][MAX];
    int row1, col1, row2, col2;
    // Input dimensions of the first matrix
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &row1, &col1);
    // Input dimensions of the second matrix
    printf("Enter rows and columns for the second matrix: ");
    scanf("%d %d", &row2, &col2);
    // Check if matrix multiplication is possible
    if (col1 != row2)
    {
        printf("Error: Column of first matrix must be equal to row of second matrix.\n");
        return 0;
    }
    // Input elements of the first matrix
    printf("Enter elements of the first matrix:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            scanf("%d", &firstMatrix[i][j]);
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col1; j++)
        {
            printf("%d ", firstMatrix[i][j]);
        }
        printf("\n");
    }
    // Input elements of the second matrix
    printf("Enter elements of the second matrix:\n");
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            scanf("%d", &secondMatrix[i][j]);
        }
    }
    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", secondMatrix[i][j]);
        }
        printf("\n");
    }
    // Multiply the matrices
    multiplyMatrices(firstMatrix, secondMatrix, result, row1, col1, row2, col2);
    // Display the result
    printf("Resultant matrix after multiplication:\n");
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < col2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
