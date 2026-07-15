// Write a program that reads two integers number1, number2 and swaps their values using pointers. Finally, print the values of number1 and Bnumber2 after swapping.
// Input: The input consists of two integers number1 and number2 (−1000 ≤ A, B ≤ 1000).
// Output: Print the values of A and B after swapping.

#include <stdio.h>

int main() 
{
    int num1, num2;
    int *ptr1, *ptr2, temp;

    printf("Enter two integer numbers: ");
    scanf("%d %d", &num1, &num2);

    ptr1 = &num1;
    ptr2 = &num2;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping: A = %d, B = %d", num1, num2);

    return 0;
}
