// Take an integer input and check whether it is positive, negative or zero.If the number is positive, output "POSITIVE".If the number is negative, output "NEGATIVE".If the number is zero, output "ZERO".
// Input :An integer N (−1000 ≤ N ≤ 1000) is given as input.
// Output:If the number N is positive, output "POSITIVE".If the number N is negative, output "NEGATIVE".If the number N is zero, output "ZERO".

#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
    {
        printf("%d is Positive.\n", num);
    }

    else if (num < 0)
    {
        printf("%d is Negative.\n", num);
    }

    else
    {
        printf("%d is Zero.\n", num);
    }

    return 0;
}