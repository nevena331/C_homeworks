#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str[102];
    printf("enter string up to 100 charachters: ");
    fgets(str, sizeof(str), stdin);
    printf("string with a new line: %s", str);
    char* ptr = strchr(str, '\n');
    *ptr = 0;
    printf("string without a new line: %s", str);
    return 0;
}