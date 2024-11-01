#include <stdio.h>

int shree(int x, int y)
{
    int sum;
    sum = x + y;
    printf("sum of a num %d", sum);
}

int main()
{
    int a, b;
    printf("Enter the first number:");
    scanf("%d", &a);
    printf("Enter the second number:");
    scanf("%d", &b);

    shree(a, b);

    return 0;
}