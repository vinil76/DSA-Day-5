#include <stdio.h>

int functionMin(int a, int b)
{
    if (a < b)
    {
        printf("%d is smaller", a);
    }
    else
    {
        printf("%d is smaller", b);
    }
}
int main()
{
    int x;
    printf("Enter the number ");
    scanf("%d", &x);
    int y;
    printf("Enter the number ");
    scanf("%d", &y);

    functionMin(x, y);
    return 0;
}