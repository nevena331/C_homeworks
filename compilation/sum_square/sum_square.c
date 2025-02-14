#include <stdio.h>
#include <math.h>

#define SUM_MACRO(A, B) ((A + B)*(A + B))

int main(){
    int a = 5; 
    int b = 6;

    printf("the square of the sum of %d and %d is %d\n", a, b, SUM_MACRO(a, b));
    return 0;
}