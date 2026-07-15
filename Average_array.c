// You are given an array of N integers. Your task is to calculate the average of all elements of the array.
// Input: The first line contains an integer N (1 ≤ N ≤ 1000) — the size of the array. The second line contains N integers (−10⁶ ≤ i ≤ 10⁶) — the elements of the array.
// Output: Print a single integer — the avaerage of all array elements.

#include <stdio.h>
int main()
{
    int i, num, sum = 0;
    float Average;
    printf("Enter the size of elements: ");
    scanf("%d", &num);

    int arr[num];
    
    printf("Enter an array: ");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < num; i++)
    {
         sum = sum + arr[i];
    }

    Average = (float)sum / num; 

    printf("Average: %.2f\n", Average);

    return 0;
}