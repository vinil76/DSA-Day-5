#include <stdio.h>

int funSum(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf("Sum of the Number is : %d", sum);
}

int main()
{
    int n;
    printf("Enter the number :");
    scanf("%d", &n);
    funSum(n);

    return 0;
}