#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mystrings.h"

int main(int argc, char** argv){
    if (argc < 3)
        return 1;
    if (strlen(argv[1]) > 50 || strlen(argv[2]) > 50)
        return 2;
    
    char str1[101];
    strcpy(str1, argv[1]);

    strconcat (str1, argv[2]);

    printf("%s\n", str1);
    return 0;
}