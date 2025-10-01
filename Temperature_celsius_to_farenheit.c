// Write a program that reads a temperature in Celsius and converts it to Fahrenheit. The conversion formula is: F = {(C*9/5)+32}. Where: C = temperature in Celsius and F = temperature in Fahrenheit.
// Input: The input consists of a single floating-point number representing the temperature in Celsius.(−100≤ C ≤100).
// Output: Print the corresponding Fahrenheit temperature with two decimal places followed by a newline.

#include <stdio.h>

int main()
{
    int Celsius;
    float Fahrenheit;

    printf("Enter a Temperature in Celsius: ");
    scanf("%d", &Celsius);

    Fahrenheit = (Celsius * 9 / 5) + 32;    // Celsius = (Fahrenheit - 32) * 9 / 5

    printf("Temperature in Fahrenheit = %.2f\n", Fahrenheit);

    return 0;
}
