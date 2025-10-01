// Write a program that reads a single string and counts the number of capital letters and small letters in it. Capital letters are characters from 'A' to 'Z' and Small letters are characters from 'a' to 'z'. Your program should print the counts separately.
// Input: A single line containing a string of at most 100 characters. The string may contain spaces, digits, or special characters.
// Output: Print two lines: First line: "Number of capital letters: X" and Second line: "Number of small letters: Y". Where X is the count of capital letters, and Y is the count of small letters.

#include <stdio.h>

int main()
{
    int i;
    char str[100];
    int capitalCount = 0, smallCount = 0;

    printf("Enter a string: ");
    gets(str);

    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            capitalCount++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            smallCount++;
        }
        i++;
    }

    printf("Number of capital letters: %d\n", capitalCount);
    printf("Number of small letters: %d\n", smallCount);

    return 0;
}
