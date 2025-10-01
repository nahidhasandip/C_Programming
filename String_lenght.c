// You will be given a string "He l lo". Your task is to determine its length (the number of characters it contains).
// Input: The input consists of a single string (without spaces). The length of the string will not exceed 100 characters.
// Output: Print the length of the string.

#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i;
    printf("Enetr a string: ");
    gets(str);
    
    int lenght = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        lenght++;
    }
    printf("Lenght of the string is: %d\n", lenght);
    return 0;
}