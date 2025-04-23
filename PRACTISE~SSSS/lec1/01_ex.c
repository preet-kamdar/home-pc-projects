/*      Q) calculate the area of a rectangle(user defined)      */
#include <stdio.h>

int main()
{
    int length, breadth;
    printf("enter length;\t");
    scanf("%d", &length);
    printf("enter breadth;\t");
    scanf("%d", &breadth);
    printf("Required Area = %d", length * breadth);
    return 0;
}