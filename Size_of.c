// In C, different data types use different amounts of memory. Your task is to print the size (in bytes) of some basic C data types using the sizeof operator. You must declare one variable of each type and then display the size of each variable.
// Input: There is no input for this problem.
// Output: Print four lines, each showing the size in bytes of the following types in this order: int, char, float and double.

#include <stdio.h>

int main()
{
    int i;
    char c;
    float f;
    double d;

    printf("Size of int: %d bytes\n", sizeof(i));
    printf("Size of char: %d bytes\n", sizeof(c));
    printf("Size of float: %d bytes\n", sizeof(f));
    printf("Size of double: %d bytes\n", sizeof(d));

    return 0;
}
