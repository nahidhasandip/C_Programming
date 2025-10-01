// Write a program that reads an integer number and prints its value using a pointer.
// Input: The input consists of a single integer N (−1000 ≤ N ≤ 1000).
// Output: Print the value of the integer using a pointer.

#include <stdio.h>

int main() {
    int num;
    int *ptr;
    
    printf("Enter a number: ");
    scanf("%d", &num); 

    ptr = &num;         

    printf("Value = %d\n", *ptr);  

    return 0;
}
