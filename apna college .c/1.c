#include <stdio.h>
// #include <math.h>
int main()
{
    int a;
    printf("enter number: \t");
    scanf("%d", &a);
    int x = a % 2;
    // printf("%d\n", x);
    // upar vali line ko include karne pe 0 and 1 output bhi milega
    if (x == 0)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
    return 0;
}