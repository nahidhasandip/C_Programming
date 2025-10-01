// You are given a string. Your task is to print the string, but instead of accessing it directly with array indexing you must use a function to traverse the string character by character until the end of the string.
// Input: The input contains a single string without spaces with a maximum length of 100 characters.
// Output: Print the same string exactly as given in the input.

#include <stdio.h>

void printString (char str[])    
{
    printf("Your string is: \n%s", str);
}

int main()
{
    char name[] = "Hello Pointer!";

    printString(name);          

    return 0;
}
