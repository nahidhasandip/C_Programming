// A palindrome is a word, phrase, or sequence of characters that reads the same backward as forward. For example, "level", "madam", "civic" and "radar" are palindromes. Your task is to read a string and determine whether it is a palindrome or not. For this problem, you must consider all characters, including uppercase/lowercase letters, digits, spaces, and punctuation. A string is a palindrome only if it matches exactly with its reversed version (case-sensitive and space-sensitive).
// Input: The input consists of a single line containing the string S. S can not contain spaces and any printable ASCII characters. It's lenght contain (1 ≤ S ≤ 100).
// Output: If the string is a palindrome, print: Palindrome, Otherwise print: Not Palindrome.

#include <stdio.h>
int main()
{
    char str[100];
    int i, j = 0, Palindrome = 1;
    printf("Enetr a string: ");
    gets(str);

    while (str[j] != '\0')
    {
        j++;
    }
    j--;

    for (i = 0; i < j; i++, j--)
    {
        if (str[i] != str[j])
        {
            Palindrome = 0;
            break;
        }
    }

    if(Palindrome)
    {
        printf("The string is a Palindrome\n");
    }
    else
    {
        printf("The string is not a Palindrome\n");
    }

    return 0;
}