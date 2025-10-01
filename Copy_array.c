// You are given an array of integers. Your task is to copy all the elements of the first array into another array and then print the copied array.
// Input: The first line contains a single integer N (1 ≤ N ≤ 100) the number of elements in the array. The second line contains N integers separated by space, where each integer X satisfies (-1000 ≤ X ≤ 1000).
// Output: Print all the elements of the copied array in a single line separated by a space.

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr1[n], arr2[n];
    printf("Enter the elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    printf("Elements in the copied array are: ");
    
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}
