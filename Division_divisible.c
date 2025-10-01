// Write a program that reads an integer N and checks whether it is divisible by both 3 and 5.If it is divisible by both, print "YES"; otherwise, print "NO".
// Input: A single line containing an integer N.
// Output: Print YES if N is divisible by both 3 and 5. Otherwise, print NO.

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N % 3 == 0 && N % 5 == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
