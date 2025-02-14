#include <stdio.h>
#include <math.h>

void print_array(long* arr, size_t size){
    for(int i = 0; i < size; i++){
        printf("%ld, ", arr[i]);
    }
    printf("\n");
}

void pow4(long* arr, size_t size){
    for(int i = 0; i < size; i++){
        arr[i] = pow(arr[i], 4);
    }
}


int main(){
    long arr[] = {2,3,4,5};
    size_t size = sizeof(arr)/sizeof(arr[0]);

    printf("Unchangend array:\n");
    print_array(arr, size);

    pow4(arr, size);

    printf("Changend array:\n");
    print_array(arr, size);

    return 0;
}

// runs with command  gcc pow4.c -lm