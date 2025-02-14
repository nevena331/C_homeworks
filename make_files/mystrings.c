#include "mystrings.h"

int strlength(char* string){
    int i = 0;;
    while (string[i] != '\0')i++;
    return i;
}

void strconcat(char* str1, char* str2){
    int length_str1 = strlength(str1);
    int i = 0;
    do{
        str1[length_str1 + i] = str2[i];
        i++;
    }while (str2[i] != '\0');   
}

int strcompare (char* str1, char* str2){
    int i;
    for (i = 0; str1[i] == str2[i] && str1[i] != '\0'; i++);

    if (str1[i] > str2[i]) return 1;
    else if (str2[i] > str1[i]) return -1;
    else return 0;
}
