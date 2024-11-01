#include <stdio.h>
int main()
{
    int n;
    int r;
    int sum1 = 1, sum2 = 1, sum3 = 1;
    printf("Enter the N Value : ");
    scanf("%d", &n);
    printf("Enter the R Value : ");
    scanf("%d", &r);

    for (int i = 1; i <= n; i++)
    {
        sum1 = sum1 * i;
    }
    for (int j = 1; j <= r; j++)
    {
        sum2 = sum2 * j;
    }
    int minus = n - r;
    for (int k = 1; k <= minus; k++)
    {
        sum3 = sum3 * k;
    }

    int result = sum1 / (sum2 * sum3);

    printf("The Value of %dC%d is %d ", n, r, result);

    return 0;
}