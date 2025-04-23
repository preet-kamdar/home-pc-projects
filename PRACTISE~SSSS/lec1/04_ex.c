/*      celcius to fahrenheit       */
#include <stdio.h>

int main(){
    float c;
    printf("enter *celcius \t");
    scanf("%f", &c);
    printf("required conversion is \n%f*F", 1.8*c + 32);
                                        /*agar 1.8 ke badle (9/5) karna hota to (9.0/5.0) likhna padta*/
    return 0;
}