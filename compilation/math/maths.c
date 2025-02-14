#include "maths.h"

long factorial (int num){
    long result;
    for(result = 1; num > 0; num--) result*= num;
}