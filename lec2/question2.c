/*      evaluate step by step 3*x/y-z+k, where x=2, y=3, z=3, k=1       */
#include <stdio.h>

int main(){
    int  x=2, y=3, z=3, k=1, a= 3*x/y-z+k;
// 6/y-z+k
// 2-z+k
// -1+k
// -1+1=0
printf("value of the given operation is, %d", a);
return 0;
}