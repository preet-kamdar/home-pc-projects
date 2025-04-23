#include <stdio.h>

int main()
/*{
    // printf("Hello World");
    int a; // var ko declare kia
    a = 6; // var ko inntiate kiaṇ
    printf("the output of this programme is %d", a);
    return 0;
}*/

{
    int a;
    scanf("%d", &a); //&= address of a
                    // %d= int; %f= float; %c= char. AND & IS NECESSARY FOR SCANF:)
    printf(" a's value = %d", a);
    return 0;
}