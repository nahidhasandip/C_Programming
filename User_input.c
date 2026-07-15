// An integer will be given as input. Your task is to take a number input from the user without any additional changes to that input integer and display it as output.
// Input: An integer N will be given on one line.
// Output: Display the input number N as output in the same way without any changes.

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("You entered: %d\n", num);

    return 0;
}