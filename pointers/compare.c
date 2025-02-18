#include <stdio.h>
#include <stdlib.h>

int compareasc(const void* const constptr1, const void* const constptr2){
    if(*(int*)constptr1 > *(int*)constptr2){
        return 1;
    }else if(*(int*)constptr1 < *(int*)constptr2){
        return -1;
    }else{
        return 0;
    } 
}

int comparedesc(const void* const constptr1, const void* const constptr2){
    if(*(int*)constptr1 > *(int*)constptr2){
        return -1;
    }else if(*(int*)constptr1 < *(int*)constptr2){
        return 1;
    }else{
        return 0;
    } 
}

int main(){
    int a = 5;
    int b = 10;

    printf("compareasc: %d\n", compareasc(&a, &b));
    printf("comparedesc: %d\n", comparedesc(&a, &b));
    return 0;
}