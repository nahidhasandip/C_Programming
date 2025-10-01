// Given two integers x (base) and y (exponent), your task is to compute the value of without using any built-in power function. You must calculate it by multiplying x by itself y times.
// Input: The input contains two integers x and y. x is the base number and y is the exponent (a non-negative integer).
// Output: Print a single line in the following format: x to the power y = result

#include <stdio.h>
#include <math.h>

long long power (int x, int y)
{
    long long result = 1;

    for (int i = 1; i <= y; i++)
    {
        result = result * x;
    }
    
    return result;
}

int main()
{
    int x, y;

    printf("Enter base x: ");
    scanf("%d", &x);
    printf("Enter exponent y: ");
    scanf("%d", &y);

    printf("%d to the power %d = %lld\n", x, y, power(x, y));

    return 0;
}
