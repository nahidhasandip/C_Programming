// You are given a string that may contain uppercase and lowercase English letters. Your task is to convert all the uppercase letters of the string into lowercase letters. The string will not contain digits, spaces, or special symbols — only alphabetic characters.
// Input: The input consists of a single line containing a string S (1 ≤ length(S) ≤ 100).
// Output: Print the same string, but with all characters in lowercase.

#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char str[100];
    printf("Enetr a Uppercase string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {

            str[i] = str[i] + 32;
        }
    }
    printf("Lowercase string is: %s\n", str);
    return 0;
}