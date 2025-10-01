// Write a program that reads two integers A and B, and swaps their values using pointers. Finally, print the values of A and B after swapping.
// Input: The input consists of two integers A and B (−1000 ≤ A, B ≤ 1000).
// Output: Print the values of A and B after swapping.

#include <stdio.h>

int main() {
    int a, b;
    int *ptr1, *ptr2, temp;

    printf("Enter two integer numbers: ");
    scanf("%d %d", &a, &b);

    ptr1 = &a;
    ptr2 = &b;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping: A = %d, B = %d", a, b);

    return 0;
}
