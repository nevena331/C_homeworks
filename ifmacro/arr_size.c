#include <stdio.h>

#define ARR_SIZE 5

#if ARR_SIZE > 0 && ARR_SIZE < 11
void print_elements_new_line(int* arr){
    for(int i = 0; i < ARR_SIZE; i++){
        printf("%d\n", arr[i]);
    }
}

// make elements of an array 2^i
void make_elements(int* arr){
    for (int i = 0; i < ARR_SIZE; i++){
        int element = 1;
        for(int j = i;j > 0; j--){
            element *= 2;
        }
        arr[i] = element;
    }
    print_elements_new_line(arr);
}

#endif

int  main(){
    #if ARR_SIZE < 1 || ARR_SIZE > 10
        printf("wrong array size\n"); 
    #else
        int arr[ARR_SIZE];
        make_elements(arr);

    #endif
    return 0;
}