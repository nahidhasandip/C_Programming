// You are given an integer N in decimal format. Your task is to print the value of N in octal and hexadecimal number systems.
// Input: A single integer N (−10^9 ≤ N ≤ 10^9).
// Output: Print two lines: The first line must contain the octal representation of N. The second line must contain the hexadecimal representation of N (uppercase A–F).

#include <stdio.h>

int main() {
    int num;

    printf("Enter a Decimal number: ");
    scanf("%d", &num);

    printf("Octal       : %o\n", num);  
    printf("Hexadecimal : %X\n", num);   
  
    return 0;
}
