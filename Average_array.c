// You are given an array of N integers. Your task is to calculate the average of all elements of the array.
// Input: The first line contains an integer N (1 ≤ N ≤ 1000) — the size of the array. The second line contains N integers (−10⁶ ≤ i ≤ 10⁶) — the elements of the array.
// Output: Print a single integer — the avaerage of all array elements.

#include <stdio.h>
int main()
{
    int i, n, sum = 0;
    float average;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements: ");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
         sum = sum + arr[i];
    }

    average = sum / n; 

    printf("Average of all elements: %.2f\n", average);

    return 0;
}