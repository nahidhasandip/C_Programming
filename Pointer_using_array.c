// You are given 5 integers stored in an array. Your task is to print all the array elements in the same order, but you must use a pointer to access the elements.
// Input: The input consists of 5 integers separated by a space.
// Output: Print the 5 integers in the same order, separated by a space.

#include <stdio.h>

int main()
{

    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;

    ptr = arr;

    printf("Array elements using pointer:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", *(ptr + i));
    }

    return 0;
}
