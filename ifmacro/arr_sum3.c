#include <stdio.h>
#include <stdbool.h>

#define DEBUG 
//bubble sort
void swap_int(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort_array(int* arr, size_t length){
    bool change = 1;
    while(change == 1){
        change = 0;
        for(int i = 0; i < length - 1; i++){
            if(arr[i] > arr[i + 1]){
                swap_int(&(arr[i]), &(arr[i + 1]));
                change = 1;
            }
        }    
    }

    #ifdef DEBUG
        for(int i = 0; i < length; i++){
            printf("%d, ", arr[i]);
        }
        printf("\n");
    #endif
}

//sum of nums with indexes, multiples of 3

void sum_3_index(int* arr, size_t length){
    int sum = 0;
    printf("numbers with index, multiple of 3: ");
    for(int i = 0; i < length; i++){
        if(i % 3 == 0){
            printf("%d, ", arr[i]);
            sum += arr[i];
        }
    }
    printf("\nsum of numbers with index, multiple of 3: %d\n", sum);
}

int main(){
    int arr[] = {23, 56, 78, 12, 4, 21, 57, 73, 3, 10};
    size_t length;
    length = sizeof(arr)/sizeof(arr[0]);

    sort_array(arr, length);
    sum_3_index(arr, length);
    return 0;
}