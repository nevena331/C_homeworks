#include "safeint.h"
#include <stdio.h>

int main(int argc, char **argv){
    if(argc != 3){
        return 1;
    }
    int a;
    int b;
    if(!safe_str_to_int(argv[1]).errorflag)
        a = safe_str_to_int(argv[1]).value;
    if(!safe_str_to_int(argv[2]).errorflag)
        b = safe_str_to_int(argv[2]).value;
    
    if(!safe_subtract(a, b).errorflag)
        printf("%d - %d = %d\n", a, b, safe_subtract(a, b).value);
    else
        printf("overflow or underflow detected\n");
    return 0;
}