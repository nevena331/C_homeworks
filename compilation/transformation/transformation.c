#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "transformation.h"

transformation_t str_to_long (char* str)
{
    char *endptr;
    transformation_t tmp;
    char* error = "\0";
    tmp.result = strtol(str, &endptr, 10);
    if (*endptr != '\0')
    {
        tmp.result = 0;
        error = "invalid input string";
        strcpy(tmp.error, error);
    }
    return tmp;
}
