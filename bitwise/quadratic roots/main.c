#include <stdio.h>
#include <stdlib.h>
#include "quadraticroots.h"

int main(){
    double a;
    double b;
    double c;
    QuadraticRootsResult_t res;
    printf ("enter a,b,c(int):\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    res = findroots(a, b, c);

    printf("%.2lfxx + %.2lfx + %.2lf\n", a, b, c);
    if(res.norealroots == 0){
        printf("x1 = %.2lf\n", res.x1);
        printf("x2 = %.2lf\n", res.x2);
    }else{
        printf("no real roots\n");
    }

    printf ("enter a,b,c(float):\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    res = findroots(a, b, c);

    printf("%.2lfxx + %.2lfx + %.2lf\n", a, b, c);
    if(res.norealroots == 0){
        printf("x1 = %.2lf\n", res.x1);
        printf("x2 = %.2lf\n", res.x2);
    }else{
        printf("no real roots\n");
    }

    printf ("enter a,b,c(double):\n");
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    res = findroots(a, b, c);

    printf("%.2lfxx + %.2lfx + %.2lf\n", a, b, c);
    if(res.norealroots == 0){
        printf("x1 = %.2lf\n", res.x1);
        printf("x2 = %.2lf\n", res.x2);
    }else{
        printf("no real roots\n");
    }
}