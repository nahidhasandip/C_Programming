// Write a program like the code below where the user will give his age, height, grade, pi value and big number as input and their values ​​will be printed as output.
// Input: First, a user's age, height, grade, pi value, and big number should be taken as input.
// Output: The values ​​given by the user should be printed in the correct format.

#include <stdio.h>

int main()
{
    int age;
    float height;
    char grade;
    double pi;
    long long bignumber;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your height: ");
    scanf("%f", &height);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter the value of pi: ");
    scanf("%lf", &pi);

    printf("Enter a big number: ");
    scanf("%lld", &bignumber);

    printf("Age: %d\n", age);
    printf("Height: %f\n", height);
    printf("Grade: %c\n", grade);
    printf("Pi: %.4lf\n", pi);
    printf("Big number: %lld\n", bignumber);

    return 0;
}