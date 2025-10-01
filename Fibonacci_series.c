// The following sequence of numbers 0 1 1 2 3 5 8 13 21 .... is known as the Fibonacci Sequence. Thereafter, each number after the first 2 is equal to the sum of the previous two numbers. Write an algorithm that reads an integer N and that print the first N numbers of this sequence.
// Input: The input file contains an integer number N.
// Output: The numbers ​​should be printed on the same line, separated by a blank space. There is no space after the last number.

#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}
