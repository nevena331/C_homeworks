#include <stdlib.h>
#include <stdio.h>
int main(){
    double x1;
    double x2;

    printf("enter first variable: ");
    scanf("%lf", &x1);
    printf("enter second variable: ");
    scanf("%lf", &x2);

    double* ptr1 = &x1;
    double* ptr2 = &x2;

    printf("address of ptr1: %p\n", &ptr1);
    printf("address, where ptr1 points to: %p (address of x1)\n", ptr1);
    printf("value of the addres, that ptr1 points to: %lf\n", *ptr1);

    printf("\naddress of ptr2: %p\n", &ptr2);
    printf("address, where ptr2 points to: %p (address of x2)\n", ptr2);
    printf("value of the address, that ptr2 points to: %lf\n", *ptr2);
    return 0;
}