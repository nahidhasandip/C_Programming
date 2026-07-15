// Write a program that reads an integer N and prints the square of that number. Assigning its result to the variable X. The square of a number is calculated as N × N.
// Input: An integer N (–10⁴ ≤ N ≤ 10⁴).
// Output: Print a single line in the format:

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("X = %d\n", num * num );    // X = sqrt (num)

    return 0;
}
