#include <stdio.h>
#include <stdlib.h>

#include "mystrings.h"

int main(int argc, char** argv){
    if (argc < 3)
        return 1;
    printf("%d\n", strcompare(argv[1], argv[2]));
    return 0;
}