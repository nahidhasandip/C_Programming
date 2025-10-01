// Write a program that reads an integer N (1 ≤ N ≤ 10⁸) and calculates the sum of all integers from 1 to N.
// Input: A single integer N.
// Output: Print the sum of all integers from 1 to N.

#include <stdio.h>

int main()
{
    int n, i;
    long long sum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("Sum from 1 to %d is: %lld\n", n, sum);

    return 0;
}
