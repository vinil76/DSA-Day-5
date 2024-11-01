#include <stdio.h>
int funSumDig(int n)
{
    int sum = 0;
    int lastdigit = 0;
    int originalnum = n;

    if (n == 0)
    {
        printf("0");
    }
    else
    {
        while (n != 0)
        {
            lastdigit = n % 10;
            sum = sum + lastdigit;
            n = n / 10;
        }
        n = originalnum;
        printf("The Sum of Digit %d is %d", n, sum);
    }
}

int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d", &num);
    funSumDig(num);

    return 0;
}