#include <stdio.h>

#define NAME(X) #X

#define DEBUG_HELPER(X)\
    printf("variable name: %s\n", NAME(X));\
    printf("value: %d\n", X);\
    printf("%s\n", __FILE__);\
    printf("line number: %d\n", __LINE__);
    
int  main(){
    int var = 18;
    DEBUG_HELPER(var);
    return 0;
}