#include "safeint.h"
#include <limits.h>
#include <stdio.h>


SafeResult_t safe_add(long a,long b){
    SafeResult_t result;
    result.value = 0;
    result.errorflag = 0;
    if((a + b) > INT_MAX || (a + b) < INT_MIN){
        result.errorflag = 1;
    }else
        result.value = a + b;
    return result;
}

SafeResult_t safe_subtract(long a, long b){
    SafeResult_t result;
    result.value = 0;
    result.errorflag = 0;
    if((a - b) > INT_MAX || (a - b) < INT_MIN){
        result.errorflag = 1;
    }else
        result.value = a - b;
    return result;
}

SafeResult_t safe_multiply(long a, long b){
    SafeResult_t result;
    result.value = 0;
    result.errorflag = 0;
    if((a * b) > INT_MAX || (a * b) < INT_MIN){
        result.errorflag = 1;
    }else
        result.value = a * b;
    return result;
}

SafeResult_t safe_divide(long a, long b){
    SafeResult_t result;
    result.value = 0;
    result.errorflag = 0;
    if((a / b) > INT_MAX || (a / b) < INT_MIN){
        result.errorflag = 1;
    }else
        result.value = a / b;
    return result;
}


SafeResult_t safe_str_to_int(char* str){
    SafeResult_t result;
    result.value = 0;
    result.errorflag = 0;
    long res = 0;

    for(int i = 0; str[i] >= '0' && str[i] <= '9'; i++){
        res = res * 10 + (str[i] - '0');  
    }
    if(res > INT_MAX || res < INT_MIN){
        result.errorflag = 1;
    }else{
        result.value = res;
    }

    return result;
}

