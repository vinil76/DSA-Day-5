#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    int lastdigit;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int originalnum = n;

    if (n == 0)
    {
        printf("0");
    }

    while (n != 0)
    {
        lastdigit = n % 10;
        sum = sum + lastdigit;
        n = n / 10;
    }

    n = originalnum;

    printf("Sum of Digits in a number %d is : %d ", n, sum);
    return 0;
}