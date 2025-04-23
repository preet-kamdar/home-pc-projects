/*      simple intrest      */
#include <stdio.h>

int main()
{
    float p;
    float r;
    float t;
    printf("enter value of P \t");
    scanf("%f", &p);
    printf("enter value of R \t");
    scanf("%f", &r);
    printf("enter value of T \t");
    scanf("%f", &t);
    printf("the simple intrest thus calculated is; \t%f", (p * r * t) / 100);
    // enter value of p r t in decimal
    return 0;
}