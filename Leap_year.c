// You are asked to determine whether a given year is a leap year or not. A year is a leap year if it satisfies one of the following conditions: The year is divisible by 4 and 400 and not divisible by 100.
// Input: The input consists of a single integer year (1 ≤ year ≤ 10^4) representing the year to be checked.
// Output: Print "Leap Year" if the given year is a leap year. Print "Not a Leap Year" if the given year is not a leap year.

#include <stdio.h>

int main()
{
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("%d is a leap year.\n", year);
    }
    else
    {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
