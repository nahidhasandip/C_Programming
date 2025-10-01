// Read a value N. Calculate and write its corresponding factorial. Factorial of N = N * (N-1) * (N-2) * (N-3) * ... * 1.
// Input: The input contains an integer value N (0 < N < 13).
// Output: The output contains an integer value corresponding to the factorial of N.

#include <stdio.h>
int main()
{
    int N, i, factorial = 1;
    
    printf("Enter a number: ");
    scanf("%d", &N);

    for (i = N; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    printf("%d\n", factorial);

    return 0;
}
