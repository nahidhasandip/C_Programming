// You are given an array of 'a' integers. Your task is to find the maximum number and the minimum number in the array.
// Input: The first line contains an integer N (1 ≤ N ≤ 1000) — the size of the array. The second line contains N integers (−10⁹ ≤ ai ≤ 10⁹) — the elements of the array.
// Output: Print the maximum number and the minimum number separated by a space.

#include<stdio.h>
int main()
{
    int a;
    printf("Enter the Size of elements: ");
    scanf("%d",&a);

    int arr[a];
    printf("Enter an array: ");
    for(int i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }

    int max = arr[0];
    for(int i=1; i<a; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    int min = arr[0];
    for(int i=1; i<a; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("Maximum Element: %d\n",max);
    printf("Minimum Element: %d\n",min);

    return 0;
}

