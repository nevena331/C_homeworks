#include <stdio.h>
#define COMPARISON(A, B) (A > B? A:B)

int main(){
    printf("the bigger num is %d\n", COMPARISON(5, 3));
}