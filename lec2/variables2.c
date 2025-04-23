#include <stdio.h>
#include <math.h>
int main()
{
    float a, b;
    printf("enter dividend\n");
    scanf("%f", &a);
    printf("enter divisor\n");
    scanf("%f", &b);

    if (b == 0.0)
    {
        printf("illegal\n");
        return 1;
    }
    float remainder = fmod(a, b);
    printf("remainder is %.2f\n", remainder);

    if (remainder == 0.0)
    {
        printf("a divisible by b\n");
    }
    else
    {
        printf("a nit divisible by b");
    }
    return 0;
}