// Write a program that reads an integer number between 1 and 7 and displays the corresponding day of the week in English. Use a switch-case statement to handle the logic. If the number is not between 1 and 7, print the message: Invalid input! Please enter a number between 1 and 7.
// input: A single line containing an integer number.
// Output: Print the name of the day corresponding to the number.

#include <stdio.h>

int main()
{
    int day;
    printf("Enter a number (1-7):");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Saturday\n");
        break;
    case 2:
        printf("Sunday\n");
        break;
    case 3:
        printf("Monday\n");
        break;
    case 4:
        printf("Tuesday\n");
        break;
    case 5:
        printf("Wednesday\n");
        break;
    case 6:
        printf("Thursday\n");
        break;
    case 7:
        printf("Friday\n");
        break;

    default:
        printf("Invalid input! Please enter a number between 1 and 7.\n");
    }

    return 0;
}
