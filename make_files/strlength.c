#include <stdio.h>
#include <stdlib.h>

#include "mystrings.h"

int main(int argc, char** argv){
    if (argc < 2)
        return 1;
    printf("%d\n", strlength(argv[1]));
    return 0;
}