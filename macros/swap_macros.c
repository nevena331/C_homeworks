#include <stdio.h>

#define SWAP(A, B, TYPE)\
    TYPE temp;\
    temp = A;\
    A = B;\
    B = temp;\


int main(){
    int a = 5;
    int b = 8;
    printf ("before swap: \na = %d\nb = %d\n", a, b);
    SWAP(a, b, int);
    printf ("after swap: \na = %d\nb = %d\n", a, b);
    return 0;
}