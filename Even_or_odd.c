// Take an integer input and check whether it is Even or Odd.If the number is Even, then output "EVEN".And if the number is Odd, then output "ODD".
// Input: An integer N (−1000 ≤ N ≤ 1000) is given as input.
// Output: If the number N is Even, then output "EVEN".If the number N is Odd, then output "ODD".

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("%d is Even.\n", num);
    }
    
    else
    {
        printf("%d is Odd.\n", num);
    }

    return 0;
}
