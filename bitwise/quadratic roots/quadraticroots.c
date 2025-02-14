#include "quadraticroots.h"
#include <stdio.h>
#include <math.h>

QuadraticRootsResult_t findroots(double a, double b, double c){
    //ax2 + bx + c = 0
    //D = bb - 4ac
    
    QuadraticRootsResult_t result;
    result.norealroots = 0;
    long double D = (b*b) - (4*a*c);
    printf("D =%Lf\n", D);
    if (D < 0){
        result.norealroots = 1;
        return result;
    }
    result.x1 = (-b + sqrtl(D))/(2*a);
    result.x2 = (-b - sqrtl(D))/(2*a);
    return result;
}