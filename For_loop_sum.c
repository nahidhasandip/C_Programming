// Write a program that reads an integer N (1 ≤ N ≤ 10⁸) and calculates the sum of all integers from 1 to N.
// Input: A single integer N.
// Output: Print the sum of all integers from 1 to N.

#include <stdio.h>

int main()
{
    int i, num;
    long long sum = 0;

    printf("Enter the numbers: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }

    printf("Sum from 1 to %d is: %lld\n", num, sum);

    return 0;
}
