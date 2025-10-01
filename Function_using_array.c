// You are given 5 integers stored in an array. Your task is to print all the array elements in the same order, but you must use a function to access the elements.
// Input: The input consists of 5 integers separated by a space.
// Output: Print the 5 integers in the same order, separated by a space.

#include <stdio.h>

void printArray (int size, int arr[])
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int size = 5;
    int numbers[] = {10, 20, 30, 40, 50};

    printArray(size, numbers);

    return 0;
}
