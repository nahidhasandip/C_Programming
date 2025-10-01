// In the English alphabet, the letters A, E, I, O, U are considered vowels (both uppercase and lowercase). All the other alphabetic letters are considered consonants. Your task is to read a string and determine how many vowels and how many consonants it contains. The string will only contain alphabetic characters without spaces, digits, or special symbols.
// Input: The input consists of a single line containing the string S (1 ≤ length(S) ≤ 100).
// Output: Print two lines: The first line shows the number of vowels in the string, followed by the word "vowels". The second line shows the number of consonants in the string, followed by the word "consonants".

#include <stdio.h>
int main()
{
    char str[100];
    int i, vowel = 0, consonant = 0; 
    printf("Enetr a string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else 
        {
            consonant++;
        }
    }

    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonant);

    return 0;
}