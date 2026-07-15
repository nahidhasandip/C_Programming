// Write a program that reads a single string and counts the number of capital letters and small letters in it. Capital letters are characters from 'A' to 'Z' and Small letters are characters from 'a' to 'z'. Your program should print the counts separately.
// Input: A single line containing a string of at most 100 characters. The string may contain spaces, digits, or special characters.
// Output: Print two lines:- First line: "Number of capital letters: X" and Second line: "Number of small letters: Y". Where X is the count of capital letters, and Y is the count of small letters.

#include <stdio.h>

int main()
{
    char str[100];
    int i, capital = 0, small= 0;

    printf("Enter a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capital++;
        }

        else
        {
            small++;
        }
    }

    printf("Capital letters: %d\n", capital);
    printf("Small letters: %d\n", small);

    return 0;
}
