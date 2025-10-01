// A prime number is a number greater than 1 that has no positive divisors other than 1 and itself. Write a program that reads an integer and determines whether it is a prime number or not. If the number is prime, print a message indicating so. Otherwise, print a message indicating it is not prime.
// Input: A single integer N (0 ≤ N ≤ 10^9).
// Output: Print a single line: If N is prime N is a prime number. If N is not prime N is not a prime number.

#include <stdio.h>

int main() {
int i, num, Prime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        Prime = 0;
    }

    else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                Prime = 0;
            }
        }
    }

    if (Prime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
