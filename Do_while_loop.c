// Write a C program that prints numbers from 1 to 10 using a do-while loop.
// Input: There is no input for this program.
// Output: The program should print numbers from 1 to 10, each on a new line.

#include <stdio.h>

int main()
{
    int i = 1;

    do
    {
        printf("%d\n", i);
        i++;
    } 
    while (i <= 10);

    return 0;
}
