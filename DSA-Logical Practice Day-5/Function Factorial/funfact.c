#include <stdio.h>

void funFact(int num)
{
    int sum = 1;
    for (int i = 1; i <= num; i++)
    {
        sum = sum * i;
    }
    printf("Factorial of a %d Number %d", num, sum);
}
int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    funFact(n);

    return 0;
}