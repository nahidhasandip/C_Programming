// Given a string, your task is to reverse it and print the reversed version. The string may contain letters, digits, punctuation and spaces — reverse every character. This problem tests simple string-processing skill and careful handling of whitespace and special characters.
// Input: The input consists of a single line containing the string S. S can not contain spaces and any printable ASCII characters. It's lenght contain (1 ≤ S ≤ 100).
// Output: Print a single line the string S reversed (characters in reverse order).

#include <stdio.h>
int main()
{
    char str[100], temp;
    int i, j=0;
    printf("Enter a string: ");
    gets(str);
    
    while (str[j] != '\0')
    {
        j++;
    }
    j--;

    for (i = 0; i < j; i++, j--)
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Revered string is: %s\n", str);
    return 0;
}