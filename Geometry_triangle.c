// Read three point floating values (A, B and C) and verify if is possible to make a triangle with them. If it is possible, calculate the perimeter of the triangle and print the message
// Input: The input file has three floating point numbers.
// Output: Print the result with one digit after the decimal point.

#include <stdio.h>
int main()
{
    double a, b, c;

    printf("Enter three floating numbers: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b)
    {
        printf("Perimetro = %.1lf\n", a + b + c);
    }
    else
    {
        printf("Area = %.1lf\n", c * (a + b) / 2);
    }
    return 0;
}