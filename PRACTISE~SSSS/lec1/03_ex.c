/*      area of cylinder(user defined)      */
#include <stdio.h>

int main(){
    int r;  
    int h;
    printf("Enter Radius;\t");
    scanf("%d", &r);
    printf("Enter Height;\t");
    scanf("%d", &h);
    printf("required area = %f", 3.14*r*r*h); 
    return 0;
}