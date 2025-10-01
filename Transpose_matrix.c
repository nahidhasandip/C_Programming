// You will be given a matrix of size R × C. Your task is to print the transpose of the matrix. The transpose of a matrix is obtained by swapping its rows and columns.
// Input: The first line contains two integers R and C (1 ≤ R, C ≤ 10), where R is the number of rows and C is the number of columns The next R lines each contain C integers representing the matrix elements. Each element fits in a 32-bit signed integer.
// Output: Print the transpose of the matrix as a C × R matrix. Each row of the output should be printed on a separate line, with the numbers in each row separated by a single space.

#include <stdio.h>

int main()
{
    int i, j, row, column;
    int a[10][10];

    printf("Enter the rows & columns: ");
    scanf("%d %d", &row, &column);

    printf("Enter the matrix of elements:\n");
    for (i = 0; i < row; i++)
        for (j = 0; j < column; j++)
            scanf("%d", &a[i][j]);

    printf("Transpose Matrix:\n");
    for (j = 0; j < column; j++)
    {
        for (i = 0; i < row; i++)
            printf("%d ", a[i][j]);
            printf("\n");
    }

    return 0;
}
