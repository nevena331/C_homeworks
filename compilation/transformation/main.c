#include <stdio.h>
#include <stdlib.h>
#include "transformation.h"

int main()
{
    char str1[] = "123456";
    transformation_t tmp1 = str_to_long(str1);
    printf("result: %ld \nerror: %s\n", tmp1.result, tmp1.error);
    
    char str2[] = "ADS6";
    transformation_t tmp2 = str_to_long(str2);
    printf("result: %ld \nerror: %s\n", tmp2.result, tmp2.error);

    return 0;
}