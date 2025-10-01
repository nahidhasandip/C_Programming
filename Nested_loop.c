// Print a triangle of stars (*) using nested loops. The triangle must have N lines. The first line has 1 star, the second line 2 stars, and so on until line N. Each star must be followed by a space.
// Input: An integer N (1 ≤ N ≤ 100).
// Output: Print N lines. In the i-th line, print i stars, each followed by a space.

#include <stdio.h>

int main()
{
    int N, i, j;

    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
