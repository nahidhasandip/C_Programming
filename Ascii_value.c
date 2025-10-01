// In the world of computers, every character you see — letters, numbers, and symbols — is stored as a number in memory. This number is called the ASCII code. Your task is very simple: given a single character as input, determine its ASCII value and print it.
// Input: You will receive a single character. It can be uppercase, lowercase, digit, space or any printable ASCII symbol (@, !, ~).
// Output: Print the ASCII value of the given character.

#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    printf("The ASCII value of '%c' is: %d\n", ch, ch);

    return 0;
}
