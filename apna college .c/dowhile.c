#include <stdio.h>

int main()
{
    int i = 1;
    int n;
    int sum;
    printf("enter the no.\n");
    scanf("%d", &n);
    do
    {
        sum += i;
        i++;
    } while (i <= n);
    printf("the sum of first %d natural numbers is: %d\n", n, sum);
    return 0;
}