#include <stdio.h>
#include <stdlib.h>

int length_of_str(char* str){
    int i = 0;
    char* ptr = str;
    while(*ptr != '\0'){
        ptr++;
        i++;
    }
    return i;
}

void strhalf(char* string, char ** ptr){
    int length = length_of_str(string);
    *ptr = string + length/2;
}


int main(){
    char* string = "mystrings";
    printf("length of %s is %d\n", string, length_of_str(string));
    char* secondhalf = NULL;
    strhalf(string, &secondhalf);
    printf("full string: %s\n", string);
    printf("second half of string: %s\n", secondhalf);
    return 0;
}