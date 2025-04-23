/*      area of circle(user defined)        */
#include <stdio.h>

int main(){
    int r;  
    //float a = 3.14;       /*this is lengthy, instaed;(line 8)*/
    printf("Enter Radius;\t");
    scanf("%d", &r);
    printf("required area = %f", 3.14*r*r); /*directly put 'a' as 3.14*/
    return 0;
}