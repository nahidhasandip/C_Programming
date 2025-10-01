// Make a program that reads 3 integer values and present the greatest one followed by the message "eh o maior".
// Input: The input file contains 3 integer values.
// Output: Print the greatest of these three values followed by a space and the message “eh o maior”.

#include <stdio.h>

int main()
{
    int a, b, c, maior;
    scanf("%d %d %d", &a, &b, &c);
    maior = a;
    if (a < b || a < c)
    {
        if (b > c)
        {
            maior = b;
        }
        else
        {
            maior = c;
        }
    }
    printf("%d eh o maior\n", maior);
    return 0;
}