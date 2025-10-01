// You are given an array of 'a' integers and an integer 'x'. Your task is to check if 'x' exists in the array or not. If it exists, print "Find". Otherwise, print "Not Find".
// Input: First line: integer 'a' (1 ≤ a ≤ 1000). Second line: 'a' integers (the array). Third line: integer 'x'.
// Output: Print "Find" if 'x' exists. Otherwise, print "Not Find".

#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    int arr[a];
    for(int i=0; i<a; i++)
    {
        scanf("%d",&arr[i]);
    }

    int x;
    scanf("%d",&x);

    int b = 0;
    for(int i=0; i<a; i++)
    {
        if(arr[i] == x)
        {
            b = 1;
            break;           
        }
    }
    
    if(b) printf("Find\n");
    else printf("Not Find\n");

    return 0;
}