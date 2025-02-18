#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void print_array(int* arr, size_t size){
    printf("array: ");
    for(int i = 0; i < size; i++){
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void swap(void* ptr1, void* ptr2){
    int temp = *(int*)ptr1;
    *(int*) ptr1 = *(int*)ptr2;
    *(int*) ptr2 = temp;
}

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


int bubble_sort(int* arr, size_t size, int(* compare)(const void*, const void*), void(* swap_elements)(void*, void*)){
    bool change = 1;
    while(change == 1){
        change = 0;
        for(int i = 0; i < size - 1; i++){
            if(compare(&arr[i], &arr[i + 1]) == 1){
                swap_elements(&arr[i], &arr[i + 1]);
                change = 1;
            }
        }    
    }
}

int main(){
    int arr[5] = {2, 4, 5, 1, 3};
    print_array(arr, sizeof(arr)/sizeof(arr[0]));
    bubble_sort(arr, sizeof(arr)/sizeof(arr[0]), &compareasc, &swap);
    print_array(arr, sizeof(arr)/sizeof(arr[0]));
    bubble_sort(arr, sizeof(arr)/sizeof(arr[0]), &comparedesc, &swap);
    print_array(arr, sizeof(arr)/sizeof(arr[0]));
    return 0;
}   