#include <stdio.h>
#include <stdbool.h>

#define SWAP(A, B, TYPE)\
    TYPE temp;\
    temp = A;\
    A = B;\
    B = temp;\

#define SORT(ARRAY, SIZE, TYPE, COMPARE)\
    bool change = 1;\
    while(change == 1){\
        change = 0;\
        for(int i = 0; i < SIZE - 1; i++){\
            if(ARRAY[i] COMPARE ARRAY[i + 1]){\
                SWAP(ARRAY[i], ARRAY[i + 1], TYPE);\
                change = 1;\
            }\
        }\
    }\

void print_arr(int* arr, size_t length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int main(){
    int arr[] = {23, 70, 98, 12, 4};
    size_t length = sizeof(arr)/ sizeof(arr[0]);
    print_arr(arr, length);
    SORT(arr, length, int, >);
    print_arr(arr, length);
}