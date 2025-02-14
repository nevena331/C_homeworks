#include <stdio.h>
#include <stdlib.h>

int biggest_common_diviser(int a, int b){
    int diviser;
    if (a < b)
        diviser = a;
    else
        diviser = b;
    
    while(diviser > 0){
        if ( !(a % diviser)&& !(b % diviser)){
            break;
        }
        diviser--;
    }
    return diviser;

}

int main(){
    int a;
    int b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);    
    int bcd = biggest_common_diviser(a, b);

    int smallest_common_multiple = a * b / bcd;
    
    printf("smallest common multiple of %d and %d is %d\n", a, b, smallest_common_multiple);
    return 0;
}