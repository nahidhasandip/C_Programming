// Make a program that reads three floating point values: A, B and C. Then, calculate and show: (a) the area of the rectangled triangle that has base A and height C. (b) the area of the radius's circle C. (pi = 3.1416). (c) the area of the trapezium which has A and B by base, and C by height. (d) the area of ​​the square that has side B. (e) the area of the rectangle that has sides A and B.
// Input: The input file contains three double values with one digit after the decimal point.
// Output: The output file must contain 5 lines of data. Each line corresponds to one of the areas described above, always with a corresponding message and one space between the two points and the value. The value calculated must be presented with 3 digits after the decimal point.

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    double triangle, circle, trapezoid, square, rectangle;
    double pi = 3.1416;

    printf("Enter three values (a, b, c): ");
    scanf("%f %f %f", &a, &b, &c);

    triangle = 0.5 * a * c;
    circle = pi * c * c;
    trapezoid = 0.5 * (a + b) * c;
    square = b * b;
    rectangle = a * b;

    printf("Triangle Area: %.3lf\n", triangle);
    printf("Circle Area: %.3lf\n", circle);
    printf("Trapezoid Area: %.3lf\n", trapezoid);
    printf("Square Area: %.3lf\n", square);
    printf("Rectangle Area: %.3lf\n", rectangle);

    return 0;
}