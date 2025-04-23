/*      Q) check whether a number is divisible by another number or not     */
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter dividend:\n");
    scanf("%d", &a);
    printf("Enter your divisor:\n");
    scanf("%d", &b);
    if (b == 0)
    {
        printf("division is not possible\n");
    }
    printf("The remainder is %d\n", a % b);
    if (a % b == 0)
    {
        printf("%d is divisible by %d\n", a,b);
    }
    else
    {
        printf("%d is not divisible by %d\n", a,b);
    }
    return 0;
}