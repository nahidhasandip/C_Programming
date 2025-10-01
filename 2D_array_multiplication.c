// You are given a matrix '3 x 3' (2D array) of size N × M. Your task is to calculate the multiplication of all elements of the matrix.
// Input:  The first line contains two integers N and M — the number of rows and columns of the matrix. The next N lines each contain M integers, representing the elements of the matrix. Each element is an integer between -1000 and 1000.
// Output: Print a single integer, the multiplication of all elements in the matrix.

#include <stdio.h>

int main()
{
    int i, j;
    int matrix[3][3];
    int Multiplication = 1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &matrix[i][j]);
            Multiplication = Multiplication * matrix[i][j];
        }
    }

    printf("%d\n", Multiplication);

    return 0;
}
