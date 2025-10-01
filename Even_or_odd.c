// Take an integer input and check whether it is Even or Odd.If the number is Even, then output "EVEN".And if the number is Odd, then output "ODD".
// Input: An integer N (−1000 ≤ N ≤ 1000) is given as input.
// Output: If the number N is Even, then output "EVEN".If the number N is Odd, then output "ODD".

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d is Even.\n", number);
    }
    else
    {
        printf("%d is Odd.\n", number);
    }

    return 0;
}
