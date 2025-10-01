// Write a program that prints all numbers from N down to 1 in reverse order using a while loop.
// Input: A single integer N (1 ≤ N ≤ 1000).
// Output: Print all numbers from N to 1 in reverse order, each on a new line.

#include <stdio.h>

int main()
{
    int i, N;

    printf("Enter a number: ");
    scanf("%d", &N);

    i = N;
    while (i >= 1)
    {
        printf("%d\n", i);
        i--;
    }

    return 0;
}