// A square matrix is a matrix that has the same number of rows and columns. You are given a square matrix of size N × N. Your task is to calculate the sum of all elements in the main diagonal of the matrix.The main diagonal is the set of elements where the row index and the column index are the same.
// Input: The input consists of: An integer N (1 ≤ N ≤ 10) — the size of the square matrix. Then N × N integers — the elements of the matrix.
// Output: Print a single line containing: Sum of diagonal elements = X.  Where X is the calculated sum of the main diagonal.

#include <stdio.h>

int main()
{
    int n, i, j;
    int matrix[10][10];
    int sum = 0;

    printf("Enter the size of square matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of %dx%d matrix:\n", n, n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);

            if (i == j)
            {
                sum = sum + matrix[i][j];
            }

        }
    }

    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}
