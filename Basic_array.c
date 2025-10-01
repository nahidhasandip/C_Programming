// You are given an array of 'n' integers. Your task is to read the elements and print them exactly as they were entered.
// Input: The first line contains an integer n (1 ≤ n ≤ 1000) — the size of the array. The second line contains 'n' integers — the elements of the array.
// Output: Print the array elements in a single line without spaces between them.

#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Elements in the array are: ");  
    for (i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}