#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print_array(int* array, size_t size){
    for(int i = 0; i < size; i++){
        printf("%d, ", array[i]);
    }
    printf("\n");
}

void swap(int* ptr1, int* ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

void bubble_sort(int* array, size_t size)
{
    bool change = 1;
    int* ptr;
    while(change == 1){
        change = 0;
        for(int i = 0; i < size - 1; i++){
            ptr = array + i;
            if(*ptr > *(ptr + 1)){
                swap(ptr, ptr + 1);
                change = 1;
            }
        }
    }
}

int main(){
    int array[4] = {20, 40, 10, 30};
    size_t length = sizeof(array)/sizeof(array[0]);
    printf("unsorted array: ");
    print_array(array, length);
    bubble_sort(array, length);
    printf("sorted array: ");
    print_array(array, length);

    return 0;
}